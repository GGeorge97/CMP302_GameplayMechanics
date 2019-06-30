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
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_Camera_EndRotation();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_Camera_MoveForward();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_Camera_MoveRight();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_Camera_PitchAndYaw();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_Camera_ZoomIn();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_Camera_ZoomOut();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_PlayerController_NoRegister();
// End Cross Module References
	void AGG_RTS_Camera::StaticRegisterNativesAGG_RTS_Camera()
	{
		UClass* Class = AGG_RTS_Camera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndRotation", &AGG_RTS_Camera::execEndRotation },
			{ "MoveForward", &AGG_RTS_Camera::execMoveForward },
			{ "MoveRight", &AGG_RTS_Camera::execMoveRight },
			{ "PitchAndYaw", &AGG_RTS_Camera::execPitchAndYaw },
			{ "ZoomIn", &AGG_RTS_Camera::execZoomIn },
			{ "ZoomOut", &AGG_RTS_Camera::execZoomOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGG_RTS_Camera_EndRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_Camera_EndRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_Camera_EndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_Camera, nullptr, "EndRotation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_Camera_EndRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_Camera_EndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_Camera_EndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_Camera_EndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics
	{
		struct GG_RTS_Camera_eventMoveForward_Parms
		{
			float axisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GG_RTS_Camera_eventMoveForward_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_Camera, nullptr, "MoveForward", sizeof(GG_RTS_Camera_eventMoveForward_Parms), Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_Camera_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_Camera_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics
	{
		struct GG_RTS_Camera_eventMoveRight_Parms
		{
			float axisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GG_RTS_Camera_eventMoveRight_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_Camera, nullptr, "MoveRight", sizeof(GG_RTS_Camera_eventMoveRight_Parms), Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_Camera_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_Camera_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_Camera_PitchAndYaw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_Camera_PitchAndYaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_Camera_PitchAndYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_Camera, nullptr, "PitchAndYaw", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_Camera_PitchAndYaw_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_Camera_PitchAndYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_Camera_PitchAndYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_Camera_PitchAndYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_Camera_ZoomIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_Camera_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_Camera_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_Camera, nullptr, "ZoomIn", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_Camera_ZoomIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_Camera_ZoomIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_Camera_ZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_Camera_ZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_Camera_ZoomOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_Camera_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_Camera_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_Camera, nullptr, "ZoomOut", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_Camera_ZoomOut_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_Camera_ZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_Camera_ZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_Camera_ZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGG_RTS_Camera_NoRegister()
	{
		return AGG_RTS_Camera::StaticClass();
	}
	struct Z_Construct_UClass_AGG_RTS_Camera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoomSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zoomSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxArmLength;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AGG_RTS_Camera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGG_RTS_Camera_EndRotation, "EndRotation" }, // 1807516211
		{ &Z_Construct_UFunction_AGG_RTS_Camera_MoveForward, "MoveForward" }, // 521663293
		{ &Z_Construct_UFunction_AGG_RTS_Camera_MoveRight, "MoveRight" }, // 4035995727
		{ &Z_Construct_UFunction_AGG_RTS_Camera_PitchAndYaw, "PitchAndYaw" }, // 522417146
		{ &Z_Construct_UFunction_AGG_RTS_Camera_ZoomIn, "ZoomIn" }, // 3362195632
		{ &Z_Construct_UFunction_AGG_RTS_Camera_ZoomOut, "ZoomOut" }, // 668588555
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GG_RTS_Camera.h" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_moveSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_moveSensitivity = { "moveSensitivity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, moveSensitivity), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_moveSensitivity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_moveSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_zoomSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_zoomSensitivity = { "zoomSensitivity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, zoomSensitivity), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_zoomSensitivity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_zoomSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minPitch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minPitch = { "minPitch", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, minPitch), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxPitch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxPitch = { "maxPitch", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, maxPitch), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minArmLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minArmLength = { "minArmLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, minArmLength), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minArmLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxArmLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "GG_RTS_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxArmLength = { "maxArmLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_Camera, maxArmLength), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxArmLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxArmLength_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_moveSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_zoomSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_minArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_maxArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_Camera_Statics::NewProp_viewportWidth,
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
		FuncInfo,
		Z_Construct_UClass_AGG_RTS_Camera_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGG_RTS_Camera, 2361655246);
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
