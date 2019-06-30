// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "Materials/Material.h"
#include "Components/StaticMeshComponent.h"
#include "GG_RTS_Construction.generated.h"

enum OwningType
{
	WORKER, UNIT_BUILDING, RES_BUILDING
};

UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_Construction : public AActor
{
	GENERATED_BODY()
	
public:	
	AGG_RTS_Construction();

	virtual void Tick(float DeltaTime) override;

	virtual void SetIsSelected(bool isSelected);

	virtual float GetTimeUntilBuilt();
	virtual void SetTimeUntilBuilt(float dt);

	virtual float GetBuildTime();

	virtual bool IsBuilt();
	virtual void SetIsBuilt(bool bl);

	virtual bool IsPaid();
	virtual void SetIsPaid(bool bl);

	virtual OwningType GetType();

protected:
	virtual void BeginPlay() override;
};
