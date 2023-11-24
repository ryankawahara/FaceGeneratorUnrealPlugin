// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepluginTest2_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_pluginTest2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_pluginTest2()
	{
		if (!Z_Registration_Info_UPackage__Script_pluginTest2.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/pluginTest2",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1B9283B0,
				0x54D85D8C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_pluginTest2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_pluginTest2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_pluginTest2(Z_Construct_UPackage__Script_pluginTest2, TEXT("/Script/pluginTest2"), Z_Registration_Info_UPackage__Script_pluginTest2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1B9283B0, 0x54D85D8C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
