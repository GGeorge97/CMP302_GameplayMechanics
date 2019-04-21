// Developed by Gavin George


#include "GG_RTS_HUD.h"
#include "GameFrameWork/PlayerController.h"

void AGG_RTS_HUD::DrawHUD()
{
	if (bStartSelect)
	{
		if (foundActors.Num() > 0)
			for (int i = 0; i < foundActors.Num(); i++)
				foundActors[i]->SetIsSelected(false);

		foundActors.Empty();
		currentPoint = GetMousePos2D();
		DrawRect(FLinearColor(0.0f, 1.0f, 0.25f, 0.25f), initalPoint.X, initalPoint.Y, currentPoint.X - initalPoint.X, currentPoint.Y - initalPoint.Y);
		GetActorsInSelectionRectangle<AGG_RTS_Worker>(initalPoint, currentPoint, foundActors, false, false);
	
		if (foundActors.Num() > 0)
			for (int i = 0; i < foundActors.Num(); i++)
				foundActors[i]->SetIsSelected(true);
	}
}

FVector2D AGG_RTS_HUD::GetMousePos2D()
{
	float posX, posY;
	GetOwningPlayerController()->GetMousePosition(posX, posY);
	return FVector2D(posX, posY);
}
