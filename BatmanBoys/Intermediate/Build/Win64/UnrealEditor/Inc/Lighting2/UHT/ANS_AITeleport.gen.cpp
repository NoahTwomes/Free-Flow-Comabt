// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lighting2/ANS_AITeleport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_AITeleport() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	LIGHTING2_API UClass* Z_Construct_UClass_UANS_AITeleport();
	LIGHTING2_API UClass* Z_Construct_UClass_UANS_AITeleport_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Lighting2();
// End Cross Module References
	void UANS_AITeleport::StaticRegisterNativesUANS_AITeleport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_AITeleport);
	UClass* Z_Construct_UClass_UANS_AITeleport_NoRegister()
	{
		return UANS_AITeleport::StaticClass();
	}
	struct Z_Construct_UClass_UANS_AITeleport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANS_AITeleport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AITeleport_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ANS_AITeleport.h" },
		{ "ModuleRelativePath", "ANS_AITeleport.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "ANS_AITeleport" },
		{ "ModuleRelativePath", "ANS_AITeleport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_AITeleport, Offset), METADATA_PARAMS(Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "ANS_AITeleport" },
		{ "ModuleRelativePath", "ANS_AITeleport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_AITeleport, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_InterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_AITeleport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AITeleport_Statics::NewProp_InterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANS_AITeleport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_AITeleport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_AITeleport_Statics::ClassParams = {
		&UANS_AITeleport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UANS_AITeleport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AITeleport_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UANS_AITeleport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AITeleport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANS_AITeleport()
	{
		if (!Z_Registration_Info_UClass_UANS_AITeleport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_AITeleport.OuterSingleton, Z_Construct_UClass_UANS_AITeleport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANS_AITeleport.OuterSingleton;
	}
	template<> LIGHTING2_API UClass* StaticClass<UANS_AITeleport>()
	{
		return UANS_AITeleport::StaticClass();
	}
	UANS_AITeleport::UANS_AITeleport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_AITeleport);
	UANS_AITeleport::~UANS_AITeleport() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AITeleport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AITeleport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANS_AITeleport, UANS_AITeleport::StaticClass, TEXT("UANS_AITeleport"), &Z_Registration_Info_UClass_UANS_AITeleport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_AITeleport), 372645462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AITeleport_h_3189993994(TEXT("/Script/Lighting2"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AITeleport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AITeleport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
