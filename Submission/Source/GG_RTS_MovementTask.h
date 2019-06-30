// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GG_RTS_ActionTasks.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "GG_RTS_Worker.h"

/**
 * 
 */
class RTS_BASEBUILDER_API GG_RTS_MovementTask : public GG_RTS_ActionTasks
{
public:
	GG_RTS_MovementTask(class AGG_RTS_Worker* workerActor, FVector hitLocation, int formationIndex);
	~GG_RTS_MovementTask();

	void BeginTask();
	void IsTaskComplete(float deltaTime);

	TaskStatus GetTaskStatus() { return taskStatus; };
	void SetTaskStatus(TaskStatus setVal) { taskStatus = setVal; };

private:
	TaskStatus taskStatus;

	UPROPERTY()
	class AGG_RTS_Worker* workerPtr;

	FVector moveLocation;
	FVector hitLoc;

	int formIndex;
};
