// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/RTS_BaseBuilderPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTS_BaseBuilderPlayerController() {}
// Cross Module References
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_ARTS_BaseBuilderPlayerController_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_ARTS_BaseBuilderPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
// End Cross Module References
	void ARTS_BaseBuilderPlayerController::StaticRegisterNativesARTS_BaseBuilderPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ARTS_BaseBuilderPlayerController_NoRegister()
	{
		return ARTS_BaseBuilderPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARTS_BaseBuilderPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTS_BaseBuilderPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_BaseBuilderPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RTS_BaseBuilderPlayerController.h" },
		{ "ModuleRelativePath", "RTS_BaseBuilderPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTS_BaseBuilderPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTS_BaseBuilderPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTS_BaseBuilderPlayerController_Statics::ClassParams = {
		&ARTS_BaseBuilderPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTS_BaseBuilderPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARTS_BaseBuilderPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTS_BaseBuilderPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARTS_BaseBuilderPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARTS_BaseBuilderPlayerController, 1430435944);
	template<> RTS_BASEBUILDER_API UClass* StaticClass<ARTS_BaseBuilderPlayerController>()
	{
		return ARTS_BaseBuilderPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTS_BaseBuilderPlayerController(Z_Construct_UClass_ARTS_BaseBuilderPlayerController, &ARTS_BaseBuilderPlayerController::StaticClass, TEXT("/Script/RTS_BaseBuilder"), TEXT("ARTS_BaseBuilderPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTS_BaseBuilderPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
