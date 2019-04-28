// Developed by Gavin George


#include "GG_RTS_UnitBuilding.h"
#include "GG_RTS_Worker.h"

AGG_RTS_UnitBuilding::AGG_RTS_UnitBuilding()
{
	PrimaryActorTick.bCanEverTick = true;

	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = sphereComponent;
	sphereComponent->InitSphereRadius(40.0f);
	sphereComponent->SetCollisionProfileName(TEXT("BuildingCollider"));

	cursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	cursorToWorld->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/TopDownCPP/Blueprints/M_Cursor_Decal.M_Cursor_Decal'"));
	if (DecalMaterialAsset.Succeeded())
		cursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
	FTransform cursorTransform = cursorToWorld->GetComponentTransform();
	cursorTransform.SetLocation(FVector(0.0f, 0.0f, 50.0f));
	cursorToWorld->SetRelativeTransform(cursorTransform);
	cursorToWorld->DecalSize = FVector(24.0f, 64.0f, 64.0f);
	cursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());
	cursorToWorld->SetVisibility(false);

	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	staticMesh->SetupAttachment(RootComponent);
	staticMesh->SetMobility(EComponentMobility::Movable);
	UStaticMesh* staticMeshAsset = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	staticMesh->SetStaticMesh(staticMeshAsset);
	staticMesh->SetCollisionResponseToChannel(ECC_Visibility, ECollisionResponse::ECR_Ignore);
	FTransform correctedTransform = staticMesh->GetComponentTransform();
	correctedTransform.SetRotation(FQuat(FRotator(0.0f, -90.0f, 0.0f)));
	staticMesh->SetRelativeTransform(correctedTransform);
	staticMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 0.5f));

	buildingType = UNIT_BUILDING;
	timeUntilBuilt = 0.0f;
	trainTime = 2.5f;
	timeUntilBuilt = 0.0f;
	buildTime = 10.0f;
	isBuilt = false;
	trainingUnit = false;
}

void AGG_RTS_UnitBuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (trainingUnit)
	{
		timeUntilTrained += DeltaTime;
		if (timeUntilTrained >= trainTime)
		{
			timeUntilTrained = 0.0f;
			FQueuedUnit newUnitInfo = unitQueue.Pop(true);
			FActorSpawnParameters spawnInfo;
			AGG_RTS_Worker* newUnit = GetWorld()->SpawnActor<AGG_RTS_Worker>(newUnitInfo.spawnPoint, newUnitInfo.spawnRotation, spawnInfo);
			newUnit->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
			newUnit->SpawnDefaultController();
		}
	}

	if(unitQueue.Num() <= 0)
		trainingUnit = false;
}

void AGG_RTS_UnitBuilding::TrainUnit(FVector spawnPos, FRotator spawnRot)
{
	unitQueue.Push(struct FQueuedUnit(spawnPos, spawnRot));
	trainingUnit = true;
}

void AGG_RTS_UnitBuilding::SetIsSelected(bool isSelected)
{
	cursorToWorld->SetVisibility(isSelected);
}

float AGG_RTS_UnitBuilding::GetTimeUntilBuilt()
{
	return timeUntilBuilt;
}

void AGG_RTS_UnitBuilding::SetTimeUntilBuilt(float dt)
{
	timeUntilBuilt += dt;
}

float AGG_RTS_UnitBuilding::GetBuildTime()
{
	return buildTime;
}

bool AGG_RTS_UnitBuilding::IsBuilt()
{
	return isBuilt;
}

void AGG_RTS_UnitBuilding::SetIsBuilt(bool bl)
{
	isBuilt = bl;

	staticMesh->SetWorldScale3D(FVector(4.0f, 4.0f, 2.0f));
}

OwningType AGG_RTS_UnitBuilding::GetType()
{
	return buildingType;
}
