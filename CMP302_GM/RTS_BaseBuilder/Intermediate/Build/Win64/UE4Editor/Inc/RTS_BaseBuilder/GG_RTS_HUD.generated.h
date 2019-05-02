// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHUD_Element;
#ifdef RTS_BASEBUILDER_GG_RTS_HUD_generated_h
#error "GG_RTS_HUD.generated.h already included, missing '#pragma once' in GG_RTS_HUD.h"
#endif
#define RTS_BASEBUILDER_GG_RTS_HUD_generated_h

#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHUD_Element_Statics; \
	RTS_BASEBUILDER_API static class UScriptStruct* StaticStruct();


template<> RTS_BASEBUILDER_API UScriptStruct* StaticStruct<struct FHUD_Element>();

#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCursorInBounds) \
	{ \
		P_GET_STRUCT(FHUD_Element,Z_Param_UIElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCursorInBounds(Z_Param_UIElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawButtonTooltip) \
	{ \
		P_GET_STRUCT(FHUD_Element,Z_Param_UIElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawButtonTooltip(Z_Param_UIElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawBuildingSelectedUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawBuildingSelectedUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawUnitSelectedUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawUnitSelectedUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawSelectionBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawSelectionBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawResourceStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawResourceStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMenuBoxes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawMenuBoxes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawHUD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPlay(); \
		P_NATIVE_END; \
	}


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCursorInBounds) \
	{ \
		P_GET_STRUCT(FHUD_Element,Z_Param_UIElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCursorInBounds(Z_Param_UIElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawButtonTooltip) \
	{ \
		P_GET_STRUCT(FHUD_Element,Z_Param_UIElement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawButtonTooltip(Z_Param_UIElement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawBuildingSelectedUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawBuildingSelectedUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawUnitSelectedUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawUnitSelectedUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawSelectionBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawSelectionBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawResourceStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawResourceStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawMenuBoxes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawMenuBoxes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawHUD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPlay(); \
		P_NATIVE_END; \
	}


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGG_RTS_HUD(); \
	friend struct Z_Construct_UClass_AGG_RTS_HUD_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_HUD)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_INCLASS \
private: \
	static void StaticRegisterNativesAGG_RTS_HUD(); \
	friend struct Z_Construct_UClass_AGG_RTS_HUD_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_HUD)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGG_RTS_HUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGG_RTS_HUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_HUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_HUD(AGG_RTS_HUD&&); \
	NO_API AGG_RTS_HUD(const AGG_RTS_HUD&); \
public:


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_HUD(AGG_RTS_HUD&&); \
	NO_API AGG_RTS_HUD(const AGG_RTS_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_HUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGG_RTS_HUD)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__initalPoint() { return STRUCT_OFFSET(AGG_RTS_HUD, initalPoint); } \
	FORCEINLINE static uint32 __PPO__currentPoint() { return STRUCT_OFFSET(AGG_RTS_HUD, currentPoint); } \
	FORCEINLINE static uint32 __PPO__canvasSize() { return STRUCT_OFFSET(AGG_RTS_HUD, canvasSize); } \
	FORCEINLINE static uint32 __PPO__font() { return STRUCT_OFFSET(AGG_RTS_HUD, font); } \
	FORCEINLINE static uint32 __PPO__woodAmount() { return STRUCT_OFFSET(AGG_RTS_HUD, woodAmount); } \
	FORCEINLINE static uint32 __PPO__stoneAmount() { return STRUCT_OFFSET(AGG_RTS_HUD, stoneAmount); } \
	FORCEINLINE static uint32 __PPO__foundUnits() { return STRUCT_OFFSET(AGG_RTS_HUD, foundUnits); } \
	FORCEINLINE static uint32 __PPO__foundBuildings() { return STRUCT_OFFSET(AGG_RTS_HUD, foundBuildings); } \
	FORCEINLINE static uint32 __PPO__unitHUDButtons() { return STRUCT_OFFSET(AGG_RTS_HUD, unitHUDButtons); } \
	FORCEINLINE static uint32 __PPO__buildingHUDButtons() { return STRUCT_OFFSET(AGG_RTS_HUD, buildingHUDButtons); } \
	FORCEINLINE static uint32 __PPO__PCPtr() { return STRUCT_OFFSET(AGG_RTS_HUD, PCPtr); } \
	FORCEINLINE static uint32 __PPO__gameMode() { return STRUCT_OFFSET(AGG_RTS_HUD, gameMode); }


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_48_PROLOG
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_RPC_WRAPPERS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_INCLASS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_INCLASS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_BASEBUILDER_API UClass* StaticClass<class AGG_RTS_HUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
