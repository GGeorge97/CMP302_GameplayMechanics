// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_BASEBUILDER_GG_RTS_Wood_generated_h
#error "GG_RTS_Wood.generated.h already included, missing '#pragma once' in GG_RTS_Wood.h"
#endif
#define RTS_BASEBUILDER_GG_RTS_Wood_generated_h

#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_RPC_WRAPPERS
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGG_RTS_Wood(); \
	friend struct Z_Construct_UClass_AGG_RTS_Wood_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_Wood, AGG_RTS_Resource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_Wood)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGG_RTS_Wood(); \
	friend struct Z_Construct_UClass_AGG_RTS_Wood_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_Wood, AGG_RTS_Resource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_Wood)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGG_RTS_Wood(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGG_RTS_Wood) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_Wood); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_Wood); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_Wood(AGG_RTS_Wood&&); \
	NO_API AGG_RTS_Wood(const AGG_RTS_Wood&); \
public:


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_Wood(AGG_RTS_Wood&&); \
	NO_API AGG_RTS_Wood(const AGG_RTS_Wood&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_Wood); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_Wood); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGG_RTS_Wood)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sphereComponent() { return STRUCT_OFFSET(AGG_RTS_Wood, sphereComponent); } \
	FORCEINLINE static uint32 __PPO__staticMesh() { return STRUCT_OFFSET(AGG_RTS_Wood, staticMesh); } \
	FORCEINLINE static uint32 __PPO__resourceValue() { return STRUCT_OFFSET(AGG_RTS_Wood, resourceValue); }


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_9_PROLOG
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_RPC_WRAPPERS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_INCLASS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_INCLASS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_BASEBUILDER_API UClass* StaticClass<class AGG_RTS_Wood>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Wood_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
