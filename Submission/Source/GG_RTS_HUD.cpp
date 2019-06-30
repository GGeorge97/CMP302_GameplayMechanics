// Developed by Gavin George


#include "GG_RTS_HUD.h"
#include "GameFrameWork/PlayerController.h"
#include "GG_RTS_PlayerController.h"
#include "GG_RTS_GameMode.h"

AGG_RTS_HUD::AGG_RTS_HUD()
{
	static ConstructorHelpers::FObjectFinder<UFont>HUDFontOb(TEXT("Font'/Game/Font/ringbearer_Font.ringbearer_Font'"));
	font = HUDFontOb.Object;
}


void AGG_RTS_HUD::BeginPlay()
{
	Super::BeginPlay();

	PCPtr = Cast<AGG_RTS_PlayerController>(GetOwningPlayerController());
	gameMode = Cast<AGG_RTS_GameMode>(GetWorld()->GetAuthGameMode());

	if(GEngine)
		GEngine->GameViewport->GetViewportSize(canvasSize);

	unitHUDButtons.Push(FHUD_Element(WORKER, 1, "Unit Building\n100 Wood  150 Stone", FVector4(canvasSize.X - 250.0f, canvasSize.Y - 125.0f, 50.0f, 50.0f)));
	unitHUDButtons.Push(FHUD_Element(WORKER, 2, "Resource Building\n75 Wood  50 Stone", FVector4(canvasSize.X - 100.0f, canvasSize.Y - 125.0f, 50.0f, 50.0f)));

	buildingHUDButtons.Push(FHUD_Element(UNIT_BUILDING, 3, "Build Worker\n50 Wood", FVector4(125.0f, canvasSize.Y - 125.0f, 50.0f, 50.0f)));
}

void AGG_RTS_HUD::DrawHUD()
{
	DrawMenuBoxes();

	DrawResourceStatus();

	if (bStartSelect)
	{
		DrawSelectionBox();
	}

	if (bUnitSelectUI)
	{
		bBuildingSelectUI = false;

		DrawUnitSelectedUI();

		return;
	}

	if (bBuildingSelectUI)
	{
		bUnitSelectUI = false;

		if(foundBuildings.Num() > 0 && foundBuildings[0]->GetType() == UNIT_BUILDING)
			DrawBuildingSelectedUI();

		return;
	}
}

void AGG_RTS_HUD::DrawMenuBoxes()
{
	DrawRect(FLinearColor(0.1f, 0.1f, 0.1f, 0.5f), 0.0f, 0.0f, canvasSize.X, 30.0f);

	DrawRect(FLinearColor(0.1f, 0.1f, 0.1f, 0.5f), canvasSize.X - 300.0f, canvasSize.Y - 200.0f, 300.0f, 200.0f);

	DrawRect(FLinearColor(0.1f, 0.1f, 0.1f, 0.5f), 0.0f, canvasSize.Y - 200.0f, 300.0f, 200.0f);
}

void AGG_RTS_HUD::DrawResourceStatus()
{
	FString woodText = "WOOD : " + FString::FromInt(gameMode->resourceManager.GetWood());
	FString stoneText = "STONE : " + FString::FromInt(gameMode->resourceManager.GetStone());

	DrawText(woodText, FLinearColor::Green, 25.0f, 10.0f, font, 1.0f, false);
	DrawText(stoneText, FLinearColor::Green, 175.0f, 10.0f, font, 1.0f, false);
}

