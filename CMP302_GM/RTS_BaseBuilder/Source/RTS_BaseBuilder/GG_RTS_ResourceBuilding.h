// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GG_RTS_Construction.h"
#include "GG_RTS_ResourceBuilding.generated.h"

/**
 * 
 */
UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_ResourceBuilding : public AGG_RTS_Construction
{
	GENERATED_BODY()

public:
	AGG_RTS_ResourceBuilding();

	void SetIsSelected(bool isSelected) override;

	float GetTimeUntilBuilt() override;
	void SetTimeUntilBuilt(float dt) override;

	float GetBuildTime() override;

	bool IsBuilt() override;
	void SetIsBuilt(bool bl) override;

	OwningType GetType() override;

private:
	UPROPERTY(EditAnywhere)
		USphereComponent* sphereComponent;

	UPROPERTY(EditAnywhere)
		UDecalComponent* cursorToWorld;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* staticMesh;

	OwningType buildingType;

	bool isBuilt;

	float timeUntilBuilt;
	float buildTime;
};
