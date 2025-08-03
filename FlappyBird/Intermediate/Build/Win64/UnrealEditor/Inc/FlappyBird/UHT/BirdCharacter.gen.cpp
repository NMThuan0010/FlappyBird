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
FLAPPYBIRD_API UClass* Z_Construct_UClass_ABirdCharacter();
FLAPPYBIRD_API UClass* Z_Construct_UClass_ABirdCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_FlappyBird();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABirdCharacter ***********************************************************
void ABirdCharacter::StaticRegisterNativesABirdCharacter()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABirdCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ABirdCharacter, ABirdCharacter::StaticClass, TEXT("ABirdCharacter"), &Z_Registration_Info_UClass_ABirdCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABirdCharacter), 3345912632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FlappyBird_Source_FlappyBird_BirdCharacter_h__Script_FlappyBird_1017499554(TEXT("/Script/FlappyBird"),
	Z_CompiledInDeferFile_FID_FlappyBird_Source_FlappyBird_BirdCharacter_h__Script_FlappyBird_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FlappyBird_Source_FlappyBird_BirdCharacter_h__Script_FlappyBird_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
