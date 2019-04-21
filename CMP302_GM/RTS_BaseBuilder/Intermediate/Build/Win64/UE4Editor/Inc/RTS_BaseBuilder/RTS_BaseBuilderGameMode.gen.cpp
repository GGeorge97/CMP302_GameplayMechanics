// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/RTS_BaseBuilderGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTS_BaseBuilderGameMode() {}
// Cross Module References
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_ARTS_BaseBuilderGameMode_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_ARTS_BaseBuilderGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
// End Cross Module References
	void ARTS_BaseBuilderGameMode::StaticRegisterNativesARTS_BaseBuilderGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARTS_BaseBuilderGameMode_NoRegister()
	{
		return ARTS_BaseBuilderGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARTS_BaseBuilderGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTS_BaseBuilderGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_BaseBuilderGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RTS_BaseBuilderGameMode.h" },
		{ "ModuleRelativePath", "RTS_BaseBuilderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTS_BaseBuilderGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTS_BaseBuilderGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTS_BaseBuilderGameMode_Statics::ClassParams = {
		&ARTS_BaseBuilderGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ARTS_BaseBuilderGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARTS_BaseBuilderGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTS_BaseBuilderGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARTS_BaseBuilderGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARTS_BaseBuilderGameMode, 2324924510);
	template<> RTS_BASEBUILDER_API UClass* StaticClass<ARTS_BaseBuilderGameMode>()
	{
		return ARTS_BaseBuilderGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTS_BaseBuilderGameMode(Z_Construct_UClass_ARTS_BaseBuilderGameMode, &ARTS_BaseBuilderGameMode::StaticClass, TEXT("/Script/RTS_BaseBuilder"), TEXT("ARTS_BaseBuilderGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTS_BaseBuilderGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
