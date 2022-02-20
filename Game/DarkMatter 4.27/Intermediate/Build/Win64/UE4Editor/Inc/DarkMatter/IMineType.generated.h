// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARKMATTER_IMineType_generated_h
#error "IMineType.generated.h already included, missing '#pragma once' in IMineType.h"
#endif
#define DARKMATTER_IMineType_generated_h

#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_SPARSE_DATA
#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_RPC_WRAPPERS
#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DARKMATTER_API UMineType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMineType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DARKMATTER_API, UMineType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMineType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DARKMATTER_API UMineType(UMineType&&); \
	DARKMATTER_API UMineType(const UMineType&); \
public:


#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DARKMATTER_API UMineType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DARKMATTER_API UMineType(UMineType&&); \
	DARKMATTER_API UMineType(const UMineType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DARKMATTER_API, UMineType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMineType); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMineType)


#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMineType(); \
	friend struct Z_Construct_UClass_UMineType_Statics; \
public: \
	DECLARE_CLASS(UMineType, UType, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DarkMatter"), DARKMATTER_API) \
	DECLARE_SERIALIZER(UMineType)


#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_GENERATED_UINTERFACE_BODY() \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_GENERATED_UINTERFACE_BODY() \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMineType() {} \
public: \
	typedef UMineType UClassType; \
	typedef IMineType ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IMineType() {} \
public: \
	typedef UMineType UClassType; \
	typedef IMineType ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_7_PROLOG
#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_SPARSE_DATA \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_RPC_WRAPPERS \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DarkMatter_4_27_Source_DarkMatter_IMineType_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_SPARSE_DATA \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DarkMatter_4_27_Source_DarkMatter_IMineType_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARKMATTER_API UClass* StaticClass<class UMineType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DarkMatter_4_27_Source_DarkMatter_IMineType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
