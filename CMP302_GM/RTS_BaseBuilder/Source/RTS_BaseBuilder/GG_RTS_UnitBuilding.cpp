// Developed by Gavin George


#include "GG_RTS_UnitBuilding.h"

AGG_RTS_UnitBuilding::AGG_RTS_UnitBuilding()
{
	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = sphereComponent;
	sphereComponent->InitSphereRadius(40.0f);
	sphereComponent->SetCollisionProfileName(TEXT("BuildingCollider"));

	cursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	cursorToWorld->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/TopDownCPP/Blueprints/M_Cursor_Decal.M_Cursor_Decal'"));
	if (DecalMaterialAsset.Succeeded())
		cursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
	cursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
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

	timeUntilBuilt = 0.0f;
	buildTime = 10.0f;
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

	staticMesh->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));
}
