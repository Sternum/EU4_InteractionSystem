// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIONSYSTEM_InteractionSystemCharacter_generated_h
#error "InteractionSystemCharacter.generated.h already included, missing '#pragma once' in InteractionSystemCharacter.h"
#endif
#define INTERACTIONSYSTEM_InteractionSystemCharacter_generated_h

#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_SPARSE_DATA
#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_RPC_WRAPPERS
#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionSystemCharacter(); \
	friend struct Z_Construct_UClass_AInteractionSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AInteractionSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(AInteractionSystemCharacter)


#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionSystemCharacter(); \
	friend struct Z_Construct_UClass_AInteractionSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AInteractionSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(AInteractionSystemCharacter)


#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionSystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionSystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionSystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionSystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionSystemCharacter(AInteractionSystemCharacter&&); \
	NO_API AInteractionSystemCharacter(const AInteractionSystemCharacter&); \
public:


#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionSystemCharacter(AInteractionSystemCharacter&&); \
	NO_API AInteractionSystemCharacter(const AInteractionSystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionSystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionSystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionSystemCharacter)


#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AInteractionSystemCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AInteractionSystemCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AInteractionSystemCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AInteractionSystemCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AInteractionSystemCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AInteractionSystemCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AInteractionSystemCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AInteractionSystemCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__InteractionComponent() { return STRUCT_OFFSET(AInteractionSystemCharacter, InteractionComponent); }


#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_11_PROLOG
#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_SPARSE_DATA \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_RPC_WRAPPERS \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_INCLASS \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_SPARSE_DATA \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_INCLASS_NO_PURE_DECLS \
	InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class AInteractionSystemCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InteractionSystem_Source_InteractionSystem_InteractionSystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
