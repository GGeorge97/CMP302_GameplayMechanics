// Developed by Gavin George


#include "GG_RTS_PlayerController.h"

AGG_RTS_PlayerController::AGG_RTS_PlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AGG_RTS_PlayerController::BeginPlay()
{
	HUDPtr = Cast<AGG_RTS_HUD>(GetHUD());
}

void AGG_RTS_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("LeftMouse", IE_Pressed, this, &AGG_RTS_PlayerController::SelectPressed);
	InputComponent->BindAction("LeftMouse", IE_Released, this, &AGG_RTS_PlayerController::SelectReleased);
	InputComponent->BindAction("RightMouse", IE_Released, this, &AGG_RTS_PlayerController::MoveReleased);
}

void AGG_RTS_PlayerController::SelectPressed()
{
	HUDPtr->SetInitialPoint(HUDPtr->GetMousePos2D());
	HUDPtr->SetStartSelect(true);
}

void AGG_RTS_PlayerController::SelectReleased()
{
	HUDPtr->SetStartSelect(false);
}

void AGG_RTS_PlayerController::MoveReleased()
{

}
