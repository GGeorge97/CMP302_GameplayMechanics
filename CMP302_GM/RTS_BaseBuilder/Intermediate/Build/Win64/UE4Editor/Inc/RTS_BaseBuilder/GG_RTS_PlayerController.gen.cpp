// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS_BaseBuilder/GG_RTS_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGG_RTS_PlayerController() {}
// Cross Module References
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_PlayerController_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_PlayerController_ActionStart();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_PlayerController_SelectPressed();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_PlayerController_SelectReleased();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_PlayerController_SetupInputComponent();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Worker_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_HUD_NoRegister();
// End Cross Module References
	void AGG_RTS_PlayerController::StaticRegisterNativesAGG_RTS_PlayerController()
	{
		UClass* Class = AGG_RTS_PlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActionStart", &AGG_RTS_PlayerController::execActionStart },
			{ "SelectPressed", &AGG_RTS_PlayerController::execSelectPressed },
			{ "SelectReleased", &AGG_RTS_PlayerController::execSelectReleased },
			{ "SetupInputComponent", &AGG_RTS_PlayerController::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGG_RTS_PlayerController_ActionStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_PlayerController_ActionStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_PlayerController_ActionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_PlayerController, nullptr, "ActionStart", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_PlayerController_ActionStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_PlayerController_ActionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_PlayerController_ActionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_PlayerController_ActionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_PlayerController_SelectPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_PlayerController_SelectPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_PlayerController_SelectPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_PlayerController, nullptr, "SelectPressed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_PlayerController_SelectPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_PlayerController_SelectPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_PlayerController_SelectPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_PlayerController_SelectPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_PlayerController_SelectReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_PlayerController_SelectReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_PlayerController_SelectReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_PlayerController, nullptr, "SelectReleased", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_PlayerController_SelectReleased_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_PlayerController_SelectReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_PlayerController_SelectReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_PlayerController_SelectReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_PlayerController_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_PlayerController_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_PlayerController_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_PlayerController, nullptr, "SetupInputComponent", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_PlayerController_SetupInputComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_PlayerController_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_PlayerController_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_PlayerController_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGG_RTS_PlayerController_NoRegister()
	{
		return AGG_RTS_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGG_RTS_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_selectedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGG_RTS_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGG_RTS_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGG_RTS_PlayerController_ActionStart, "ActionStart" }, // 3935857309
		{ &Z_Construct_UFunction_AGG_RTS_PlayerController_SelectPressed, "SelectPressed" }, // 397164211
		{ &Z_Construct_UFunction_AGG_RTS_PlayerController_SelectReleased, "SelectReleased" }, // 2287286448
		{ &Z_Construct_UFunction_AGG_RTS_PlayerController_SetupInputComponent, "SetupInputComponent" }, // 618808192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GG_RTS_PlayerController.h" },
		{ "ModuleRelativePath", "GG_RTS_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_selectedActors_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_selectedActors = { "selectedActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_PlayerController, selectedActors), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_selectedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_selectedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_selectedActors_Inner = { "selectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGG_RTS_Worker_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_HUDPtr_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_HUDPtr = { "HUDPtr", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_PlayerController, HUDPtr), Z_Construct_UClass_AGG_RTS_HUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_HUDPtr_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_HUDPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGG_RTS_PlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_selectedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_selectedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_PlayerController_Statics::NewProp_HUDPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGG_RTS_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGG_RTS_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGG_RTS_PlayerController_Statics::ClassParams = {
		&AGG_RTS_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGG_RTS_PlayerController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_PlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGG_RTS_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGG_RTS_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGG_RTS_PlayerController, 1747247077);
	template<> RTS_BASEBUILDER_API UClass* StaticClass<AGG_RTS_PlayerController>()
	{
		return AGG_RTS_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGG_RTS_PlayerController(Z_Construct_UClass_AGG_RTS_PlayerController, &AGG_RTS_PlayerController::StaticClass, TEXT("/Script/RTS_BaseBuilder"), TEXT("AGG_RTS_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGG_RTS_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
