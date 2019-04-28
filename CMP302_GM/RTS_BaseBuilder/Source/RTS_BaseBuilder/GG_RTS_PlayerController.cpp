// Developed by Gavin George


#include "GG_RTS_PlayerController.h"

AGG_RTS_PlayerController::AGG_RTS_PlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
	EnableInput(this);
}

AGG_RTS_PlayerController::~AGG_RTS_PlayerController()
{
	if (newBuilding)
	{
		newBuilding = nullptr;
		delete newBuilding;
	}
}

void AGG_RTS_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	HUDPtr = Cast<AGG_RTS_HUD>(GetHUD());

	objectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
}

void AGG_RTS_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("LeftMouse", IE_Pressed, this, &AGG_RTS_PlayerController::SelectPressed);
	InputComponent->BindAction("LeftMouse", IE_Released, this, &AGG_RTS_PlayerController::SelectReleased);
	InputComponent->BindAction("RightMouse", IE_Released, this, &AGG_RTS_PlayerController::ActionStart);
}

void AGG_RTS_PlayerController::Tick(float DeltaTime)
{
	if (currentAction == PLACE_BUILDING)
	{
		FHitResult hitResult;
		GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, hitResult);
		newBuilding->SetActorLocation(hitResult.Location);
	}

	FHitResult hitResult;
	bool bHitOccurred = GetHitResultUnderCursorForObjects(objectTypes, true, hitResult);
	if (bHitOccurred)
	{
		//UE_LOG(LogTemp, Warning, TEXT("OVER AN ACTOR"));
		hitResult.GetActor();
	}
}

void AGG_RTS_PlayerController::SelectPressed()
{
	if (currentAction == CONSTRUCT)
	{
		HUDPtr->SetUnitUIEnabled(false);
	}
	else if (currentAction == SPAWN)
	{
		HUDPtr->SetBuildingUIEnabled(true);
		currentAction = SPAWN;
	}
	else if (currentAction == PLACE_BUILDING)
	{
		// Set building on location and set task for nearest worker
		FHitResult hitResult;
		GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, hitResult);

		currentAction = CONSTRUCT;
		ActionStartManual(hitResult.Location);
		currentAction = MOVE;
	}
	else
	{
		HUDPtr->SetInitialPoint(HUDPtr->GetMousePos2D());
		HUDPtr->SetStartSelect(true);
	}
}

void AGG_RTS_PlayerController::SelectReleased()
{
	if (currentAction == CONSTRUCT)
	{
		if (constructionType == 0)
		{
			FVector spawnPos(0.0f, 0.0f, 0.0f);
			FRotator spawnRotation(0.0f, 0.0f, 0.0f);
			FActorSpawnParameters spawnInfo;
			newBuilding = (AGG_RTS_UnitBuilding*)GetWorld()->SpawnActor<AGG_RTS_UnitBuilding>(spawnPos, spawnRotation, spawnInfo);
			currentAction = PLACE_BUILDING;

		}
		else if (constructionType == 1)
		{
			FVector spawnPos(0.0f, 0.0f, 0.0f);
			FRotator spawnRotation(0.0f, 0.0f, 0.0f);
			FActorSpawnParameters spawnInfo;
			newBuilding = (AGG_RTS_ResourceBuilding*)GetWorld()->SpawnActor<AGG_RTS_ResourceBuilding>(spawnPos, spawnRotation, spawnInfo);
			currentAction = PLACE_BUILDING;
		}
	}
	else if (currentAction == SPAWN)
	{
		for (int i = 0; i < selectedBuildings.Num(); i++)
		{
			if (selectedBuildings[i]->GetType() == UNIT_BUILDING)
			{
				FVector spawnPos = selectedBuildings[i]->GetActorLocation();
				spawnPos += FVector(0.0f, -500.0f, 100.0f);
				FRotator spawnRotation(0.0f, 0.0f, 0.0f);
				AGG_RTS_UnitBuilding* selectedUnitBuilding = Cast<AGG_RTS_UnitBuilding>(selectedBuildings[i]);
				selectedUnitBuilding->TrainUnit(spawnPos, spawnRotation);
			}
		}
		currentAction = SPAWN;
	}
	else 
	{
		HUDPtr->SetStartSelect(false);
		selectedUnits = HUDPtr->GetFoundUnits();

		selectedBuildings = HUDPtr->GetFoundBuildings();

		if (selectedUnits.Num() > 0)
			HUDPtr->SetUnitUIEnabled(true);
		else
			HUDPtr->SetUnitUIEnabled(false);

		if (selectedBuildings.Num() > 0)
			HUDPtr->SetBuildingUIEnabled(true);
		else
			HUDPtr->SetBuildingUIEnabled(false);
	}
}

void AGG_RTS_PlayerController::ActionStart()
{
	if (selectedUnits.Num() > 0)
	{
		if (IsInputKeyDown(EKeys::LeftShift))
		{
			FHitResult hitResult;
			for (int i = 0; i < selectedUnits.Num(); i++)
			{
				GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, hitResult);
				if (currentAction == CONSTRUCT)
				{
					selectedUnits[i]->AddTask(currentAction, newBuilding, hitResult.Location, i);
					newBuilding = nullptr;
					return;
				}
				else
					selectedUnits[i]->AddTask(currentAction, newBuilding, hitResult.Location, i);

			}
		}
		else
		{
			FHitResult hitResult;
			for (int i = 0; i < selectedUnits.Num(); i++)
			{
				GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, hitResult);
				if (currentAction == CONSTRUCT)
				{
					selectedUnits[i]->RunTask(currentAction, newBuilding, hitResult.Location, i);
					newBuilding = nullptr;
					return;
				}
				else
					selectedUnits[i]->RunTask(currentAction, newBuilding, hitResult.Location, i);
			}
		}
	}
}

void AGG_RTS_PlayerController::ActionStartManual(FVector actionLocation)
{
	if (selectedUnits.Num() > 0)
	{
		if (IsInputKeyDown(EKeys::LeftShift))
		{
			for (int i = 0; i < selectedUnits.Num(); i++)
			{
				if (currentAction == CONSTRUCT)
				{
					selectedUnits[i]->AddTask(currentAction, newBuilding, actionLocation, i);
					newBuilding = nullptr;
					return;
				}
				else
					selectedUnits[i]->AddTask(currentAction, newBuilding, actionLocation, i);

			}
		}
		else
		{
			for (int i = 0; i < selectedUnits.Num(); i++)
			{
				if (currentAction == CONSTRUCT)
				{
					selectedUnits[i]->RunTask(currentAction, newBuilding, actionLocation, i);
					newBuilding = nullptr;
					return;
				}
				else
					selectedUnits[i]->RunTask(currentAction, newBuilding, actionLocation, i);
			}
		}
	}
}