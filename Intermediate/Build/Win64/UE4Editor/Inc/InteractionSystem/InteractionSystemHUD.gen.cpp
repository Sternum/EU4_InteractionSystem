// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/InteractionSystemHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionSystemHUD() {}
// Cross Module References
	INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_AInteractionSystemHUD_NoRegister();
	INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_AInteractionSystemHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References
	void AInteractionSystemHUD::StaticRegisterNativesAInteractionSystemHUD()
	{
	}
	UClass* Z_Construct_UClass_AInteractionSystemHUD_NoRegister()
	{
		return AInteractionSystemHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionSystemHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionSystemHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionSystemHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InteractionSystemHUD.h" },
		{ "ModuleRelativePath", "InteractionSystemHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionSystemHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionSystemHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractionSystemHUD_Statics::ClassParams = {
		&AInteractionSystemHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionSystemHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionSystemHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionSystemHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractionSystemHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractionSystemHUD, 2147734913);
	template<> INTERACTIONSYSTEM_API UClass* StaticClass<AInteractionSystemHUD>()
	{
		return AInteractionSystemHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractionSystemHUD(Z_Construct_UClass_AInteractionSystemHUD, &AInteractionSystemHUD::StaticClass, TEXT("/Script/InteractionSystem"), TEXT("AInteractionSystemHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionSystemHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
