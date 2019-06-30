// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GG_RTS_Construction.h"
#include "GG_RTS_UnitBuilding.generated.h"

/**
 * 
 */
USTRUCT()
struct FQueuedUnit
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY()
	FVector spawnPoint;
	UPROPERTY()
	FRotator spawnRotation;

	FQueuedUnit()
	{
		spawnPoint = FVector();
		spawnRotation = FRotator();
	}

	FQueuedUnit(FVector spawnPos, FRotator spawnRot)
	{
		spawnPoint = spawnPos;
		spawnRotation = spawnRot;
	}

};

UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_UnitBuilding : public AGG_RTS_Construction
{
	GENERATED_BODY()

public:
	AGG_RTS_UnitBuilding();

	void Tick(float DeltaTime) override;

	void SetIsSelected(bool isSelected) override;

	float GetTimeUntilBuilt() override;
	void SetTimeUntilBuilt(float dt) override;

	float GetBuildTime() override;

	bool IsBuilt() override;
	void SetIsBuilt(bool bl) override;

	bool IsPaid() override;
	void SetIsPaid(bool bl) override;

	void TrainUnit(FVector spawnPos, FRotator spawnRot);

	OwningType GetType() override;

private:
	UPROPERTY(EditAnywhere)
		USphereComponent* sphereComponent;

	UPROPERTY(EditAnywhere)
		UDecalComponent* cursorToWorld;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* staticMesh;

	UPROPERTY(EditAnywhere)
		TArray<struct FQueuedUnit> unitQueue;

	OwningType buildingType;

	bool isBuilt;
	bool isPaid;
	bool trainingUnit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = ConstructionSettings)
	float timeUntilBuilt;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = ConstructionSettings)
	float buildTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = ConstructionSettings)
	float timeUntilTrained;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = ConstructionSettings)
	float trainTime;
};
