// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GG_RTS_Worker.generated.h"

UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_Worker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGG_RTS_Worker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
