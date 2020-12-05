// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef INTERACTIONSYSTEM_InteractionSystemProjectile_generated_h
#error "InteractionSystemProjectile.generated.h already included, missing '#pragma once' in InteractionSystemProjectile.h"
#endif
#define INTERACTIONSYSTEM_InteractionSystemProjectile_generated_h

#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_SPARSE_DATA
#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionSystemProjectile(); \
	friend struct Z_Construct_UClass_AInteractionSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AInteractionSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(AInteractionSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionSystemProjectile(); \
	friend struct Z_Construct_UClass_AInteractionSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AInteractionSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(AInteractionSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionSystemProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionSystemProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionSystemProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionSystemProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionSystemProjectile(AInteractionSystemProjectile&&); \
	NO_API AInteractionSystemProjectile(const AInteractionSystemProjectile&); \
public:


#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionSystemProjectile(AInteractionSystemProjectile&&); \
	NO_API AInteractionSystemProjectile(const AInteractionSystemProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionSystemProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionSystemProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionSystemProjectile)


#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AInteractionSystemProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AInteractionSystemProjectile, ProjectileMovement); }


#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_9_PROLOG
#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_SPARSE_DATA \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_RPC_WRAPPERS \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_INCLASS \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_SPARSE_DATA \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_INCLASS_NO_PURE_DECLS \
	InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class AInteractionSystemProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InteractionSystem_Source_InteractionSystem_InteractionSystemProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
