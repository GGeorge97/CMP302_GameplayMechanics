// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GG_RTS_Construction.h"
#include "GG_RTS_UnitBuilding.generated.h"

/**
 * 
 */
UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_UnitBuilding : public AGG_RTS_Construction
{
	GENERATED_BODY()

public:
	AGG_RTS_UnitBuilding();

	void SetIsSelected(bool isSelected) override;

private:
	UPROPERTY(EditAnywhere)
		USphereComponent* sphereComponent;

	UPROPERTY(EditAnywhere)
		UDecalComponent* cursorToWorld;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* staticMesh;
	
};
