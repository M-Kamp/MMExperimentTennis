// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TENNISGAME_MyLogger_generated_h
#error "MyLogger.generated.h already included, missing '#pragma once' in MyLogger.h"
#endif
#define TENNISGAME_MyLogger_generated_h

#define TennisGame_Source_TennisGame_Public_MyLogger_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAppendTextFile) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AppendTextFile(Z_Param_Text,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitilizeCSVTextFile) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitilizeCSVTextFile(Z_Param_Text,Z_Param_FileName); \
		P_NATIVE_END; \
	}


#define TennisGame_Source_TennisGame_Public_MyLogger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAppendTextFile) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AppendTextFile(Z_Param_Text,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitilizeCSVTextFile) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitilizeCSVTextFile(Z_Param_Text,Z_Param_FileName); \
		P_NATIVE_END; \
	}


#define TennisGame_Source_TennisGame_Public_MyLogger_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyLogger(); \
	friend struct Z_Construct_UClass_AMyLogger_Statics; \
public: \
	DECLARE_CLASS(AMyLogger, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TennisGame"), NO_API) \
	DECLARE_SERIALIZER(AMyLogger)


#define TennisGame_Source_TennisGame_Public_MyLogger_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyLogger(); \
	friend struct Z_Construct_UClass_AMyLogger_Statics; \
public: \
	DECLARE_CLASS(AMyLogger, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TennisGame"), NO_API) \
	DECLARE_SERIALIZER(AMyLogger)


#define TennisGame_Source_TennisGame_Public_MyLogger_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyLogger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyLogger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyLogger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyLogger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyLogger(AMyLogger&&); \
	NO_API AMyLogger(const AMyLogger&); \
public:


#define TennisGame_Source_TennisGame_Public_MyLogger_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyLogger(AMyLogger&&); \
	NO_API AMyLogger(const AMyLogger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyLogger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyLogger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyLogger)


#define TennisGame_Source_TennisGame_Public_MyLogger_h_12_PRIVATE_PROPERTY_OFFSET
#define TennisGame_Source_TennisGame_Public_MyLogger_h_9_PROLOG
#define TennisGame_Source_TennisGame_Public_MyLogger_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TennisGame_Source_TennisGame_Public_MyLogger_h_12_PRIVATE_PROPERTY_OFFSET \
	TennisGame_Source_TennisGame_Public_MyLogger_h_12_RPC_WRAPPERS \
	TennisGame_Source_TennisGame_Public_MyLogger_h_12_INCLASS \
	TennisGame_Source_TennisGame_Public_MyLogger_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TennisGame_Source_TennisGame_Public_MyLogger_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TennisGame_Source_TennisGame_Public_MyLogger_h_12_PRIVATE_PROPERTY_OFFSET \
	TennisGame_Source_TennisGame_Public_MyLogger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TennisGame_Source_TennisGame_Public_MyLogger_h_12_INCLASS_NO_PURE_DECLS \
	TennisGame_Source_TennisGame_Public_MyLogger_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TENNISGAME_API UClass* StaticClass<class AMyLogger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TennisGame_Source_TennisGame_Public_MyLogger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
