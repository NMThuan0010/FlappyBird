// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlappyBird_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FlappyBird;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FlappyBird()
	{
		if (!Z_Registration_Info_UPackage__Script_FlappyBird.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FlappyBird",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEF73EE34,
				0xD741FCC0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FlappyBird.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FlappyBird.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FlappyBird(Z_Construct_UPackage__Script_FlappyBird, TEXT("/Script/FlappyBird"), Z_Registration_Info_UPackage__Script_FlappyBird, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEF73EE34, 0xD741FCC0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
