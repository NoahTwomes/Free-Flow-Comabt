// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lighting2/ANS_PlayerTeleport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_PlayerTeleport() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	LIGHTING2_API UClass* Z_Construct_UClass_UANS_PlayerTeleport();
	LIGHTING2_API UClass* Z_Construct_UClass_UANS_PlayerTeleport_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Lighting2();
// End Cross Module References
	void UANS_PlayerTeleport::StaticRegisterNativesUANS_PlayerTeleport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_PlayerTeleport);
	UClass* Z_Construct_UClass_UANS_PlayerTeleport_NoRegister()
	{
		return UANS_PlayerTeleport::StaticClass();
	}
	struct Z_Construct_UClass_UANS_PlayerTeleport_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFinisher_MetaData[];
#endif
		static void NewProp_bIsFinisher_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFinisher;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANS_PlayerTeleport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_PlayerTeleport_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ANS_PlayerTeleport.h" },
		{ "ModuleRelativePath", "ANS_PlayerTeleport.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "ANS_PlayerTeleport" },
		{ "ModuleRelativePath", "ANS_PlayerTeleport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_PlayerTeleport, Offset), METADATA_PARAMS(Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "ANS_PlayerTeleport" },
		{ "ModuleRelativePath", "ANS_PlayerTeleport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_PlayerTeleport, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_bIsFinisher_MetaData[] = {
		{ "Category", "ANS_PlayerTeleport" },
		{ "ModuleRelativePath", "ANS_PlayerTeleport.h" },
	};
#endif
	void Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_bIsFinisher_SetBit(void* Obj)
	{
		((UANS_PlayerTeleport*)Obj)->bIsFinisher = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_bIsFinisher = { "bIsFinisher", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UANS_PlayerTeleport), &Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_bIsFinisher_SetBit, METADATA_PARAMS(Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_bIsFinisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_bIsFinisher_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_PlayerTeleport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_PlayerTeleport_Statics::NewProp_bIsFinisher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANS_PlayerTeleport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_PlayerTeleport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_PlayerTeleport_Statics::ClassParams = {
		&UANS_PlayerTeleport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UANS_PlayerTeleport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UANS_PlayerTeleport_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UANS_PlayerTeleport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_PlayerTeleport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANS_PlayerTeleport()
	{
		if (!Z_Registration_Info_UClass_UANS_PlayerTeleport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_PlayerTeleport.OuterSingleton, Z_Construct_UClass_UANS_PlayerTeleport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANS_PlayerTeleport.OuterSingleton;
	}
	template<> LIGHTING2_API UClass* StaticClass<UANS_PlayerTeleport>()
	{
		return UANS_PlayerTeleport::StaticClass();
	}
	UANS_PlayerTeleport::UANS_PlayerTeleport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_PlayerTeleport);
	UANS_PlayerTeleport::~UANS_PlayerTeleport() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_PlayerTeleport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_PlayerTeleport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANS_PlayerTeleport, UANS_PlayerTeleport::StaticClass, TEXT("UANS_PlayerTeleport"), &Z_Registration_Info_UClass_UANS_PlayerTeleport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_PlayerTeleport), 951033037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_PlayerTeleport_h_1785896542(TEXT("/Script/Lighting2"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_PlayerTeleport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_PlayerTeleport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
