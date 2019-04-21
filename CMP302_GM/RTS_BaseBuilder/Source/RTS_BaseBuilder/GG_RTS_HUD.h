// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GG_RTS_Worker.h"
#include "GG_RTS_HUD.generated.h"

/**
 * 
 */
UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_HUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;

	FVector2D GetMousePos2D();

	FVector2D GetInitialPoint() { return initalPoint; };
	void SetInitialPoint(FVector2D in) { initalPoint = in; };

	FVector2D GetCurrentPoint() { return currentPoint; };
	void SetCurrentPoint(FVector2D in) { currentPoint = in; };

	TArray<AGG_RTS_Worker*> GetFoundActors() { return foundActors; };
	int GetSelectedActorsSize() { return foundActors.Num(); };

	bool GetStartSelect() { return bStartSelect; };
	void SetStartSelect(bool in) { bStartSelect = in; };

private:
	FVector2D initalPoint;
	FVector2D currentPoint;

	UPROPERTY()
	TArray<AGG_RTS_Worker*> foundActors;

	bool bStartSelect = false;
	
};
