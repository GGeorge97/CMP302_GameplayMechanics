// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/HUD.h"
#include "GG_RTS_ResourceManager.h"
#include "GG_RTS_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_GameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AGG_RTS_GameMode();

	GG_RTS_ResourceManager resourceManager;
};
