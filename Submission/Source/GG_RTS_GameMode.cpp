// Developed by Gavin George


#include "GG_RTS_GameMode.h"
#include "GG_RTS_Camera.h"
#include "GG_RTS_PlayerController.h"
#include "GG_RTS_HUD.h"
#include "GG_RTS_GameState.h"
#include "GG_RTS_PlayerState.h"
#include "UObject/ConstructorHelpers.h"

AGG_RTS_GameMode::AGG_RTS_GameMode()
{
	DefaultPawnClass = AGG_RTS_Camera::StaticClass();
	PlayerControllerClass = AGG_RTS_PlayerController::StaticClass();
	HUDClass = AGG_RTS_HUD::StaticClass();
	GameStateClass = AGG_RTS_GameState::StaticClass();
	PlayerStateClass = AGG_RTS_PlayerState::StaticClass();
	SpectatorClass = NULL;
}