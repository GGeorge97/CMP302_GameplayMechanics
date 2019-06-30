// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_BASEBUILDER_GG_RTS_Camera_generated_h
#error "GG_RTS_Camera.generated.h already included, missing '#pragma once' in GG_RTS_Camera.h"
#endif
#define RTS_BASEBUILDER_GG_RTS_Camera_generated_h

#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPitchAndYaw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PitchAndYaw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoomOut(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoomIn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_axisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_axisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_axisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_axisValue); \
		P_NATIVE_END; \
	}


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPitchAndYaw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PitchAndYaw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoomOut(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoomIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoomIn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_axisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_axisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_axisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_axisValue); \
		P_NATIVE_END; \
	}


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGG_RTS_Camera(); \
	friend struct Z_Construct_UClass_AGG_RTS_Camera_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_Camera, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_Camera)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGG_RTS_Camera(); \
	friend struct Z_Construct_UClass_AGG_RTS_Camera_Statics; \
public: \
	DECLARE_CLASS(AGG_RTS_Camera, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTS_BaseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AGG_RTS_Camera)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGG_RTS_Camera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGG_RTS_Camera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_Camera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_Camera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_Camera(AGG_RTS_Camera&&); \
	NO_API AGG_RTS_Camera(const AGG_RTS_Camera&); \
public:


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGG_RTS_Camera(AGG_RTS_Camera&&); \
	NO_API AGG_RTS_Camera(const AGG_RTS_Camera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGG_RTS_Camera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGG_RTS_Camera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGG_RTS_Camera)


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerControllerPtr() { return STRUCT_OFFSET(AGG_RTS_Camera, playerControllerPtr); } \
	FORCEINLINE static uint32 __PPO__cameraSpringArm() { return STRUCT_OFFSET(AGG_RTS_Camera, cameraSpringArm); } \
	FORCEINLINE static uint32 __PPO__mainCamera() { return STRUCT_OFFSET(AGG_RTS_Camera, mainCamera); } \
	FORCEINLINE static uint32 __PPO__viewportWidth() { return STRUCT_OFFSET(AGG_RTS_Camera, viewportWidth); } \
	FORCEINLINE static uint32 __PPO__viewportHeight() { return STRUCT_OFFSET(AGG_RTS_Camera, viewportHeight); } \
	FORCEINLINE static uint32 __PPO__viewportMargin() { return STRUCT_OFFSET(AGG_RTS_Camera, viewportMargin); } \
	FORCEINLINE static uint32 __PPO__maxArmLength() { return STRUCT_OFFSET(AGG_RTS_Camera, maxArmLength); } \
	FORCEINLINE static uint32 __PPO__minArmLength() { return STRUCT_OFFSET(AGG_RTS_Camera, minArmLength); } \
	FORCEINLINE static uint32 __PPO__maxPitch() { return STRUCT_OFFSET(AGG_RTS_Camera, maxPitch); } \
	FORCEINLINE static uint32 __PPO__minPitch() { return STRUCT_OFFSET(AGG_RTS_Camera, minPitch); } \
	FORCEINLINE static uint32 __PPO__zoomSensitivity() { return STRUCT_OFFSET(AGG_RTS_Camera, zoomSensitivity); } \
	FORCEINLINE static uint32 __PPO__moveSensitivity() { return STRUCT_OFFSET(AGG_RTS_Camera, moveSensitivity); }


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_14_PROLOG
#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_RPC_WRAPPERS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_INCLASS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_PRIVATE_PROPERTY_OFFSET \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_INCLASS_NO_PURE_DECLS \
	RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_BASEBUILDER_API UClass* StaticClass<class AGG_RTS_Camera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BaseBuilder_Source_RTS_BaseBuilder_GG_RTS_Camera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
