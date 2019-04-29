// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_BASEBUILDER_GG_RTS_Stone_generated_h
#error "GG_RTS_Stone.generated.h already included, missing '#pragma once' in GG_RTS_Stone.h"
#endif
#define RTS_BASEBUILDER_GG_RTS_Stone_generated_h

#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_RPC_WRAPPERS
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGG_RTS_Stone(); \
	friend struct Z_Construct_UClass_AGG_RTS_Stone_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_Stone, AGG_RTS_Resource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_Stone)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGG_RTS_Stone(); \
	friend struct Z_Construct_UClass_AGG_RTS_Stone_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_Stone, AGG_RTS_Resource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_Stone)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGG_RTS_Stone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGG_RTS_Stone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_Stone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_Stone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_Stone(AGG_RTS_Stone&&); \
	NO_API AGG_RTS_Stone(const AGG_RTS_Stone&); \
public:


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_Stone(AGG_RTS_Stone&&); \
	NO_API AGG_RTS_Stone(const AGG_RTS_Stone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_Stone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_Stone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGG_RTS_Stone)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sphereComponent() { return STRUCT_OFFSET(AGG_RTS_Stone, sphereComponent); } \
	FORCEINLINE static uint32 __PPO__staticMesh() { return STRUCT_OFFSET(AGG_RTS_Stone, staticMesh); }


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_12_PROLOG
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_RPC_WRAPPERS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_INCLASS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_INCLASS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_BASEBUILDER_API UClass* StaticClass<class AGG_RTS_Stone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Stone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
