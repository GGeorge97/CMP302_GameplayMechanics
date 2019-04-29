// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_BASEBUILDER_GG_RTS_Worker_generated_h
#error "GG_RTS_Worker.generated.h already included, missing '#pragma once' in GG_RTS_Worker.h"
#endif
#define RTS_BASEBUILDER_GG_RTS_Worker_generated_h

#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_RPC_WRAPPERS
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGG_RTS_Worker(); \
	friend struct Z_Construct_UClass_AGG_RTS_Worker_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_Worker, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_Worker)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAGG_RTS_Worker(); \
	friend struct Z_Construct_UClass_AGG_RTS_Worker_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_Worker, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_Worker)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGG_RTS_Worker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGG_RTS_Worker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_Worker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_Worker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_Worker(AGG_RTS_Worker&&); \
	NO_API AGG_RTS_Worker(const AGG_RTS_Worker&); \
public:


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_Worker(AGG_RTS_Worker&&); \
	NO_API AGG_RTS_Worker(const AGG_RTS_Worker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_Worker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_Worker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGG_RTS_Worker)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__cursorToWorld() { return STRUCT_OFFSET(AGG_RTS_Worker, cursorToWorld); } \
	FORCEINLINE static uint32 __PPO__skeletalMesh() { return STRUCT_OFFSET(AGG_RTS_Worker, skeletalMesh); }


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_23_PROLOG
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_RPC_WRAPPERS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_INCLASS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_INCLASS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_BASEBUILDER_API UClass* StaticClass<class AGG_RTS_Worker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Worker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
