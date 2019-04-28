// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/GG_RTS_ActionTasks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGG_RTS_ActionTasks() {}
// Cross Module References
	RTS_BASEBUILDER_API UEnum* Z_Construct_UEnum_RTS_BaseBuilder_TaskStatus();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
	RTS_BASEBUILDER_API UEnum* Z_Construct_UEnum_RTS_BaseBuilder_Action();
// End Cross Module References
	static UEnum* TaskStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RTS_BaseBuilder_TaskStatus, Z_Construct_UPackage__Script_RTS_BaseBuilder(), TEXT("TaskStatus"));
		}
		return Singleton;
	}
	template<> RTS_BASEBUILDER_API UEnum* StaticEnum<TaskStatus>()
	{
		return TaskStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TaskStatus(TaskStatus_StaticEnum, TEXT("/Script/RTS_BaseBuilder"), TEXT("TaskStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RTS_BaseBuilder_TaskStatus_Hash() { return 3299876646U; }
	UEnum* Z_Construct_UEnum_RTS_BaseBuilder_TaskStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RTS_BaseBuilder();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TaskStatus"), 0, Get_Z_Construct_UEnum_RTS_BaseBuilder_TaskStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "QUEUED", (int64)QUEUED },
				{ "IN_PROGRESS", (int64)IN_PROGRESS },
				{ "COMPLETE", (int64)COMPLETE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "GG_RTS_ActionTasks.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
				nullptr,
				"TaskStatus",
				"TaskStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* Action_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RTS_BaseBuilder_Action, Z_Construct_UPackage__Script_RTS_BaseBuilder(), TEXT("Action"));
		}
		return Singleton;
	}
	template<> RTS_BASEBUILDER_API UEnum* StaticEnum<Action>()
	{
		return Action_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Action(Action_StaticEnum, TEXT("/Script/RTS_BaseBuilder"), TEXT("Action"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RTS_BaseBuilder_Action_Hash() { return 4157190925U; }
	UEnum* Z_Construct_UEnum_RTS_BaseBuilder_Action()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RTS_BaseBuilder();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Action"), 0, Get_Z_Construct_UEnum_RTS_BaseBuilder_Action_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MOVE", (int64)MOVE },
				{ "COLLECT", (int64)COLLECT },
				{ "CONSTRUCT", (int64)CONSTRUCT },
				{ "PLACE_BUILDING", (int64)PLACE_BUILDING },
				{ "SPAWN", (int64)SPAWN },
				{ "NULL_ACTION", (int64)NULL_ACTION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "GG_RTS_ActionTasks.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
				nullptr,
				"Action",
				"Action",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
