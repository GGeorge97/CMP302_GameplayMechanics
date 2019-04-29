// Developed by Gavin George


#include "GG_RTS_Worker.h"
#include "GG_RTS_Resourcebuilding.h"

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
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> skeletalAnimBP(TEXT("AnimBlueprint'/Game/Mannequin/Animations/ThirdPerson_AnimBP.ThirdPerson_AnimBP'"));
	skeletalMesh->SetAnimInstanceClass(skeletalAnimBP.Object->GetAnimBlueprintGeneratedClass());
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
		if (taskStack[0]->GetTaskStatus() == QUEUED) taskStack[0]->BeginTask(); 

		else if (taskStack[0]->GetTaskStatus() == IN_PROGRESS) taskStack[0]->IsTaskComplete(DeltaTime);

		else if (taskStack[0]->GetTaskStatus() == COMPLETE) taskStack.RemoveAt(0, 1, true);
	}
}

void AGG_RTS_Worker::SetIsSelected(bool isSelected)
{
	cursorToWorld->SetVisibility(isSelected);
}

void AGG_RTS_Worker::RunTask(Action actionType, AGG_RTS_Construction* buildingActor, AGG_RTS_Resource* resourceActor, FVector hitLocation, int formationIndex)
{
	taskStack.Empty();
	switch (actionType)
	{
	case MOVE:
		taskStack.Push(new GG_RTS_MovementTask(this, hitLocation, formationIndex));
		break;

	case CONSTRUCT:
		taskStack.Push(new GG_RTS_ConstructionTask(this, buildingActor, hitLocation));
		break;

	case COLLECT:
		lastResourceTaskType = resourceActor->GetType();
		taskStack.Push(new GG_RTS_CollectionTask(this, resourceActor, hitLocation));
		break;

	default:
		break;
	}
}

void AGG_RTS_Worker::AddTask(Action actionType, AGG_RTS_Construction* buildingActor, AGG_RTS_Resource* resourceActor, FVector hitLocation, int formationIndex)
{
	switch (actionType)
	{
	case MOVE:
		taskStack.Push(new GG_RTS_MovementTask(this, hitLocation, formationIndex));
		break;

	case CONSTRUCT:
		taskStack.Push(new GG_RTS_ConstructionTask(this, buildingActor, hitLocation));
		break;

	case COLLECT:
		lastResourceTaskType = resourceActor->GetType();
		taskStack.Push(new GG_RTS_CollectionTask(this, resourceActor, hitLocation));
		break;

	default:
		break;
	}
}

bool AGG_RTS_Worker::FindNearestDepot()
{
	bool depotAvailable = false;
	depotDistance = 10000.0f;
	for (TActorIterator<AActor> actorItr(GetWorld(), AGG_RTS_ResourceBuilding::StaticClass(), EActorIteratorFlags::AllActors); actorItr; ++actorItr)
	{
		AGG_RTS_ResourceBuilding* resDepot = Cast<AGG_RTS_ResourceBuilding>(*actorItr);
		if (resDepot->IsBuilt())
		{
			depotAvailable = true;

			FVector workerPos = this->GetActorLocation();
			FVector depotPos = resDepot->GetActorLocation();
			FVector workerToDepot = workerPos - depotPos;

			float distanceToDepot = workerToDepot.Size();

			if (distanceToDepot < depotDistance)
			{
				depotDistance = distanceToDepot;
				nearestDepot = depotPos;
			}
		}
	}
	return depotAvailable;
}

bool AGG_RTS_Worker::FindNearestResource()
{
	bool resAvailable = false;
	resourceDistance = 10000.0f;
	for (TActorIterator<AActor> actorItr(GetWorld(), AGG_RTS_Resource::StaticClass(), EActorIteratorFlags::AllActors); actorItr; ++actorItr)
	{
		AGG_RTS_Resource* resourcePtr = Cast<AGG_RTS_Resource>(*actorItr);
		if (resourcePtr->GetType() == lastResourceTaskType)
		{
			resAvailable = true;

			FVector workerPos = this->GetActorLocation();
			FVector resPos = resourcePtr->GetActorLocation();
			FVector workerToRes = workerPos - resPos;

			float distanceToRes = workerToRes.Size();

			if (distanceToRes < resourceDistance)
			{
				resourceDistance = distanceToRes;
				nearestResource = resourcePtr;
			}
		}
	}
	return resAvailable;
}