// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Font.h"
#include "GG_RTS_Worker.h"
#include "GG_RTS_Construction.h"
#include "GG_RTS_HUD.generated.h"

/**
 * 
 */
enum OwningType
{
	WORKER, UNIT_BUILDING, RES_BUILDING
};

USTRUCT()
struct FHUD_Element
{
	GENERATED_USTRUCT_BODY()

	OwningType	owningType;
	UPROPERTY()
	int32		buttonID;
	UPROPERTY()
	FString		toolTip;
	UPROPERTY()
	FVector4	AABB;
	//	X = Left , Y = Top, Z = Width, W = Height

	FHUD_Element()
	{
		owningType = WORKER;
		buttonID = -1;
		toolTip = "";
		AABB = FVector4(0.f, 0.f, 0.f, 0.f);
	}
	FHUD_Element(OwningType oType, int32 ID, FString tTip, FVector4 boundingBox)
	{
		owningType = oType;
		buttonID = ID;
		toolTip = tTip;
		AABB	= boundingBox;
	}
};

UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_HUD : public AHUD
{
	GENERATED_BODY()

public:
	AGG_RTS_HUD();

	FVector2D GetMousePos2D();

	FVector2D GetInitialPoint() { return initalPoint; };
	void SetInitialPoint(FVector2D in) { initalPoint = in; };

	FVector2D GetCurrentPoint() { return currentPoint; };
	void SetCurrentPoint(FVector2D in) { currentPoint = in; };

	TArray<AGG_RTS_Worker*> GetFoundUnits() { return foundUnits; };
	int GetFoundUnitsSize() { return foundUnits.Num(); };

	TArray<AGG_RTS_Construction*> GetFoundBuildings() { return foundBuildings; };
	int GetFoundBuildingsSize() { return foundBuildings.Num(); };

	bool GetStartSelect() { return bStartSelect; };
	void SetStartSelect(bool in) { bStartSelect = in; };

	bool GetUnitUIEnabled() { return bUnitSelectUI; };
	void SetUnitUIEnabled(bool in) { bUnitSelectUI = in; };

	bool GetBuildingUIEnabled() { return bBuildingSelectUI; };
	void SetBuildingUIEnabled(bool in) { bBuildingSelectUI = in; };

protected:
	UFUNCTION()
	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void DrawHUD() override;

	UFUNCTION()
	void DrawSelectionBox();
	UFUNCTION()
	void DrawUnitSelectedUI();
	UFUNCTION()
	void DrawBuildingSelectedUI();
	UFUNCTION()
	void DrawButtonTooltip(struct FHUD_Element UIElement);
	UFUNCTION()
	bool IsCursorInBounds(struct FHUD_Element UIElement);

private:
	UPROPERTY()
	FVector2D initalPoint;
	UPROPERTY()
	FVector2D currentPoint;
	UPROPERTY()
	FVector2D canvasSize;

	UPROPERTY()
	UFont* font;

	UPROPERTY()
	TArray<AGG_RTS_Worker*> foundUnits;
	UPROPERTY()
	TArray<AGG_RTS_Construction*> foundBuildings;
	UPROPERTY()
	TArray<struct FHUD_Element> unitHUDButtons;
	UPROPERTY()
	TArray<struct FHUD_Element> buildingHUDButtons;

	UPROPERTY()
	class AGG_RTS_PlayerController* PCPtr;

	bool bStartSelect = false;
	bool bUnitSelectUI = false;
	bool bBuildingSelectUI = false;
};
