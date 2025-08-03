// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlappyBird/BirdCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBirdCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FLAPPYBIRD_API UClass* Z_Construct_UClass_ABirdCharacter();
FLAPPYBIRD_API UClass* Z_Construct_UClass_ABirdCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_FlappyBird();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABirdCharacter Function Flap *********************************************
struct Z_Construct_UFunction_ABirdCharacter_Flap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BirdCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABirdCharacter_Flap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABirdCharacter, nullptr, "Flap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABirdCharacter_Flap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABirdCharacter_Flap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABirdCharacter_Flap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABirdCharacter_Flap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABirdCharacter::execFlap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Flap();
	P_NATIVE_END;
}
// ********** End Class ABirdCharacter Function Flap ***********************************************

// ********** Begin Class ABirdCharacter ***********************************************************
void ABirdCharacter::StaticRegisterNativesABirdCharacter()
{
	UClass* Class = ABirdCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Flap", &ABirdCharacter::execFlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABirdCharacter;
UClass* ABirdCharacter::GetPrivateStaticClass()
{
	using TClass = ABirdCharacter;
	if (!Z_Registration_Info_UClass_ABirdCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BirdCharacter"),
			Z_Registration_Info_UClass_ABirdCharacter.InnerSingleton,
			StaticRegisterNativesABirdCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABirdCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ABirdCharacter_NoRegister()
{
	return ABirdCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABirdCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BirdCharacter.h" },
		{ "ModuleRelativePath", "BirdCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlapMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BirdCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlapAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BirdCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[] = {
		{ "Category", "BirdCharacter" },
		{ "ModuleRelativePath", "BirdCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlapMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlapAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABirdCharacter_Flap, "Flap" }, // 157839129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABirdCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABirdCharacter_Statics::NewProp_FlapMappingContext = { "FlapMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABirdCharacter, FlapMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlapMappingContext_MetaData), NewProp_FlapMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABirdCharacter_Statics::NewProp_FlapAction = { "FlapAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABirdCharacter, FlapAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlapAction_MetaData), NewProp_FlapAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirdCharacter_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABirdCharacter, JumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpForce_MetaData), NewProp_JumpForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABirdCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdCharacter_Statics::NewProp_FlapMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdCharacter_Statics::NewProp_FlapAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirdCharacter_Statics::NewProp_JumpForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABirdCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABirdCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FlappyBird,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABirdCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABirdCharacter_Statics::ClassParams = {
	&ABirdCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABirdCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABirdCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABirdCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABirdCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABirdCharacter()
{
	if (!Z_Registration_Info_UClass_ABirdCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABirdCharacter.OuterSingleton, Z_Construct_UClass_ABirdCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABirdCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABirdCharacter);
ABirdCharacter::~ABirdCharacter() {}
// ********** End Class ABirdCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FlappyBird_Source_FlappyBird_BirdCharacter_h__Script_FlappyBird_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABirdCharacter, ABirdCharacter::StaticClass, TEXT("ABirdCharacter"), &Z_Registration_Info_UClass_ABirdCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABirdCharacter), 858452156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FlappyBird_Source_FlappyBird_BirdCharacter_h__Script_FlappyBird_3732951038(TEXT("/Script/FlappyBird"),
	Z_CompiledInDeferFile_FID_FlappyBird_Source_FlappyBird_BirdCharacter_h__Script_FlappyBird_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FlappyBird_Source_FlappyBird_BirdCharacter_h__Script_FlappyBird_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
