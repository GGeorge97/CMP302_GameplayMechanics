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
	RTS_BASEBUILDER_API UScriptStruct* Z_Construct_UScriptStruct_FHUD_Element();
	UPackage* Z_Construct_UPackage__Script_RTS_BaseBuilder();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_HUD_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_HUD_BeginPlay();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawBuildingSelectedUI();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawHUD();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawSelectionBox();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawUnitSelectedUI();
	RTS_BASEBUILDER_API UFunction* Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_PlayerController_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Construction_NoRegister();
	RTS_BASEBUILDER_API UClass* Z_Construct_UClass_AGG_RTS_Worker_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FHUD_Element::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RTS_BASEBUILDER_API uint32 Get_Z_Construct_UScriptStruct_FHUD_Element_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHUD_Element, Z_Construct_UPackage__Script_RTS_BaseBuilder(), TEXT("HUD_Element"), sizeof(FHUD_Element), Get_Z_Construct_UScriptStruct_FHUD_Element_Hash());
	}
	return Singleton;
}
template<> RTS_BASEBUILDER_API UScriptStruct* StaticStruct<FHUD_Element>()
{
	return FHUD_Element::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHUD_Element(FHUD_Element::StaticStruct, TEXT("/Script/RTS_BaseBuilder"), TEXT("HUD_Element"), false, nullptr, nullptr);
static struct FScriptStruct_RTS_BaseBuilder_StaticRegisterNativesFHUD_Element
{
	FScriptStruct_RTS_BaseBuilder_StaticRegisterNativesFHUD_Element()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HUD_Element")),new UScriptStruct::TCppStructOps<FHUD_Element>);
	}
} ScriptStruct_RTS_BaseBuilder_StaticRegisterNativesFHUD_Element;
	struct Z_Construct_UScriptStruct_FHUD_Element_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AABB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AABB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_toolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUD_Element_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHUD_Element_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHUD_Element>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_AABB_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_AABB = { "AABB", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHUD_Element, AABB), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_AABB_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_AABB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_toolTip_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_toolTip = { "toolTip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHUD_Element, toolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_toolTip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_toolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_buttonID_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHUD_Element, buttonID), METADATA_PARAMS(Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_buttonID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_buttonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHUD_Element_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_AABB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_toolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUD_Element_Statics::NewProp_buttonID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHUD_Element_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
		nullptr,
		&NewStructOps,
		"HUD_Element",
		sizeof(FHUD_Element),
		alignof(FHUD_Element),
		Z_Construct_UScriptStruct_FHUD_Element_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHUD_Element_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHUD_Element_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHUD_Element_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHUD_Element()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHUD_Element_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RTS_BaseBuilder();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HUD_Element"), sizeof(FHUD_Element), Get_Z_Construct_UScriptStruct_FHUD_Element_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHUD_Element_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHUD_Element_Hash() { return 3425929876U; }
	void AGG_RTS_HUD::StaticRegisterNativesAGG_RTS_HUD()
	{
		UClass* Class = AGG_RTS_HUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AGG_RTS_HUD::execBeginPlay },
			{ "DrawBuildingSelectedUI", &AGG_RTS_HUD::execDrawBuildingSelectedUI },
			{ "DrawButtonTooltip", &AGG_RTS_HUD::execDrawButtonTooltip },
			{ "DrawHUD", &AGG_RTS_HUD::execDrawHUD },
			{ "DrawSelectionBox", &AGG_RTS_HUD::execDrawSelectionBox },
			{ "DrawUnitSelectedUI", &AGG_RTS_HUD::execDrawUnitSelectedUI },
			{ "IsCursorInBounds", &AGG_RTS_HUD::execIsCursorInBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGG_RTS_HUD_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_HUD_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_HUD_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_HUD, nullptr, "BeginPlay", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_HUD_BeginPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_HUD_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_HUD_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_HUD_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_HUD_DrawBuildingSelectedUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_HUD_DrawBuildingSelectedUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_HUD_DrawBuildingSelectedUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_HUD, nullptr, "DrawBuildingSelectedUI", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_HUD_DrawBuildingSelectedUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_HUD_DrawBuildingSelectedUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawBuildingSelectedUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_HUD_DrawBuildingSelectedUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics
	{
		struct GG_RTS_HUD_eventDrawButtonTooltip_Parms
		{
			FHUD_Element UIElement;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::NewProp_UIElement = { "UIElement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GG_RTS_HUD_eventDrawButtonTooltip_Parms, UIElement), Z_Construct_UScriptStruct_FHUD_Element, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::NewProp_UIElement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_HUD, nullptr, "DrawButtonTooltip", sizeof(GG_RTS_HUD_eventDrawButtonTooltip_Parms), Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_HUD_DrawHUD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_HUD_DrawHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_HUD_DrawHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_HUD, nullptr, "DrawHUD", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_HUD_DrawHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_HUD_DrawHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_HUD_DrawHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_HUD_DrawSelectionBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_HUD_DrawSelectionBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_HUD_DrawSelectionBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_HUD, nullptr, "DrawSelectionBox", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_HUD_DrawSelectionBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_HUD_DrawSelectionBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawSelectionBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_HUD_DrawSelectionBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_HUD_DrawUnitSelectedUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_HUD_DrawUnitSelectedUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_HUD_DrawUnitSelectedUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_HUD, nullptr, "DrawUnitSelectedUI", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_HUD_DrawUnitSelectedUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_HUD_DrawUnitSelectedUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_HUD_DrawUnitSelectedUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_HUD_DrawUnitSelectedUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics
	{
		struct GG_RTS_HUD_eventIsCursorInBounds_Parms
		{
			FHUD_Element UIElement;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GG_RTS_HUD_eventIsCursorInBounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GG_RTS_HUD_eventIsCursorInBounds_Parms), &Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::NewProp_UIElement = { "UIElement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GG_RTS_HUD_eventIsCursorInBounds_Parms, UIElement), Z_Construct_UScriptStruct_FHUD_Element, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::NewProp_UIElement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGG_RTS_HUD, nullptr, "IsCursorInBounds", sizeof(GG_RTS_HUD_eventIsCursorInBounds_Parms), Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGG_RTS_HUD_NoRegister()
	{
		return AGG_RTS_HUD::StaticClass();
	}
	struct Z_Construct_UClass_AGG_RTS_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PCPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PCPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildingHUDButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_buildingHUDButtons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_buildingHUDButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unitHUDButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_unitHUDButtons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_unitHUDButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foundBuildings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_foundBuildings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_foundBuildings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foundUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_foundUnits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_foundUnits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_font_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_canvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initalPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_initalPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGG_RTS_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RTS_BaseBuilder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGG_RTS_HUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGG_RTS_HUD_BeginPlay, "BeginPlay" }, // 1242458385
		{ &Z_Construct_UFunction_AGG_RTS_HUD_DrawBuildingSelectedUI, "DrawBuildingSelectedUI" }, // 3491204944
		{ &Z_Construct_UFunction_AGG_RTS_HUD_DrawButtonTooltip, "DrawButtonTooltip" }, // 3412676787
		{ &Z_Construct_UFunction_AGG_RTS_HUD_DrawHUD, "DrawHUD" }, // 1075962298
		{ &Z_Construct_UFunction_AGG_RTS_HUD_DrawSelectionBox, "DrawSelectionBox" }, // 781780488
		{ &Z_Construct_UFunction_AGG_RTS_HUD_DrawUnitSelectedUI, "DrawUnitSelectedUI" }, // 1757923709
		{ &Z_Construct_UFunction_AGG_RTS_HUD_IsCursorInBounds, "IsCursorInBounds" }, // 2615408585
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_PCPtr_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_PCPtr = { "PCPtr", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, PCPtr), Z_Construct_UClass_AGG_RTS_PlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_PCPtr_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_PCPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_buildingHUDButtons_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_buildingHUDButtons = { "buildingHUDButtons", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, buildingHUDButtons), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_buildingHUDButtons_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_buildingHUDButtons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_buildingHUDButtons_Inner = { "buildingHUDButtons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHUD_Element, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_unitHUDButtons_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_unitHUDButtons = { "unitHUDButtons", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, unitHUDButtons), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_unitHUDButtons_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_unitHUDButtons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_unitHUDButtons_Inner = { "unitHUDButtons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHUD_Element, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundBuildings_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundBuildings = { "foundBuildings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, foundBuildings), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundBuildings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundBuildings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundBuildings_Inner = { "foundBuildings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGG_RTS_Construction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundUnits_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundUnits = { "foundUnits", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, foundUnits), METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundUnits_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundUnits_Inner = { "foundUnits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGG_RTS_Worker_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_font_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_font = { "font", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_font_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_canvasSize_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_canvasSize = { "canvasSize", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, canvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_canvasSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_canvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_currentPoint_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_currentPoint = { "currentPoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, currentPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_currentPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_currentPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_initalPoint_MetaData[] = {
		{ "ModuleRelativePath", "GG_RTS_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_initalPoint = { "initalPoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGG_RTS_HUD, initalPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_initalPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_initalPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGG_RTS_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_PCPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_buildingHUDButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_buildingHUDButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_unitHUDButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_unitHUDButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundBuildings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundBuildings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_foundUnits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_canvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_currentPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGG_RTS_HUD_Statics::NewProp_initalPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGG_RTS_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGG_RTS_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGG_RTS_HUD_Statics::ClassParams = {
		&AGG_RTS_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGG_RTS_HUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGG_RTS_HUD, 916159927);
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
