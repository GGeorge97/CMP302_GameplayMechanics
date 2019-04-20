// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GG_RTS_HUD.h"
#include "GG_RTS_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AGG_RTS_PlayerController();

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	void SelectPressed();
	void SelectReleased();
	void MoveReleased();

	AGG_RTS_HUD* HUDPtr;
};
