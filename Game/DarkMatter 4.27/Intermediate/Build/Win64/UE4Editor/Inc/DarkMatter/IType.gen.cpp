// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkMatter/IType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIType() {}
// Cross Module References
	DARKMATTER_API UClass* Z_Construct_UClass_UType_NoRegister();
	DARKMATTER_API UClass* Z_Construct_UClass_UType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DarkMatter();
// End Cross Module References
	void UType::StaticRegisterNativesUType()
	{
	}
	UClass* Z_Construct_UClass_UType_NoRegister()
	{
		return UType::StaticClass();
	}
	struct Z_Construct_UClass_UType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkMatter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "IType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UType_Statics::ClassParams = {
		&UType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UType, 3205696039);
	template<> DARKMATTER_API UClass* StaticClass<UType>()
	{
		return UType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UType(Z_Construct_UClass_UType, &UType::StaticClass, TEXT("/Script/DarkMatter"), TEXT("UType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
