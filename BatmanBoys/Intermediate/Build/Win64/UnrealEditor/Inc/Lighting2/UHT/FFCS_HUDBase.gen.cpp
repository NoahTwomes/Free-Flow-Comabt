// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lighting2/HUD/FFCS_HUDBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFCS_HUDBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	LIGHTING2_API UClass* Z_Construct_UClass_AFFCS_HUDBase();
	LIGHTING2_API UClass* Z_Construct_UClass_AFFCS_HUDBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Lighting2();
// End Cross Module References
	static FName NAME_AFFCS_HUDBase_SetupHUD = FName(TEXT("SetupHUD"));
	void AFFCS_HUDBase::SetupHUD()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFFCS_HUDBase_SetupHUD),NULL);
	}
	void AFFCS_HUDBase::StaticRegisterNativesAFFCS_HUDBase()
	{
	}
	struct Z_Construct_UFunction_AFFCS_HUDBase_SetupHUD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFFCS_HUDBase_SetupHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "HUD/FFCS_HUDBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFCS_HUDBase_SetupHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFFCS_HUDBase, nullptr, "SetupHUD", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFFCS_HUDBase_SetupHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCS_HUDBase_SetupHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFFCS_HUDBase_SetupHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFCS_HUDBase_SetupHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFFCS_HUDBase);
	UClass* Z_Construct_UClass_AFFCS_HUDBase_NoRegister()
	{
		return AFFCS_HUDBase::StaticClass();
	}
	struct Z_Construct_UClass_AFFCS_HUDBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFFCS_HUDBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFFCS_HUDBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFFCS_HUDBase_SetupHUD, "SetupHUD" }, // 2950196766
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFFCS_HUDBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/FFCS_HUDBase.h" },
		{ "ModuleRelativePath", "HUD/FFCS_HUDBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFFCS_HUDBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFFCS_HUDBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFFCS_HUDBase_Statics::ClassParams = {
		&AFFCS_HUDBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFFCS_HUDBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFFCS_HUDBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFFCS_HUDBase()
	{
		if (!Z_Registration_Info_UClass_AFFCS_HUDBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFFCS_HUDBase.OuterSingleton, Z_Construct_UClass_AFFCS_HUDBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFFCS_HUDBase.OuterSingleton;
	}
	template<> LIGHTING2_API UClass* StaticClass<AFFCS_HUDBase>()
	{
		return AFFCS_HUDBase::StaticClass();
	}
	AFFCS_HUDBase::AFFCS_HUDBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFFCS_HUDBase);
	AFFCS_HUDBase::~AFFCS_HUDBase() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_HUD_FFCS_HUDBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_HUD_FFCS_HUDBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFFCS_HUDBase, AFFCS_HUDBase::StaticClass, TEXT("AFFCS_HUDBase"), &Z_Registration_Info_UClass_AFFCS_HUDBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFCS_HUDBase), 2929783595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_HUD_FFCS_HUDBase_h_4191805646(TEXT("/Script/Lighting2"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_HUD_FFCS_HUDBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_HUD_FFCS_HUDBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
