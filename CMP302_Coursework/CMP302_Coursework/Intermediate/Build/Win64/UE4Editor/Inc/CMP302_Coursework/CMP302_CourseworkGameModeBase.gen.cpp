// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CMP302_CourseworkGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMP302_CourseworkGameModeBase() {}
// Cross Module References
	CMP302_COURSEWORK_API UClass* Z_Construct_UClass_ACMP302_CourseworkGameModeBase_NoRegister();
	CMP302_COURSEWORK_API UClass* Z_Construct_UClass_ACMP302_CourseworkGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CMP302_Coursework();
// End Cross Module References
	void ACMP302_CourseworkGameModeBase::StaticRegisterNativesACMP302_CourseworkGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACMP302_CourseworkGameModeBase_NoRegister()
	{
		return ACMP302_CourseworkGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ACMP302_CourseworkGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CMP302_Coursework,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "CMP302_CourseworkGameModeBase.h" },
				{ "ModuleRelativePath", "CMP302_CourseworkGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACMP302_CourseworkGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACMP302_CourseworkGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACMP302_CourseworkGameModeBase, 2677569857);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACMP302_CourseworkGameModeBase(Z_Construct_UClass_ACMP302_CourseworkGameModeBase, &ACMP302_CourseworkGameModeBase::StaticClass, TEXT("/Script/CMP302_Coursework"), TEXT("ACMP302_CourseworkGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACMP302_CourseworkGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
