// Developed by Gavin George


#include "GG_RTS_ResourceBuilding.h"

AGG_RTS_ResourceBuilding::AGG_RTS_ResourceBuilding()
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
	UStaticMesh* staticMeshAsset = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	staticMesh->SetStaticMesh(staticMeshAsset);
	staticMesh->SetCollisionResponseToChannel(ECC_Visibility, ECollisionResponse::ECR_Ignore);
	FTransform correctedTransform = staticMesh->GetComponentTransform();
	correctedTransform.SetRotation(FQuat(FRotator(0.0f, -90.0f, 0.0f)));
	staticMesh->SetRelativeTransform(correctedTransform);
	staticMesh->SetWorldScale3D(FVector(2.0f, 2.0f, 0.5f));

	buildingType = RES_BUILDING;
	timeUntilBuilt = 0.0f;
	buildTime = 10.0f;
	isBuilt = false;
}

void AGG_RTS_ResourceBuilding::SetIsSelected(bool isSelected)
{
	cursorToWorld->SetVisibility(isSelected);
}

float AGG_RTS_ResourceBuilding::GetTimeUntilBuilt()
{
	return timeUntilBuilt;
}

void AGG_RTS_ResourceBuilding::SetTimeUntilBuilt(float dt)
{
	timeUntilBuilt += dt;
}

float AGG_RTS_ResourceBuilding::GetBuildTime()
{
	return buildTime;
}

bool AGG_RTS_ResourceBuilding::IsBuilt()
{
	return isBuilt;
}

void AGG_RTS_ResourceBuilding::SetIsBuilt(bool bl)
{
	isBuilt = bl;

	staticMesh->SetWorldScale3D(FVector(4.0f, 4.0f, 1.0f));
}

OwningType AGG_RTS_ResourceBuilding::GetType()
{
	return buildingType;
}
