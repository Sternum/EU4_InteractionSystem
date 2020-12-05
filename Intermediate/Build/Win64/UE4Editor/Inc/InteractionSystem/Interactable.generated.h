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
struct FHitResult;
#ifdef INTERACTIONSYSTEM_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define INTERACTIONSYSTEM_Interactable_generated_h

#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_SPARSE_DATA
#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractable)


#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractable)


#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractable(UInteractable&&); \
	NO_API UInteractable(const UInteractable&); \
public:


#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractable(UInteractable&&); \
	NO_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractable)


#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_PRIVATE_PROPERTY_OFFSET
#define InteractionSystem_Source_InteractionSystem_Interactable_h_13_PROLOG
#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_PRIVATE_PROPERTY_OFFSET \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_SPARSE_DATA \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_RPC_WRAPPERS \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_INCLASS \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InteractionSystem_Source_InteractionSystem_Interactable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_PRIVATE_PROPERTY_OFFSET \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_SPARSE_DATA \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_INCLASS_NO_PURE_DECLS \
	InteractionSystem_Source_InteractionSystem_Interactable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InteractionSystem_Source_InteractionSystem_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
