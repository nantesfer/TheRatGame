// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THERATGAME_TheRatGameCharacter_generated_h
#error "TheRatGameCharacter.generated.h already included, missing '#pragma once' in TheRatGameCharacter.h"
#endif
#define THERATGAME_TheRatGameCharacter_generated_h

#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_SPARSE_DATA
#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_RPC_WRAPPERS
#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheRatGameCharacter(); \
	friend struct Z_Construct_UClass_ATheRatGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ATheRatGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheRatGame"), NO_API) \
	DECLARE_SERIALIZER(ATheRatGameCharacter)


#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATheRatGameCharacter(); \
	friend struct Z_Construct_UClass_ATheRatGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ATheRatGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheRatGame"), NO_API) \
	DECLARE_SERIALIZER(ATheRatGameCharacter)


#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheRatGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheRatGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheRatGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheRatGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheRatGameCharacter(ATheRatGameCharacter&&); \
	NO_API ATheRatGameCharacter(const ATheRatGameCharacter&); \
public:


#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheRatGameCharacter(ATheRatGameCharacter&&); \
	NO_API ATheRatGameCharacter(const ATheRatGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheRatGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheRatGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheRatGameCharacter)


#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATheRatGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATheRatGameCharacter, FollowCamera); }


#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_9_PROLOG
#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_SPARSE_DATA \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_RPC_WRAPPERS \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_INCLASS \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_SPARSE_DATA \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TheRatGame_Source_TheRatGame_TheRatGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THERATGAME_API UClass* StaticClass<class ATheRatGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheRatGame_Source_TheRatGame_TheRatGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
