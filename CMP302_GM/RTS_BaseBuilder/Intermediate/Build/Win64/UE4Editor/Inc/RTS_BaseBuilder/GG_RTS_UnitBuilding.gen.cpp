// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/GG_RTS_UnitBuilding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGG_RTS_UnitBuilding() {}
// Cross Module References
	RTS_BASEBUILDER_API UScriptStruct* Z_Construct_UScriptStruct_FQueuedUnit();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_UnitBuilding_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_UnitBuilding();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Construction();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FQueuedUnit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RTS_BASEBUILDER_API uint32 Get_Z_Construct_UScriptStruct_FQueuedUnit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueuedUnit, Z_Construct_UPackage__Script_RTS_BaseBuilder(), TEXT("QueuedUnit"), sizeof(FQueuedUnit), Get_Z_Construct_UScriptStruct_FQueuedUnit_Hash());
	}
	return Singleton;
}
template<> RTS_BASEBUILDER_API UScriptStruct* StaticStruct<FQueuedUnit>()
{
	return FQueuedUnit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueuedUnit(FQueuedUnit::StaticStruct, TEXT("/Script/RTS_BaseBuilder"), TEXT("QueuedUnit"), false, nullptr, nullptr);
static struct FScriptStruct_RTS_BaseBuilder_StaticRegisterNativesFQueuedUnit
{
	FScriptStruct_RTS_BaseBuilder_StaticRegisterNativesFQueuedUnit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QueuedUnit")),new UScriptStruct::TCppStructOps<FQueuedUnit>);
	}
} ScriptStruct_RTS_BaseBuilder_StaticRegisterNativesFQueuedUnit;
	struct Z_Construct_UScriptStruct_FQueuedUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedUnit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueuedUnit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnRotation_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnRotation = { "spawnRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedUnit, spawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnPoint_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnPoint = { "spawnPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedUnit, spawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueuedUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedUnit_Statics::NewProp_spawnPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueuedUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
		nullptr,
		&NewStructOps,
		"QueuedUnit",
		sizeof(FQueuedUnit),
		alignof(FQueuedUnit),
		Z_Construct_UScriptStruct_FQueuedUnit_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedUnit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedUnit_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedUnit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueuedUnit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueuedUnit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RTS_BaseBuilder();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueuedUnit"), sizeof(FQueuedUnit), Get_Z_Construct_UScriptStruct_FQueuedUnit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQueuedUnit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueuedUnit_Hash() { return 1655193205U; }
	void AGG_RTS_UnitBuilding::StaticRegisterNativesAGG_RTS_UnitBuilding()
	{
	}
	UClass* Z_Construct_UClass_AGG_RTS_UnitBuilding_NoRegister()
	{
		return AGG_RTS_UnitBuilding::StaticClass();
	}
	struct Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trainTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_trainTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeUntilTrained_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeUntilTrained;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_buildTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeUntilBuilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeUntilBuilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unitQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_unitQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_unitQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cursorToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cursorToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphereComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGG_RTS_Construction,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GG_RTS_UnitBuilding.h" },
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_trainTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ConstructionSettings" },
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_trainTime = { "trainTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_UnitBuilding, trainTime), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_trainTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_trainTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilTrained_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ConstructionSettings" },
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilTrained = { "timeUntilTrained", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_UnitBuilding, timeUntilTrained), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilTrained_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilTrained_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_buildTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ConstructionSettings" },
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_buildTime = { "buildTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_UnitBuilding, buildTime), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_buildTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_buildTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilBuilt_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ConstructionSettings" },
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilBuilt = { "timeUntilBuilt", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_UnitBuilding, timeUntilBuilt), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilBuilt_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilBuilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_unitQueue_MetaData[] = {
		{ "Category", "GG_RTS_UnitBuilding" },
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_unitQueue = { "unitQueue", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_UnitBuilding, unitQueue), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_unitQueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_unitQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_unitQueue_Inner = { "unitQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQueuedUnit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_staticMesh_MetaData[] = {
		{ "Category", "GG_RTS_UnitBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_UnitBuilding, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_staticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_staticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_cursorToWorld_MetaData[] = {
		{ "Category", "GG_RTS_UnitBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_cursorToWorld = { "cursorToWorld", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_UnitBuilding, cursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_cursorToWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_cursorToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_sphereComponent_MetaData[] = {
		{ "Category", "GG_RTS_UnitBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_UnitBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_sphereComponent = { "sphereComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_UnitBuilding, sphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_sphereComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_sphereComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_trainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilTrained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_buildTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_timeUntilBuilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_unitQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_unitQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_staticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_cursorToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::NewProp_sphereComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGG_RTS_UnitBuilding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::ClassParams = {
		&AGG_RTS_UnitBuilding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGG_RTS_UnitBuilding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGG_RTS_UnitBuilding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGG_RTS_UnitBuilding, 2520184834);
	template<> RTS_BASEBUILDER_API UClass* StaticClass<AGG_RTS_UnitBuilding>()
	{
		return AGG_RTS_UnitBuilding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGG_RTS_UnitBuilding(Z_Construct_UClass_AGG_RTS_UnitBuilding, &AGG_RTS_UnitBuilding::StaticClass, TEXT("/Script/RTS_BaseBuilder"), TEXT("AGG_RTS_UnitBuilding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGG_RTS_UnitBuilding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
