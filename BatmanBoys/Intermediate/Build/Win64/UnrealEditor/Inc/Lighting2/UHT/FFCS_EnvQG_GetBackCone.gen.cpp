// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lighting2/EQS/FFCS_EnvQG_GetBackCone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFCS_EnvQG_GetBackCone() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone();
	LIGHTING2_API UClass* Z_Construct_UClass_UFFCS_EnvQG_GetBackCone();
	LIGHTING2_API UClass* Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Lighting2();
// End Cross Module References
	void UFFCS_EnvQG_GetBackCone::StaticRegisterNativesUFFCS_EnvQG_GetBackCone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFFCS_EnvQG_GetBackCone);
	UClass* Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_NoRegister()
	{
		return UFFCS_EnvQG_GetBackCone::StaticClass();
	}
	struct Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_Cone,
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EQS/FFCS_EnvQG_GetBackCone.h" },
		{ "ModuleRelativePath", "EQS/FFCS_EnvQG_GetBackCone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFFCS_EnvQG_GetBackCone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_Statics::ClassParams = {
		&UFFCS_EnvQG_GetBackCone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFFCS_EnvQG_GetBackCone()
	{
		if (!Z_Registration_Info_UClass_UFFCS_EnvQG_GetBackCone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFFCS_EnvQG_GetBackCone.OuterSingleton, Z_Construct_UClass_UFFCS_EnvQG_GetBackCone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFFCS_EnvQG_GetBackCone.OuterSingleton;
	}
	template<> LIGHTING2_API UClass* StaticClass<UFFCS_EnvQG_GetBackCone>()
	{
		return UFFCS_EnvQG_GetBackCone::StaticClass();
	}
	UFFCS_EnvQG_GetBackCone::UFFCS_EnvQG_GetBackCone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFFCS_EnvQG_GetBackCone);
	UFFCS_EnvQG_GetBackCone::~UFFCS_EnvQG_GetBackCone() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_EQS_FFCS_EnvQG_GetBackCone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_EQS_FFCS_EnvQG_GetBackCone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFFCS_EnvQG_GetBackCone, UFFCS_EnvQG_GetBackCone::StaticClass, TEXT("UFFCS_EnvQG_GetBackCone"), &Z_Registration_Info_UClass_UFFCS_EnvQG_GetBackCone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFFCS_EnvQG_GetBackCone), 1945267577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_EQS_FFCS_EnvQG_GetBackCone_h_785944196(TEXT("/Script/Lighting2"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_EQS_FFCS_EnvQG_GetBackCone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_EQS_FFCS_EnvQG_GetBackCone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
