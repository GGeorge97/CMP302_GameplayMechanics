// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GG_RTS_Resource.h"
#include "GG_RTS_Stone.generated.h"

/**
 * 
 */
UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_Stone : public AGG_RTS_Resource
{
	GENERATED_BODY()

public:
	AGG_RTS_Stone();

	ResourceType GetType() override;
	
	void DepleteResourceBy(int32 inVal) override;

	bool GetIsDepleted() override;
	void SetIsDepleted(bool inVal) override;

private:
	UPROPERTY(EditAnywhere)
		USphereComponent* sphereComponent;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* staticMesh;

	bool isDepleted;

	ResourceType resourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = ResourceSettings)
	int32 resourceValue;
};
