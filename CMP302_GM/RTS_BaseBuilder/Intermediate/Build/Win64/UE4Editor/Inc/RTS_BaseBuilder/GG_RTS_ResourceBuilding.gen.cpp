// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/GG_RTS_ResourceBuilding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGG_RTS_ResourceBuilding() {}
// Cross Module References
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_ResourceBuilding_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_ResourceBuilding();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Construction();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AGG_RTS_ResourceBuilding::StaticRegisterNativesAGG_RTS_ResourceBuilding()
	{
	}
	UClass* Z_Construct_UClass_AGG_RTS_ResourceBuilding_NoRegister()
	{
		return AGG_RTS_ResourceBuilding::StaticClass();
	}
	struct Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_buildTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeUntilBuilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeUntilBuilt;
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
	UObject* (*const Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGG_RTS_Construction,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GG_RTS_ResourceBuilding.h" },
		{ "ModuleRelativePath", "GG_RTS_ResourceBuilding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_buildTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ConstructionSettings" },
		{ "ModuleRelativePath", "GG_RTS_ResourceBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_buildTime = { "buildTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_ResourceBuilding, buildTime), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_buildTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_buildTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_timeUntilBuilt_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ConstructionSettings" },
		{ "ModuleRelativePath", "GG_RTS_ResourceBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_timeUntilBuilt = { "timeUntilBuilt", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_ResourceBuilding, timeUntilBuilt), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_timeUntilBuilt_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_timeUntilBuilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_staticMesh_MetaData[] = {
		{ "Category", "GG_RTS_ResourceBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_ResourceBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_ResourceBuilding, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_staticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_staticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_cursorToWorld_MetaData[] = {
		{ "Category", "GG_RTS_ResourceBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_ResourceBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_cursorToWorld = { "cursorToWorld", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_ResourceBuilding, cursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_cursorToWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_cursorToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_sphereComponent_MetaData[] = {
		{ "Category", "GG_RTS_ResourceBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_ResourceBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_sphereComponent = { "sphereComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_ResourceBuilding, sphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_sphereComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_sphereComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_buildTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_timeUntilBuilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_staticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_cursorToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::NewProp_sphereComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGG_RTS_ResourceBuilding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::ClassParams = {
		&AGG_RTS_ResourceBuilding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGG_RTS_ResourceBuilding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGG_RTS_ResourceBuilding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGG_RTS_ResourceBuilding, 4252172805);
	template<> RTS_BASEBUILDER_API UClass* StaticClass<AGG_RTS_ResourceBuilding>()
	{
		return AGG_RTS_ResourceBuilding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGG_RTS_ResourceBuilding(Z_Construct_UClass_AGG_RTS_ResourceBuilding, &AGG_RTS_ResourceBuilding::StaticClass, TEXT("/Script/RTS_BaseBuilder"), TEXT("AGG_RTS_ResourceBuilding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGG_RTS_ResourceBuilding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
