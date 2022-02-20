// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkMatter/Public/Interfaces/ITypeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITypeComponent() {}
// Cross Module References
	DARKMATTER_API UClass* Z_Construct_UClass_UITypeComponent_NoRegister();
	DARKMATTER_API UClass* Z_Construct_UClass_UITypeComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DarkMatter();
// End Cross Module References
	void UITypeComponent::StaticRegisterNativesUITypeComponent()
	{
	}
	UClass* Z_Construct_UClass_UITypeComponent_NoRegister()
	{
		return UITypeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UITypeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UITypeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkMatter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UITypeComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Interfaces/ITypeComponent.h" },
		{ "ModuleRelativePath", "Public/Interfaces/ITypeComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UITypeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UITypeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UITypeComponent_Statics::ClassParams = {
		&UITypeComponent::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UITypeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UITypeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UITypeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UITypeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UITypeComponent, 3886050465);
	template<> DARKMATTER_API UClass* StaticClass<UITypeComponent>()
	{
		return UITypeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UITypeComponent(Z_Construct_UClass_UITypeComponent, &UITypeComponent::StaticClass, TEXT("/Script/DarkMatter"), TEXT("UITypeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UITypeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
