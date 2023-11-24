// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pluginTest2/Public/CustomSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PLUGINTEST2_API UClass* Z_Construct_UClass_UCustomSettings();
	PLUGINTEST2_API UClass* Z_Construct_UClass_UCustomSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_pluginTest2();
// End Cross Module References
	DEFINE_FUNCTION(UCustomSettings::execGetCustomMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetCustomMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomSettings::execPrintHelloToConsole)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintHelloToConsole();
		P_NATIVE_END;
	}
	void UCustomSettings::StaticRegisterNativesUCustomSettings()
	{
		UClass* Class = UCustomSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomMesh", &UCustomSettings::execGetCustomMesh },
			{ "PrintHelloToConsole", &UCustomSettings::execPrintHelloToConsole },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics
	{
		struct CustomSettings_eventGetCustomMesh_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSettings_eventGetCustomMesh_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Settings" },
		{ "Comment", "// Getter function to access the private CustomMesh variable\n" },
		{ "ModuleRelativePath", "Public/CustomSettings.h" },
		{ "ToolTip", "Getter function to access the private CustomMesh variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomSettings, nullptr, "GetCustomMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::CustomSettings_eventGetCustomMesh_Parms), Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomSettings_GetCustomMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomSettings_GetCustomMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomSettings_PrintHelloToConsole_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSettings_PrintHelloToConsole_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Custom Settings" },
		{ "Comment", "//    UPROPERTY(EditAnywhere, Category = \"Other Settings\")\n//    bool CustomBool;\n" },
		{ "ModuleRelativePath", "Public/CustomSettings.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Other Settings\")\nbool CustomBool;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomSettings_PrintHelloToConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomSettings, nullptr, "PrintHelloToConsole", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomSettings_PrintHelloToConsole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSettings_PrintHelloToConsole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomSettings_PrintHelloToConsole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomSettings_PrintHelloToConsole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomSettings);
	UClass* Z_Construct_UClass_UCustomSettings_NoRegister()
	{
		return UCustomSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCustomSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputFaceImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputFaceImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_pluginTest2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomSettings_GetCustomMesh, "GetCustomMesh" }, // 1768807929
		{ &Z_Construct_UFunction_UCustomSettings_PrintHelloToConsole, "PrintHelloToConsole" }, // 2104436979
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomSettings.h" },
		{ "ModuleRelativePath", "Public/CustomSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomSettings_Statics::NewProp_InputFaceImage_MetaData[] = {
		{ "Category", "Custom Settings" },
		{ "ModuleRelativePath", "Public/CustomSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomSettings_Statics::NewProp_InputFaceImage = { "InputFaceImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomSettings, InputFaceImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomSettings_Statics::NewProp_InputFaceImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSettings_Statics::NewProp_InputFaceImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomSettings_Statics::NewProp_InputFaceImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomSettings_Statics::ClassParams = {
		&UCustomSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomSettings()
	{
		if (!Z_Registration_Info_UClass_UCustomSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomSettings.OuterSingleton, Z_Construct_UClass_UCustomSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomSettings.OuterSingleton;
	}
	template<> PLUGINTEST2_API UClass* StaticClass<UCustomSettings>()
	{
		return UCustomSettings::StaticClass();
	}
	UCustomSettings::UCustomSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomSettings);
	UCustomSettings::~UCustomSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_ryryk_Documents_Unreal_Projects_MyProject5_Plugins_pluginTest2_Source_pluginTest2_Public_CustomSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ryryk_Documents_Unreal_Projects_MyProject5_Plugins_pluginTest2_Source_pluginTest2_Public_CustomSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomSettings, UCustomSettings::StaticClass, TEXT("UCustomSettings"), &Z_Registration_Info_UClass_UCustomSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomSettings), 1375945001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ryryk_Documents_Unreal_Projects_MyProject5_Plugins_pluginTest2_Source_pluginTest2_Public_CustomSettings_h_2979381612(TEXT("/Script/pluginTest2"),
		Z_CompiledInDeferFile_FID_Users_ryryk_Documents_Unreal_Projects_MyProject5_Plugins_pluginTest2_Source_pluginTest2_Public_CustomSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ryryk_Documents_Unreal_Projects_MyProject5_Plugins_pluginTest2_Source_pluginTest2_Public_CustomSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
