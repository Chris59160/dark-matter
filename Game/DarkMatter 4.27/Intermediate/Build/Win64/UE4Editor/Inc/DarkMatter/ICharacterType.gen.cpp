// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkMatter/ICharacterType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICharacterType() {}
// Cross Module References
	DARKMATTER_API UClass* Z_Construct_UClass_UCharacterType_NoRegister();
	DARKMATTER_API UClass* Z_Construct_UClass_UCharacterType();
	DARKMATTER_API UClass* Z_Construct_UClass_UType();
	UPackage* Z_Construct_UPackage__Script_DarkMatter();
// End Cross Module References
	void UCharacterType::StaticRegisterNativesUCharacterType()
	{
	}
	UClass* Z_Construct_UClass_UCharacterType_NoRegister()
	{
		return UCharacterType::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UType,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkMatter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ICharacterType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICharacterType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterType_Statics::ClassParams = {
		&UCharacterType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCharacterType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterType, 2839600735);
	template<> DARKMATTER_API UClass* StaticClass<UCharacterType>()
	{
		return UCharacterType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterType(Z_Construct_UClass_UCharacterType, &UCharacterType::StaticClass, TEXT("/Script/DarkMatter"), TEXT("UCharacterType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
