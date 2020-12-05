// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSystem/InteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}
// Cross Module References
	INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_InteractionSystem();
	INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionComponent::execInteractAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractAction();
		P_NATIVE_END;
	}
	void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
	{
		UClass* Class = UInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InteractAction", &UInteractionComponent::execInteractAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionComponent_InteractAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_InteractAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_InteractAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "InteractAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_InteractAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_InteractAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_InteractAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_InteractAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
	{
		return UInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Interactables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionComponent_InteractAction, "InteractAction" }, // 885196907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractionComponent.h" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Interactables_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Interactables = { "Interactables", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, Interactables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Interactables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Interactables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Interactables_Inner = { "Interactables", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Interactables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Interactables_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionComponent_Statics::ClassParams = {
		&UInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionComponent, 965614896);
	template<> INTERACTIONSYSTEM_API UClass* StaticClass<UInteractionComponent>()
	{
		return UInteractionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionComponent(Z_Construct_UClass_UInteractionComponent, &UInteractionComponent::StaticClass, TEXT("/Script/InteractionSystem"), TEXT("UInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
