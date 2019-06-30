// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "Materials/Material.h"
#include "Components/SkeletalMeshComponent.h"
#include "EngineUtils.h"
#include "GG_RTS_ActionTasks.h"
#include "GG_RTS_MovementTask.h"
#include "GG_RTS_ConstructionTask.h"
#include "GG_RTS_CollectionTask.h"
#include "GG_RTS_Resource.h"
#include "GG_RTS_Worker.generated.h"


UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_Worker : public ACharacter
{
	GENERATED_BODY()
	
public:	
	AGG_RTS_Worker();
	 
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return cursorToWorld; }

	void SetIsSelected(bool isSelected);
	void RunTask(Action actionType, AGG_RTS_Construction* buildingActor, AGG_RTS_Resource* resourceActor, FVector hitLocation, int formationIndex);
	void AddTask(Action actionType, AGG_RTS_Construction* buildingActor, AGG_RTS_Resource* resourceActor, FVector hitLocation, int formationIndex);

	bool FindNearestDepot();
	bool FindNearestResource();

	FVector GetNearestDepot() { return nearestDepot; };
	AGG_RTS_Resource* GetNearestResource() { return nearestResource; };

	inline int GetMaxCarry() { return workerInventory.maxCarry; };

	inline int32 GetWoodCarried() { return workerInventory.woodCarried; };
	inline void SetWoodCarried(int32 setVal) { workerInventory.woodCarried = setVal; };
	inline void AddWoodCarried(int32 addVal) { workerInventory.woodCarried += addVal; };

	inline int32 GetStoneCarried() { return workerInventory.stoneCarried; };
	inline void SetStoneCarried(int32 setVal) { workerInventory.stoneCarried = setVal; };
	inline void AddStoneCarried(int32 addVal) { workerInventory.stoneCarried += addVal; };

	TArray<GG_RTS_ActionTasks*> taskStack;

protected:
	virtual void BeginPlay() override;

private:
	struct WorkerInventory
	{
		UPROPERTY()
		int32 maxCarry = 100;
		UPROPERTY()
		int32 woodCarried = 0;
		UPROPERTY()
		int32 stoneCarried = 0;
	} workerInventory;

	UPROPERTY()
	class UDecalComponent* cursorToWorld;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* skeletalMesh;

	FVector nearestDepot;
	AGG_RTS_Resource* nearestResource;

	ResourceType lastResourceTaskType;

	float depotDistance;
	float resourceDistance;
};
