// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GG_RTS_ActionTasks.h"

/**
 * 
 */
class RTS_BASEBUILDER_API GG_RTS_CollectionTask : public GG_RTS_ActionTasks
{
public:
	GG_RTS_CollectionTask();
	~GG_RTS_CollectionTask();

	//void BeginTask(AGG_RTS_Worker* workerActor, int i);

	//TaskStatus GetTaskStatus() { return taskStatus; };
	//void SetTaskStatus(TaskStatus setVal) { taskStatus = setVal; };

private:
	//TaskStatus taskStatus;
};
