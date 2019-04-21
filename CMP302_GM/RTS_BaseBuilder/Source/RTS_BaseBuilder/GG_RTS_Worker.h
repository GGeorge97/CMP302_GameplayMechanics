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
#include "GG_RTS_ActionTasks.h"
#include "GG_RTS_MovementTask.h"
#include "GG_RTS_ConstructionTask.h"
#include "GG_RTS_CollectionTask.h"
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
	void AddTask(Action actionType);

	TArray<GG_RTS_ActionTasks*> taskStack;

protected:
	virtual void BeginPlay() override;

private:
	void CompleteTasks();

	UPROPERTY()
		class UDecalComponent* cursorToWorld;

	UPROPERTY()
		class USkeletalMeshComponent* skeletalMesh;
};
