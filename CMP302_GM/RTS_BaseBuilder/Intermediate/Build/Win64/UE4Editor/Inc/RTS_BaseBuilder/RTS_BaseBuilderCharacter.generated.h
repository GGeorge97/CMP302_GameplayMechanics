// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_BASEBUILDER_RTS_BaseBuilderCharacter_generated_h
#error "RTS_BaseBuilderCharacter.generated.h already included, missing '#pragma once' in RTS_BaseBuilderCharacter.h"
#endif
#define RTS_BASEBUILDER_RTS_BaseBuilderCharacter_generated_h

#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_RPC_WRAPPERS
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTS_BaseBuilderCharacter(); \
	friend struct Z_Construct_UClass_ARTS_BaseBuilderCharacter_Statics; \
public: \
	DECLARE_CLASS(ARTS_BaseBuilderCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(ARTS_BaseBuilderCharacter)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARTS_BaseBuilderCharacter(); \
	friend struct Z_Construct_UClass_ARTS_BaseBuilderCharacter_Statics; \
public: \
	DECLARE_CLASS(ARTS_BaseBuilderCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(ARTS_BaseBuilderCharacter)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTS_BaseBuilderCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTS_BaseBuilderCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTS_BaseBuilderCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTS_BaseBuilderCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTS_BaseBuilderCharacter(ARTS_BaseBuilderCharacter&&); \
	NO_API ARTS_BaseBuilderCharacter(const ARTS_BaseBuilderCharacter&); \
public:


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTS_BaseBuilderCharacter(ARTS_BaseBuilderCharacter&&); \
	NO_API ARTS_BaseBuilderCharacter(const ARTS_BaseBuilderCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTS_BaseBuilderCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTS_BaseBuilderCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTS_BaseBuilderCharacter)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ARTS_BaseBuilderCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ARTS_BaseBuilderCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ARTS_BaseBuilderCharacter, CursorToWorld); }


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_9_PROLOG
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_RPC_WRAPPERS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_INCLASS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_INCLASS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_BASEBUILDER_API UClass* StaticClass<class ARTS_BaseBuilderCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BaseBuilder_Source_RTS_BaseBuilder_RTS_BaseBuilderCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
