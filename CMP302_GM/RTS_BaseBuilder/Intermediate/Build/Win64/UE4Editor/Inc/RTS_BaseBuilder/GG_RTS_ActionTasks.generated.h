// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_BASEBUILDER_GG_RTS_ActionTasks_generated_h
#error "GG_RTS_ActionTasks.generated.h already included, missing '#pragma once' in GG_RTS_ActionTasks.h"
#endif
#define RTS_BASEBUILDER_GG_RTS_ActionTasks_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_ActionTasks_h


#define FOREACH_ENUM_TASKSTATUS(op) \
	op(QUEUED) \
	op(IN_PROGRESS) \
	op(COMPLETE) 
#define FOREACH_ENUM_ACTION(op) \
	op(MOVE) \
	op(COLLECT) \
	op(CONSTRUCT) \
	op(PLACE_BUILDING) \
	op(SPAWN) \
	op(NULL_ACTION) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
