// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/GG_RTS_Wood.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGG_RTS_Wood() {}
// Cross Module References
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Wood_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Wood();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Resource();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AGG_RTS_Wood::StaticRegisterNativesAGG_RTS_Wood()
	{
	}
	UClass* Z_Construct_UClass_AGG_RTS_Wood_NoRegister()
	{
		return AGG_RTS_Wood::StaticClass();
	}
	struct Z_Construct_UClass_AGG_RTS_Wood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphereComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGG_RTS_Wood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGG_RTS_Resource,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Wood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GG_RTS_Wood.h" },
		{ "ModuleRelativePath", "GG_RTS_Wood.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_staticMesh_MetaData[] = {
		{ "Category", "GG_RTS_Wood" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_Wood.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Wood, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_staticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_staticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_sphereComponent_MetaData[] = {
		{ "Category", "GG_RTS_Wood" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_Wood.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_sphereComponent = { "sphereComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Wood, sphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_sphereComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_sphereComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGG_RTS_Wood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_staticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Wood_Statics::NewProp_sphereComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGG_RTS_Wood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGG_RTS_Wood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGG_RTS_Wood_Statics::ClassParams = {
		&AGG_RTS_Wood::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGG_RTS_Wood_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Wood_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Wood_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Wood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGG_RTS_Wood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGG_RTS_Wood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGG_RTS_Wood, 28411558);
	template<> RTS_BASEBUILDER_API UClass* StaticClass<AGG_RTS_Wood>()
	{
		return AGG_RTS_Wood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGG_RTS_Wood(Z_Construct_UClass_AGG_RTS_Wood, &AGG_RTS_Wood::StaticClass, TEXT("/Script/RTS_BaseBuilder"), TEXT("AGG_RTS_Wood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGG_RTS_Wood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
