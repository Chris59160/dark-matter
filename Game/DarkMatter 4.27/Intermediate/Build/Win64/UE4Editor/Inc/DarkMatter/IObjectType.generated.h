// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARKMATTER_IObjectType_generated_h
#error "IObjectType.generated.h already included, missing '#pragma once' in IObjectType.h"
#endif
#define DARKMATTER_IObjectType_generated_h

#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_SPARSE_DATA
#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_RPC_WRAPPERS
#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DARKMATTER_API UObjectType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DARKMATTER_API, UObjectType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DARKMATTER_API UObjectType(UObjectType&&); \
	DARKMATTER_API UObjectType(const UObjectType&); \
public:


#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DARKMATTER_API UObjectType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DARKMATTER_API UObjectType(UObjectType&&); \
	DARKMATTER_API UObjectType(const UObjectType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DARKMATTER_API, UObjectType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectType); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectType)


#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObjectType(); \
	friend struct Z_Construct_UClass_UObjectType_Statics; \
public: \
	DECLARE_CLASS(UObjectType, UType, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DarkMatter"), DARKMATTER_API) \
	DECLARE_SERIALIZER(UObjectType)


#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_GENERATED_UINTERFACE_BODY() \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_GENERATED_UINTERFACE_BODY() \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObjectType() {} \
public: \
	typedef UObjectType UClassType; \
	typedef IObjectType ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IObjectType() {} \
public: \
	typedef UObjectType UClassType; \
	typedef IObjectType ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_11_PROLOG
#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_SPARSE_DATA \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_RPC_WRAPPERS \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DarkMatter_4_27_Source_DarkMatter_IObjectType_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_SPARSE_DATA \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DarkMatter_4_27_Source_DarkMatter_IObjectType_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARKMATTER_API UClass* StaticClass<class UObjectType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DarkMatter_4_27_Source_DarkMatter_IObjectType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
