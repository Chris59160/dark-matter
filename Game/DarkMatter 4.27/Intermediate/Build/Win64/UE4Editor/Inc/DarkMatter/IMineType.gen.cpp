// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkMatter/IMineType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMineType() {}
// Cross Module References
	DARKMATTER_API UClass* Z_Construct_UClass_UMineType_NoRegister();
	DARKMATTER_API UClass* Z_Construct_UClass_UMineType();
	DARKMATTER_API UClass* Z_Construct_UClass_UType();
	UPackage* Z_Construct_UPackage__Script_DarkMatter();
// End Cross Module References
	void UMineType::StaticRegisterNativesUMineType()
	{
	}
	UClass* Z_Construct_UClass_UMineType_NoRegister()
	{
		return UMineType::StaticClass();
	}
	struct Z_Construct_UClass_UMineType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMineType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UType,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkMatter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMineType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "IMineType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMineType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMineType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMineType_Statics::ClassParams = {
		&UMineType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMineType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMineType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMineType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMineType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMineType, 282543313);
	template<> DARKMATTER_API UClass* StaticClass<UMineType>()
	{
		return UMineType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMineType(Z_Construct_UClass_UMineType, &UMineType::StaticClass, TEXT("/Script/DarkMatter"), TEXT("UMineType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMineType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
