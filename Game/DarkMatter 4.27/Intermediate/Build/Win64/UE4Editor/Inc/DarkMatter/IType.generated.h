// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARKMATTER_IType_generated_h
#error "IType.generated.h already included, missing '#pragma once' in IType.h"
#endif
#define DARKMATTER_IType_generated_h

#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_SPARSE_DATA
#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_RPC_WRAPPERS
#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DARKMATTER_API UType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DARKMATTER_API, UType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DARKMATTER_API UType(UType&&); \
	DARKMATTER_API UType(const UType&); \
public:


#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DARKMATTER_API UType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DARKMATTER_API UType(UType&&); \
	DARKMATTER_API UType(const UType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DARKMATTER_API, UType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UType); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UType)


#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUType(); \
	friend struct Z_Construct_UClass_UType_Statics; \
public: \
	DECLARE_CLASS(UType, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DarkMatter"), DARKMATTER_API) \
	DECLARE_SERIALIZER(UType)


#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_GENERATED_UINTERFACE_BODY() \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_GENERATED_UINTERFACE_BODY() \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IType() {} \
public: \
	typedef UType UClassType; \
	typedef IType ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DarkMatter_4_27_Source_DarkMatter_IType_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IType() {} \
public: \
	typedef UType UClassType; \
	typedef IType ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DarkMatter_4_27_Source_DarkMatter_IType_h_9_PROLOG
#define DarkMatter_4_27_Source_DarkMatter_IType_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_SPARSE_DATA \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_RPC_WRAPPERS \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DarkMatter_4_27_Source_DarkMatter_IType_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_SPARSE_DATA \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DarkMatter_4_27_Source_DarkMatter_IType_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARKMATTER_API UClass* StaticClass<class UType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DarkMatter_4_27_Source_DarkMatter_IType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
