// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef RTS_BASEBUILDER_GG_RTS_PlayerController_generated_h
#error "GG_RTS_PlayerController.generated.h already included, missing '#pragma once' in GG_RTS_PlayerController.h"
#endif
#define RTS_BASEBUILDER_GG_RTS_PlayerController_generated_h

#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActionStartManual) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_actionLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActionStartManual(Z_Param_actionLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActionStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActionStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupInputComponent(); \
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


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActionStartManual) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_actionLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActionStartManual(Z_Param_actionLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActionStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActionStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupInputComponent(); \
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


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGG_RTS_PlayerController(); \
	friend struct Z_Construct_UClass_AGG_RTS_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_PlayerController)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAGG_RTS_PlayerController(); \
	friend struct Z_Construct_UClass_AGG_RTS_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_PlayerController)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGG_RTS_PlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGG_RTS_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_PlayerController(AGG_RTS_PlayerController&&); \
	NO_API AGG_RTS_PlayerController(const AGG_RTS_PlayerController&); \
public:


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_PlayerController(AGG_RTS_PlayerController&&); \
	NO_API AGG_RTS_PlayerController(const AGG_RTS_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGG_RTS_PlayerController)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDPtr() { return STRUCT_OFFSET(AGG_RTS_PlayerController, HUDPtr); } \
	FORCEINLINE static uint32 __PPO__newBuilding() { return STRUCT_OFFSET(AGG_RTS_PlayerController, newBuilding); } \
	FORCEINLINE static uint32 __PPO__selectedUnits() { return STRUCT_OFFSET(AGG_RTS_PlayerController, selectedUnits); } \
	FORCEINLINE static uint32 __PPO__selectedBuildings() { return STRUCT_OFFSET(AGG_RTS_PlayerController, selectedBuildings); } \
	FORCEINLINE static uint32 __PPO__objectTypes() { return STRUCT_OFFSET(AGG_RTS_PlayerController, objectTypes); } \
	FORCEINLINE static uint32 __PPO__constructionType() { return STRUCT_OFFSET(AGG_RTS_PlayerController, constructionType); }


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_PROLOG
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_RPC_WRAPPERS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_INCLASS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_INCLASS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_BASEBUILDER_API UClass* StaticClass<class AGG_RTS_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
