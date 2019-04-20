// Developed by Gavin George


#include "GG_RTS_HUD.h"
#include "GameFrameWork/PlayerController.h"

void AGG_RTS_HUD::DrawHUD()
{
	if (bStartSelect)
	{
		currentPoint = GetMousePos2D();
		DrawRect(FLinearColor(0.0f, 1.0f, 0.25f, 0.25f), initalPoint.X, initalPoint.Y, currentPoint.X - initalPoint.X, currentPoint.Y - initalPoint.Y);
	}
}

FVector2D AGG_RTS_HUD::GetMousePos2D()
{
	float posX, posY;
	GetOwningPlayerController()->GetMousePosition(posX, posY);
	return FVector2D(posX, posY);
}
