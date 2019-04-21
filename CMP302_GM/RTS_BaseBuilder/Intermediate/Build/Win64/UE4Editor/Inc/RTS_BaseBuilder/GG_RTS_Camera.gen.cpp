// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/GG_RTS_Camera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGG_RTS_Camera() {}
// Cross Module References
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Camera_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Camera();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_PlayerController_NoRegister();
// End Cross Module References
	void AGG_RTS_Camera::StaticRegisterNativesAGG_RTS_Camera()
	{
	}
	UClass* Z_Construct_UClass_AGG_RTS_Camera_NoRegister()
	{
		return AGG_RTS_Camera::StaticClass();
	}
	struct Z_Construct_UClass_AGG_RTS_Camera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewportMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_viewportMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewportHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_viewportHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewportWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_viewportWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pitchAndYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pitchAndYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_movementInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mainCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerControllerPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerControllerPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGG_RTS_Camera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GG_RTS_Camera.h" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportMargin_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportMargin = { "viewportMargin", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, viewportMargin), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportMargin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportHeight_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportHeight = { "viewportHeight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, viewportHeight), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportWidth_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportWidth = { "viewportWidth", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, viewportWidth), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_pitchAndYaw_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_pitchAndYaw = { "pitchAndYaw", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, pitchAndYaw), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_pitchAndYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_pitchAndYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_movementInput_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_movementInput = { "movementInput", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, movementInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_movementInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_movementInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_mainCamera_MetaData[] = {
		{ "Category", "GG_RTS_Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_mainCamera = { "mainCamera", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, mainCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_mainCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_mainCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_cameraSpringArm_MetaData[] = {
		{ "Category", "GG_RTS_Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_cameraSpringArm = { "cameraSpringArm", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, cameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_cameraSpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_cameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_playerControllerPtr_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_playerControllerPtr = { "playerControllerPtr", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, playerControllerPtr), Z_Construct_UClass_AGG_RTS_PlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_playerControllerPtr_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_playerControllerPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGG_RTS_Camera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_pitchAndYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_movementInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_mainCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_cameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_playerControllerPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGG_RTS_Camera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGG_RTS_Camera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGG_RTS_Camera_Statics::ClassParams = {
		&AGG_RTS_Camera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGG_RTS_Camera_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGG_RTS_Camera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGG_RTS_Camera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGG_RTS_Camera, 885007621);
	template<> RTS_BASEBUILDER_API UClass* StaticClass<AGG_RTS_Camera>()
	{
		return AGG_RTS_Camera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGG_RTS_Camera(Z_Construct_UClass_AGG_RTS_Camera, &AGG_RTS_Camera::StaticClass, TEXT("/Script/RTS_BaseBuilder"), TEXT("AGG_RTS_Camera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGG_RTS_Camera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
