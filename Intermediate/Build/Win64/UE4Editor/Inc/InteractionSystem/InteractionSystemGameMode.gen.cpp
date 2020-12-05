// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/InteractionSystemGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionSystemGameMode() {}
// Cross Module References
	INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_AInteractionSystemGameMode_NoRegister();
	INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_AInteractionSystemGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InteractionSystem();
// End Cross Module References
	void AInteractionSystemGameMode::StaticRegisterNativesAInteractionSystemGameMode()
	{
	}
	UClass* Z_Construct_UClass_AInteractionSystemGameMode_NoRegister()
	{
		return AInteractionSystemGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionSystemGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionSystemGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionSystemGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InteractionSystemGameMode.h" },
		{ "ModuleRelativePath", "InteractionSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionSystemGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionSystemGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractionSystemGameMode_Statics::ClassParams = {
		&AInteractionSystemGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionSystemGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionSystemGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionSystemGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractionSystemGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractionSystemGameMode, 210160267);
	template<> INTERACTIONSYSTEM_API UClass* StaticClass<AInteractionSystemGameMode>()
	{
		return AInteractionSystemGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractionSystemGameMode(Z_Construct_UClass_AInteractionSystemGameMode, &AInteractionSystemGameMode::StaticClass, TEXT("/Script/InteractionSystem"), TEXT("AInteractionSystemGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionSystemGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
