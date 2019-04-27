// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GG_RTS_ActionTasks.h"
#include "GG_RTS_Worker.h"

/**
 * 
 */
class RTS_BASEBUILDER_API GG_RTS_ConstructionTask : public GG_RTS_ActionTasks
{
public:
	GG_RTS_ConstructionTask(class AGG_RTS_Worker* workerActor, FVector hitLocation, int formationIndex);
	~GG_RTS_ConstructionTask();

	void BeginTask();
	void IsTaskComplete();

	TaskStatus GetTaskStatus() { return taskStatus; };
	void SetTaskStatus(TaskStatus setVal) { taskStatus = setVal; };

private:
	TaskStatus taskStatus;
	//AGG_RTS_Worker* workerPtr;
	//FVector hitLoc;
	//int formIndex;
};
