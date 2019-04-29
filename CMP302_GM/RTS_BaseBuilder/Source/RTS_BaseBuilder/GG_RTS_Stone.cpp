// Developed by Gavin George


#include "GG_RTS_Stone.h"

AGG_RTS_Stone::AGG_RTS_Stone()
{
	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = sphereComponent;
	sphereComponent->InitSphereRadius(40.0f);
	sphereComponent->SetCollisionProfileName(TEXT("BuildingCollider"));

	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	staticMesh->SetupAttachment(RootComponent);
	staticMesh->SetMobility(EComponentMobility::Movable);
	UStaticMesh* staticMeshAsset = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	staticMesh->SetStaticMesh(staticMeshAsset);
	staticMesh->SetCollisionResponseToChannel(ECC_Visibility, ECollisionResponse::ECR_Ignore);
	FTransform correctedTransform = staticMesh->GetComponentTransform();
	correctedTransform.SetRotation(FQuat(FRotator(0.0f, -90.0f, 0.0f)));
	correctedTransform.SetLocation(FVector(0.0f, 0.0f, -100.0f));
	staticMesh->SetRelativeTransform(correctedTransform);
	staticMesh->SetWorldScale3D(FVector(5.0f, 5.0f, 2.0f));

	resourceType = STONE;
	resourceValue = 500;
	isDepleted = false;
}

ResourceType AGG_RTS_Stone::GetType()
{
	return resourceType;
}

void AGG_RTS_Stone::DepleteResourceBy(int32 inVal)
{
	resourceValue -= inVal;
	if (resourceValue <= 0)
	{
		isDepleted = true;
		this->Destroy();
	}
}

bool AGG_RTS_Stone::GetIsDepleted()
{
	return isDepleted;
}

void AGG_RTS_Stone::SetIsDepleted(bool inVal)
{
	isDepleted = inVal;
}
