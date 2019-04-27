// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "Materials/Material.h"
#include "Components/StaticMeshComponent.h"
#include "GG_RTS_Construction.generated.h"

UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_Construction : public AActor
{
	GENERATED_BODY()
	
public:	
	AGG_RTS_Construction();

	virtual void Tick(float DeltaTime) override;

	virtual void SetIsSelected(bool isSelected);

protected:
	virtual void BeginPlay() override;

private:	

};
