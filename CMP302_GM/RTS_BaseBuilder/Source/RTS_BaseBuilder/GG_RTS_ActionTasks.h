// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

enum Action
{
	MOVE, COLLECT, CONSTRUCT, PLACE_BUILDING, SPAWN, NULL_ACTION
};

enum TaskStatus
{
	QUEUED, IN_PROGRESS, COMPLETE
};

class RTS_BASEBUILDER_API GG_RTS_ActionTasks
{
public:
	GG_RTS_ActionTasks();
	virtual ~GG_RTS_ActionTasks() = 0;

	virtual void BeginTask() = 0;
	virtual void IsTaskComplete(float deltaTime) = 0;

	virtual TaskStatus GetTaskStatus() = 0;
	virtual void SetTaskStatus(TaskStatus setVal) = 0;
};
