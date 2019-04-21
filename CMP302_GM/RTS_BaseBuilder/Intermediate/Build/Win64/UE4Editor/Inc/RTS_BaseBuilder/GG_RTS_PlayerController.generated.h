// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_BASEBUILDER_GG_RTS_PlayerController_generated_h
#error "GG_RTS_PlayerController.generated.h already included, missing '#pragma once' in GG_RTS_PlayerController.h"
#endif
#define RTS_BASEBUILDER_GG_RTS_PlayerController_generated_h

#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupInputComponent(); \
		P_NATIVE_END; \
	}


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupInputComponent(); \
		P_NATIVE_END; \
	}


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGG_RTS_PlayerController(); \
	friend struct Z_Construct_UClass_AGG_RTS_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_PlayerController)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAGG_RTS_PlayerController(); \
	friend struct Z_Construct_UClass_AGG_RTS_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_PlayerController)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_STANDARD_CONSTRUCTORS \
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


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_PlayerController(AGG_RTS_PlayerController&&); \
	NO_API AGG_RTS_PlayerController(const AGG_RTS_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGG_RTS_PlayerController)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDPtr() { return STRUCT_OFFSET(AGG_RTS_PlayerController, HUDPtr); } \
	FORCEINLINE static uint32 __PPO__selectedActors() { return STRUCT_OFFSET(AGG_RTS_PlayerController, selectedActors); }


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_15_PROLOG
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_RPC_WRAPPERS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_INCLASS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_INCLASS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_BASEBUILDER_API UClass* StaticClass<class AGG_RTS_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
