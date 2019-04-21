// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/GG_RTS_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGG_RTS_HUD() {}
// Cross Module References
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_HUD_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Worker_NoRegister();
// End Cross Module References
	void AGG_RTS_HUD::StaticRegisterNativesAGG_RTS_HUD()
	{
	}
	UClass* Z_Construct_UClass_AGG_RTS_HUD_NoRegister()
	{
		return AGG_RTS_HUD::StaticClass();
	}
	struct Z_Construct_UClass_AGG_RTS_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foundActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_foundActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_foundActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGG_RTS_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GG_RTS_HUD.h" },
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundActors_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundActors = { "foundActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, foundActors), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundActors_Inner = { "foundActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGG_RTS_Worker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGG_RTS_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundActors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGG_RTS_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGG_RTS_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGG_RTS_HUD_Statics::ClassParams = {
		&AGG_RTS_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGG_RTS_HUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGG_RTS_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGG_RTS_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGG_RTS_HUD, 3037340570);
	template<> RTS_BASEBUILDER_API UClass* StaticClass<AGG_RTS_HUD>()
	{
		return AGG_RTS_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGG_RTS_HUD(Z_Construct_UClass_AGG_RTS_HUD, &AGG_RTS_HUD::StaticClass, TEXT("/Script/RTS_BaseBuilder"), TEXT("AGG_RTS_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGG_RTS_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
