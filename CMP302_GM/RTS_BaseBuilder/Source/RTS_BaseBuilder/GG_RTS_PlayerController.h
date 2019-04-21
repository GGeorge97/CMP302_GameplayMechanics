// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "GG_RTS_HUD.h"
#include "GG_RTS_Worker.h"
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
	UFUNCTION()
	virtual void SetupInputComponent() override;

private:
	UFUNCTION()
	void SelectPressed();
	UFUNCTION()
	void SelectReleased();
	UFUNCTION()
	void ActionStart();

	UPROPERTY()
	AGG_RTS_HUD* HUDPtr;

	UPROPERTY()
	TArray<AGG_RTS_Worker*> selectedActors;
};
