// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/IInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIInteractable() {}
// Cross Module References
	INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UIInteractable_NoRegister();
	INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UIInteractable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References
	void UIInteractable::StaticRegisterNativesUIInteractable()
	{
	}
	UClass* Z_Construct_UClass_UIInteractable_NoRegister()
	{
		return UIInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UIInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIInteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IInteractable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIInteractable_Statics::ClassParams = {
		&UIInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIInteractable, 2462872496);
	template<> INTERACTIONSYSTEM_API UClass* StaticClass<UIInteractable>()
	{
		return UIInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIInteractable(Z_Construct_UClass_UIInteractable, &UIInteractable::StaticClass, TEXT("/Script/InteractionSystem"), TEXT("UIInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
