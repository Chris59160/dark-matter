// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkMatter/DarkMatterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkMatterGameModeBase() {}
// Cross Module References
	DARKMATTER_API UClass* Z_Construct_UClass_ADarkMatterGameModeBase_NoRegister();
	DARKMATTER_API UClass* Z_Construct_UClass_ADarkMatterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DarkMatter();
// End Cross Module References
	void ADarkMatterGameModeBase::StaticRegisterNativesADarkMatterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADarkMatterGameModeBase_NoRegister()
	{
		return ADarkMatterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADarkMatterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADarkMatterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkMatter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADarkMatterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DarkMatterGameModeBase.h" },
		{ "ModuleRelativePath", "DarkMatterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADarkMatterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADarkMatterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADarkMatterGameModeBase_Statics::ClassParams = {
		&ADarkMatterGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADarkMatterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADarkMatterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADarkMatterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADarkMatterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADarkMatterGameModeBase, 208962916);
	template<> DARKMATTER_API UClass* StaticClass<ADarkMatterGameModeBase>()
	{
		return ADarkMatterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADarkMatterGameModeBase(Z_Construct_UClass_ADarkMatterGameModeBase, &ADarkMatterGameModeBase::StaticClass, TEXT("/Script/DarkMatter"), TEXT("ADarkMatterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADarkMatterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
