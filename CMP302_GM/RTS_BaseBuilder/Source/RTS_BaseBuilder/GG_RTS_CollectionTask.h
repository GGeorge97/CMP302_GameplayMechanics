// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GG_RTS_ActionTasks.h"
#include "GG_RTS_Worker.h"
#include "GG_RTS_Resource.h"
#include "GG_RTS_GameMode.h"

/**
 * 
 */
class RTS_BASEBUILDER_API GG_RTS_CollectionTask : public GG_RTS_ActionTasks
{
public:
	GG_RTS_CollectionTask(class AGG_RTS_Worker* workerActor, class AGG_RTS_Resource* resourceActor, AGG_RTS_GameMode* gameMode, FVector hitLocation);
	~GG_RTS_CollectionTask();

	void BeginTask();
	void IsTaskComplete(float deltaTime);

	TaskStatus GetTaskStatus() { return taskStatus; };
	void SetTaskStatus(TaskStatus setVal) { taskStatus = setVal; };

protected:
	void GatherResource(float deltaTime);
	void DepositResource();

private:
	TaskStatus taskStatus;

	AGG_RTS_Worker* workerPtr;
	AGG_RTS_Resource* resourcePtr;
	UPROPERTY()
	class AGG_RTS_GameMode* GMPtr;

	FVector resourceLocation;
	FVector moveLocation;
	FVector hitLoc;

	float gatherTime;

	bool isCollecting;
};
