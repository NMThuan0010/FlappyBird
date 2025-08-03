// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BirdCharacter.h"

#ifdef FLAPPYBIRD_BirdCharacter_generated_h
#error "BirdCharacter.generated.h already included, missing '#pragma once' in BirdCharacter.h"
#endif
#define FLAPPYBIRD_BirdCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABirdCharacter ***********************************************************
#define FID_FlappyBird_Source_FlappyBird_BirdCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlap);


FLAPPYBIRD_API UClass* Z_Construct_UClass_ABirdCharacter_NoRegister();

#define FID_FlappyBird_Source_FlappyBird_BirdCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABirdCharacter(); \
	friend struct Z_Construct_UClass_ABirdCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FLAPPYBIRD_API UClass* Z_Construct_UClass_ABirdCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ABirdCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlappyBird"), Z_Construct_UClass_ABirdCharacter_NoRegister) \
	DECLARE_SERIALIZER(ABirdCharacter)


#define FID_FlappyBird_Source_FlappyBird_BirdCharacter_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABirdCharacter(ABirdCharacter&&) = delete; \
	ABirdCharacter(const ABirdCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABirdCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABirdCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABirdCharacter) \
	NO_API virtual ~ABirdCharacter();


#define FID_FlappyBird_Source_FlappyBird_BirdCharacter_h_13_PROLOG
#define FID_FlappyBird_Source_FlappyBird_BirdCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FlappyBird_Source_FlappyBird_BirdCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FlappyBird_Source_FlappyBird_BirdCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_FlappyBird_Source_FlappyBird_BirdCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABirdCharacter;

// ********** End Class ABirdCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FlappyBird_Source_FlappyBird_BirdCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
