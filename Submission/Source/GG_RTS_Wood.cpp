// Developed by Gavin George


#include "GG_RTS_Wood.h"


AGG_RTS_Wood::AGG_RTS_Wood()
{
	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = sphereComponent;
	sphereComponent->InitSphereRadius(40.0f);
	sphereComponent->SetCollisionProfileName(TEXT("BuildingCollider"));

	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	staticMesh->SetupAttachment(RootComponent);
	staticMesh->SetMobility(EComponentMobility::Movable);
	UStaticMesh* staticMeshAsset = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	staticMesh->SetStaticMesh(staticMeshAsset);
	staticMesh->SetCollisionResponseToChannel(ECC_Visibility, ECollisionResponse::ECR_Ignore);
	FTransform correctedTransform = staticMesh->GetComponentTransform();
	correctedTransform.SetRotation(FQuat(FRotator(0.0f, -90.0f, 0.0f)));
	staticMesh->SetRelativeTransform(correctedTransform);
	staticMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 8.0f));

	resourceType = WOOD;
	resourceValue = 50;
	isDepleted = false;
}

ResourceType AGG_RTS_Wood::GetType()
{
	return resourceType;
}

void AGG_RTS_Wood::DepleteResourceBy(int32 inVal)
{
	resourceValue -= inVal;
	if (resourceValue <= 0)
	{
		isDepleted = true;
		this->Destroy();
	}
}

bool AGG_RTS_Wood::GetIsDepleted()
{
	return isDepleted;
}

void AGG_RTS_Wood::SetIsDepleted(bool inVal)
{
	isDepleted = inVal;
}
