// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "GG_RTS_HUD.h"
#include "GG_RTS_Worker.h"
#include "GG_RTS_Construction.h"
#include "GG_RTS_UnitBuilding.h"
#include "GG_RTS_ResourceBuilding.h"
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

	UFUNCTION()
	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void SetupInputComponent() override;
	UFUNCTION()
	virtual void Tick(float DeltaTime) override;

	Action GetCurrentAction() { return currentAction; };
	void SetCurrentAction(Action in) { currentAction = in; };

	int32 GetConstructType() { return constructionType; };
	void SetConstructType(int32 in) { constructionType = in; };

	TArray<AGG_RTS_Worker*> GetSelectedUnits() { return selectedUnits; };

private:
	UFUNCTION()
	void SelectPressed();
	UFUNCTION()
	void SelectReleased();
	UFUNCTION()
	void ActionStart();
	UFUNCTION()
	void ActionStartManual(FVector actionLocation);

	UPROPERTY()
	AGG_RTS_HUD* HUDPtr;
	UPROPERTY()
	AGG_RTS_Construction* newBuilding;

	UPROPERTY()
	TArray<AGG_RTS_Worker*> selectedUnits;
	UPROPERTY()
	TArray<AGG_RTS_Construction*> selectedBuildings;
	UPROPERTY()
	TArray<TEnumAsByte<EObjectTypeQuery>> objectTypes;

	UPROPERTY()
	int32 constructionType;

	Action currentAction = MOVE;
};
