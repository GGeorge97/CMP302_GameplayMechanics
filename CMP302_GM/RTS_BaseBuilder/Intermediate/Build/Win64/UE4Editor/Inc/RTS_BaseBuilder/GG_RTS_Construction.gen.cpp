// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/GG_RTS_Construction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGG_RTS_Construction() {}
// Cross Module References
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Construction_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Construction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
// End Cross Module References
	void AGG_RTS_Construction::StaticRegisterNativesAGG_RTS_Construction()
	{
	}
	UClass* Z_Construct_UClass_AGG_RTS_Construction_NoRegister()
	{
		return AGG_RTS_Construction::StaticClass();
	}
	struct Z_Construct_UClass_AGG_RTS_Construction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGG_RTS_Construction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Construction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GG_RTS_Construction.h" },
		{ "ModuleRelativePath", "GG_RTS_Construction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGG_RTS_Construction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGG_RTS_Construction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGG_RTS_Construction_Statics::ClassParams = {
		&AGG_RTS_Construction::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Construction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Construction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGG_RTS_Construction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGG_RTS_Construction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGG_RTS_Construction, 145913462);
	template<> RTS_BASEBUILDER_API UClass* StaticClass<AGG_RTS_Construction>()
	{
		return AGG_RTS_Construction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGG_RTS_Construction(Z_Construct_UClass_AGG_RTS_Construction, &AGG_RTS_Construction::StaticClass, TEXT("/Script/RTS_BaseBuilder"), TEXT("AGG_RTS_Construction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGG_RTS_Construction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
