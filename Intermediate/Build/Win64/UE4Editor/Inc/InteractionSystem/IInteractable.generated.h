// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIONSYSTEM_IInteractable_generated_h
#error "IInteractable.generated.h already included, missing '#pragma once' in IInteractable.h"
#endif
#define INTERACTIONSYSTEM_IInteractable_generated_h

#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_SPARSE_DATA
#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_RPC_WRAPPERS
#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIONSYSTEM_API UIInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIONSYSTEM_API, UIInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	INTERACTIONSYSTEM_API UIInteractable(UIInteractable&&); \
	INTERACTIONSYSTEM_API UIInteractable(const UIInteractable&); \
public:


#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIONSYSTEM_API UIInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	INTERACTIONSYSTEM_API UIInteractable(UIInteractable&&); \
	INTERACTIONSYSTEM_API UIInteractable(const UIInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIONSYSTEM_API, UIInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIInteractable)


#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIInteractable(); \
	friend struct Z_Construct_UClass_UIInteractable_Statics; \
public: \
	DECLARE_CLASS(UIInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractionSystem"), INTERACTIONSYSTEM_API) \
	DECLARE_SERIALIZER(UIInteractable)


#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_GENERATED_UINTERFACE_BODY() \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_GENERATED_UINTERFACE_BODY() \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIInteractable() {} \
public: \
	typedef UIInteractable UClassType; \
	typedef IIInteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define InteractionSystem_Source_InteractionSystem_IInteractable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIInteractable() {} \
public: \
	typedef UIInteractable UClassType; \
	typedef IIInteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define InteractionSystem_Source_InteractionSystem_IInteractable_h_10_PROLOG
#define InteractionSystem_Source_InteractionSystem_IInteractable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_SPARSE_DATA \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_RPC_WRAPPERS \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InteractionSystem_Source_InteractionSystem_IInteractable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_SPARSE_DATA \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	InteractionSystem_Source_InteractionSystem_IInteractable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONSYSTEM_API UClass* StaticClass<class UIInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InteractionSystem_Source_InteractionSystem_IInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
