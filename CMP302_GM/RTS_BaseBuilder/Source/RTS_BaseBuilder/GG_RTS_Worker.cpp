// Developed by Gavin George


#include "GG_RTS_Worker.h"

AGG_RTS_Worker::AGG_RTS_Worker()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	cursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	cursorToWorld->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/TopDownCPP/Blueprints/M_Cursor_Decal.M_Cursor_Decal'"));
	if (DecalMaterialAsset.Succeeded())
		cursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
	cursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
	cursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());
	cursorToWorld->SetVisibility(false);

	skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMesh");
	USkeletalMesh* skeletalMeshAsset = LoadObject<USkeletalMesh>(nullptr, TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin"));
	skeletalMesh->SetupAttachment(RootComponent);
	skeletalMesh->SetSkeletalMesh(skeletalMeshAsset);
	FTransform correctedTransform = skeletalMesh->GetComponentTransform();
	correctedTransform.SetLocation(FVector(0.0f, 0.0f, -90.0f));
	correctedTransform.SetRotation(FQuat(FRotator(0.0f, -90.0f, 0.0f)));
	skeletalMesh->SetRelativeTransform(correctedTransform);
}

void AGG_RTS_Worker::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGG_RTS_Worker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (taskStack.Num() > 0)
	{
		if (taskStack[0]->GetTaskStatus() == QUEUED)
		{ 
			UE_LOG(LogTemp, Log, TEXT("BEGIN"));
			taskStack[0]->BeginTask(); 
		}

		else if (taskStack[0]->GetTaskStatus() == IN_PROGRESS)
		{
			UE_LOG(LogTemp, Log, TEXT("RUNNING"));
			taskStack[0]->IsTaskComplete();
		}
		else if (taskStack[0]->GetTaskStatus() == COMPLETE)
		{
			UE_LOG(LogTemp, Log, TEXT("POP"));
			taskStack.RemoveAt(0, 1, true);
		}
	}
}

void AGG_RTS_Worker::SetIsSelected(bool isSelected)
{
	cursorToWorld->SetVisibility(isSelected);
}

void AGG_RTS_Worker::RunTask(Action actionType, FVector hitLocation, int formationIndex)
{
	taskStack.Empty();
	switch (actionType)
	{
	case MOVE:
		taskStack.Push(new GG_RTS_MovementTask(this, hitLocation, formationIndex));
		break;

		//case COLLECT:
		//	taskStack.Push(new GG_RTS_CollectionTask(this, hitLocation, formationIndex));
		//	break;

		//case CONSTRUCT:
		//	taskStack.Push(new GG_RTS_ConstructionTask(this, hitLocation, formationIndex));
		//	break;
	}
}

void AGG_RTS_Worker::AddTask(Action actionType, FVector hitLocation, int formationIndex)
{
	switch (actionType)
	{
	case MOVE:
		taskStack.Push(new GG_RTS_MovementTask(this, hitLocation, formationIndex));
		break;

	//case COLLECT:
	//	taskStack.Push(new GG_RTS_CollectionTask(this, hitLocation, formationIndex));
	//	break;

	//case CONSTRUCT:
	//	taskStack.Push(new GG_RTS_ConstructionTask(this, hitLocation, formationIndex));
	//	break;
	}
}

