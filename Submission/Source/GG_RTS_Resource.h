// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "Materials/Material.h"
#include "Components/StaticMeshComponent.h"
#include "GG_RTS_Resource.generated.h"

enum ResourceType
{
	WOOD, STONE
};

UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_Resource : public AActor
{
	GENERATED_BODY()
	
public:	
	AGG_RTS_Resource();

	virtual void Tick(float DeltaTime) override;

	virtual ResourceType GetType();

	virtual void DepleteResourceBy(int32 inVal);

	virtual bool GetIsDepleted();
	virtual void SetIsDepleted(bool inVal);

protected:
	virtual void BeginPlay() override;

};