void AGG_RTS_HUD::DrawSelectionBox()
{
	if (foundUnits.Num() > 0)
		for (int i = 0; i < foundUnits.Num(); i++)
			foundUnits[i]->SetIsSelected(false);
	foundUnits.Empty();

	if (foundBuildings.Num() > 0)
		for (int i = 0; i < foundBuildings.Num(); i++)
			foundBuildings[i]->SetIsSelected(false);
	foundBuildings.Empty();

	currentPoint = GetMousePos2D();
	DrawRect(FLinearColor(0.0f, 1.0f, 0.25f, 0.25f), initalPoint.X, initalPoint.Y, currentPoint.X - initalPoint.X, currentPoint.Y - initalPoint.Y);

	GetActorsInSelectionRectangle<AGG_RTS_Worker>(initalPoint, currentPoint, foundUnits, false, false);

	if (foundUnits.Num() > 0)
	{
		if (foundUnits.Num() > 0)
			for (int i = 0; i < foundUnits.Num(); i++)
				foundUnits[i]->SetIsSelected(true);

		return;
	}
	else
	{
		GetActorsInSelectionRectangle<AGG_RTS_Construction>(initalPoint, currentPoint, foundBuildings, true, false);

		if (foundBuildings.Num() > 0)
		{
			for (int i = 0; i < foundBuildings.Num(); i++)
				if (!foundBuildings[i]->IsBuilt())
					foundBuildings.RemoveAt(i);

			for (int i = 0; i < foundBuildings.Num(); i++)
				foundBuildings[i]->SetIsSelected(true);
		}
	}
}

void AGG_RTS_HUD::DrawUnitSelectedUI()
{
	DrawRect(FLinearColor(0.1f, 0.1f, 0.1f, 0.9f), canvasSize.X - 280.0f, canvasSize.Y - 180.0f, 260.0f, 160.0f);

	for (int i = 0; i < unitHUDButtons.Num(); i++)
	{
		DrawRect(FLinearColor(0.8f, 0.8f, 0.8f, 1.0f), unitHUDButtons[i].AABB.X, unitHUDButtons[i].AABB.Y, unitHUDButtons[i].AABB.Z, unitHUDButtons[i].AABB.W);
		if (IsCursorInBounds(unitHUDButtons[i]))
		{
			DrawButtonTooltip(unitHUDButtons[i]);
			PCPtr->SetCurrentAction(CONSTRUCT);
			PCPtr->SetConstructType(i);
		}
	}
}

void AGG_RTS_HUD::DrawBuildingSelectedUI()
{
	DrawRect(FLinearColor(0.1f, 0.1f, 0.1f, 0.9f), 20.0f, canvasSize.Y - 180.0f, 260.0f, 160.0f);
	for (int i = 0; i < buildingHUDButtons.Num(); i++)
	{
		DrawRect(FLinearColor(0.8f, 0.8f, 0.8f, 1.0f), buildingHUDButtons[i].AABB.X, buildingHUDButtons[i].AABB.Y, buildingHUDButtons[i].AABB.Z, buildingHUDButtons[i].AABB.W);
		if (IsCursorInBounds(buildingHUDButtons[i]))
		{
			DrawButtonTooltip(buildingHUDButtons[i]);
			PCPtr->SetCurrentAction(SPAWN);
			PCPtr->SetConstructType(i);
		}
		else
			PCPtr->SetCurrentAction(MOVE);
	}
}

void AGG_RTS_HUD::DrawButtonTooltip(FHUD_Element UIElement)
{
	float xVal = GetMousePos2D().X - 55.0f;
	float yVal = GetMousePos2D().Y - 75.0f;

	DrawText(UIElement.toolTip, FLinearColor::Yellow, xVal, yVal, font, 1.2f, false);
}

bool AGG_RTS_HUD::IsCursorInBounds(FHUD_Element UIElement)
{
	FVector2D mousePosition = GetMousePos2D();
	if (mousePosition.X >= UIElement.AABB.X && mousePosition.Y >= UIElement.AABB.Y)
		if (mousePosition.X <= UIElement.AABB.Z + UIElement.AABB.X && mousePosition.Y <= UIElement.AABB.W + UIElement.AABB.Y)
			return true;

	return false;
}

FVector2D AGG_RTS_HUD::GetMousePos2D()
{
	float posX, posY;
	GetOwningPlayerController()->GetMousePosition(posX, posY);
	return FVector2D(posX, posY);
}
