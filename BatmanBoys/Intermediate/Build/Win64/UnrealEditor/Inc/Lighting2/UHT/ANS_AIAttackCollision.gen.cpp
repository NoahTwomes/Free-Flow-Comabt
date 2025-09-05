// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lighting2/ANS_AIAttackCollision.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_AIAttackCollision() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LIGHTING2_API UClass* Z_Construct_UClass_UANS_AIAttackCollision();
	LIGHTING2_API UClass* Z_Construct_UClass_UANS_AIAttackCollision_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Lighting2();
// End Cross Module References
	DEFINE_FUNCTION(UANS_AIAttackCollision::execDoCollisionCheck)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoCollisionCheck(Z_Param_MeshComp);
		P_NATIVE_END;
	}
	void UANS_AIAttackCollision::StaticRegisterNativesUANS_AIAttackCollision()
	{
		UClass* Class = UANS_AIAttackCollision::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoCollisionCheck", &UANS_AIAttackCollision::execDoCollisionCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics
	{
		struct ANS_AIAttackCollision_eventDoCollisionCheck_Parms
		{
			USkeletalMeshComponent* MeshComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANS_AIAttackCollision_eventDoCollisionCheck_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::NewProp_MeshComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UANS_AIAttackCollision, nullptr, "DoCollisionCheck", nullptr, nullptr, sizeof(Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::ANS_AIAttackCollision_eventDoCollisionCheck_Parms), Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_AIAttackCollision);
	UClass* Z_Construct_UClass_UANS_AIAttackCollision_NoRegister()
	{
		return UANS_AIAttackCollision::StaticClass();
	}
	struct Z_Construct_UClass_UANS_AIAttackCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoAttackOnce_MetaData[];
#endif
		static void NewProp_DoAttackOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoAttackOnce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCollisionExclusionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitCollisionExclusionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinisherTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinisherTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackOnceTrigger_MetaData[];
#endif
		static void NewProp_AttackOnceTrigger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttackOnceTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static void NewProp_Debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UANS_AIAttackCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UANS_AIAttackCollision_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UANS_AIAttackCollision_DoCollisionCheck, "DoCollisionCheck" }, // 1581899948
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AIAttackCollision_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ANS_AIAttackCollision.h" },
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_DoAttackOnce_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
	void Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_DoAttackOnce_SetBit(void* Obj)
	{
		((UANS_AIAttackCollision*)Obj)->DoAttackOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_DoAttackOnce = { "DoAttackOnce", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UANS_AIAttackCollision), &Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_DoAttackOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_DoAttackOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_DoAttackOnce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_AIAttackCollision, Radius), METADATA_PARAMS(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_StartSocket_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_StartSocket = { "StartSocket", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_AIAttackCollision, StartSocket), METADATA_PARAMS(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_StartSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_StartSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_EndSocket_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_EndSocket = { "EndSocket", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_AIAttackCollision, EndSocket), METADATA_PARAMS(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_EndSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_EndSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_HitCollisionExclusionTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_HitCollisionExclusionTag = { "HitCollisionExclusionTag", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_AIAttackCollision, HitCollisionExclusionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_HitCollisionExclusionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_HitCollisionExclusionTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_FinisherTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_FinisherTag = { "FinisherTag", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UANS_AIAttackCollision, FinisherTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_FinisherTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_FinisherTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_AttackOnceTrigger_MetaData[] = {
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
	void Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_AttackOnceTrigger_SetBit(void* Obj)
	{
		((UANS_AIAttackCollision*)Obj)->AttackOnceTrigger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_AttackOnceTrigger = { "AttackOnceTrigger", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UANS_AIAttackCollision), &Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_AttackOnceTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_AttackOnceTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_AttackOnceTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Debug_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "ANS_AIAttackCollision.h" },
	};
#endif
	void Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Debug_SetBit(void* Obj)
	{
		((UANS_AIAttackCollision*)Obj)->Debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0040000000000811, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UANS_AIAttackCollision), &Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Debug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Debug_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_AIAttackCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_DoAttackOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_StartSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_EndSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_HitCollisionExclusionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_FinisherTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_AttackOnceTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_AIAttackCollision_Statics::NewProp_Debug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UANS_AIAttackCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_AIAttackCollision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_AIAttackCollision_Statics::ClassParams = {
		&UANS_AIAttackCollision::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UANS_AIAttackCollision_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UANS_AIAttackCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UANS_AIAttackCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UANS_AIAttackCollision()
	{
		if (!Z_Registration_Info_UClass_UANS_AIAttackCollision.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_AIAttackCollision.OuterSingleton, Z_Construct_UClass_UANS_AIAttackCollision_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UANS_AIAttackCollision.OuterSingleton;
	}
	template<> LIGHTING2_API UClass* StaticClass<UANS_AIAttackCollision>()
	{
		return UANS_AIAttackCollision::StaticClass();
	}
	UANS_AIAttackCollision::UANS_AIAttackCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_AIAttackCollision);
	UANS_AIAttackCollision::~UANS_AIAttackCollision() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AIAttackCollision_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AIAttackCollision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UANS_AIAttackCollision, UANS_AIAttackCollision::StaticClass, TEXT("UANS_AIAttackCollision"), &Z_Registration_Info_UClass_UANS_AIAttackCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_AIAttackCollision), 314678249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AIAttackCollision_h_3059036109(TEXT("/Script/Lighting2"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AIAttackCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ANS_AIAttackCollision_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
