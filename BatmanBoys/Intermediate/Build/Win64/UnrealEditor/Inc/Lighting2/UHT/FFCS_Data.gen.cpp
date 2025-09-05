// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lighting2/Asset/FFCS_Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFCS_Data() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	LIGHTING2_API UClass* Z_Construct_UClass_UFFCS_Data();
	LIGHTING2_API UClass* Z_Construct_UClass_UFFCS_Data_NoRegister();
	LIGHTING2_API UEnum* Z_Construct_UEnum_Lighting2_EAIStates();
	LIGHTING2_API UEnum* Z_Construct_UEnum_Lighting2_EAttackHitDirection();
	LIGHTING2_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAttackAnimData();
	LIGHTING2_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerFinisherData();
	UPackage* Z_Construct_UPackage__Script_Lighting2();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackHitDirection;
	static UEnum* EAttackHitDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttackHitDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttackHitDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Lighting2_EAttackHitDirection, (UObject*)Z_Construct_UPackage__Script_Lighting2(), TEXT("EAttackHitDirection"));
		}
		return Z_Registration_Info_UEnum_EAttackHitDirection.OuterSingleton;
	}
	template<> LIGHTING2_API UEnum* StaticEnum<EAttackHitDirection>()
	{
		return EAttackHitDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Lighting2_EAttackHitDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Lighting2_EAttackHitDirection_Statics::Enumerators[] = {
		{ "Fwd", (int64)Fwd },
		{ "Bwd", (int64)Bwd },
		{ "Lt", (int64)Lt },
		{ "Rt", (int64)Rt },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Lighting2_EAttackHitDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bwd.DisplayName", "Backward" },
		{ "Bwd.Name", "Bwd" },
		{ "Fwd.DisplayName", "Forward" },
		{ "Fwd.Name", "Fwd" },
		{ "Lt.DisplayName", "Left" },
		{ "Lt.Name", "Lt" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
		{ "Rt.DisplayName", "Right" },
		{ "Rt.Name", "Rt" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Lighting2_EAttackHitDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Lighting2,
		nullptr,
		"EAttackHitDirection",
		"EAttackHitDirection",
		Z_Construct_UEnum_Lighting2_EAttackHitDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Lighting2_EAttackHitDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Lighting2_EAttackHitDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Lighting2_EAttackHitDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Lighting2_EAttackHitDirection()
	{
		if (!Z_Registration_Info_UEnum_EAttackHitDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackHitDirection.InnerSingleton, Z_Construct_UEnum_Lighting2_EAttackHitDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttackHitDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIStates;
	static UEnum* EAIStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Lighting2_EAIStates, (UObject*)Z_Construct_UPackage__Script_Lighting2(), TEXT("EAIStates"));
		}
		return Z_Registration_Info_UEnum_EAIStates.OuterSingleton;
	}
	template<> LIGHTING2_API UEnum* StaticEnum<EAIStates>()
	{
		return EAIStates_StaticEnum();
	}
	struct Z_Construct_UEnum_Lighting2_EAIStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Lighting2_EAIStates_Statics::Enumerators[] = {
		{ "GetInRange", (int64)GetInRange },
		{ "GetBack", (int64)GetBack },
		{ "Wait", (int64)Wait },
		{ "LookForWeapons", (int64)LookForWeapons },
		{ "Strafe", (int64)Strafe },
		{ "Attack", (int64)Attack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Lighting2_EAIStates_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "Attack" },
		{ "BlueprintType", "true" },
		{ "GetBack.Name", "GetBack" },
		{ "GetInRange.Name", "GetInRange" },
		{ "LookForWeapons.Name", "LookForWeapons" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
		{ "Strafe.Name", "Strafe" },
		{ "Wait.Name", "Wait" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Lighting2_EAIStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Lighting2,
		nullptr,
		"EAIStates",
		"EAIStates",
		Z_Construct_UEnum_Lighting2_EAIStates_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Lighting2_EAIStates_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Lighting2_EAIStates_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Lighting2_EAIStates_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Lighting2_EAIStates()
	{
		if (!Z_Registration_Info_UEnum_EAIStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIStates.InnerSingleton, Z_Construct_UEnum_Lighting2_EAIStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIStates.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerAttackAnimData;
class UScriptStruct* FPlayerAttackAnimData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerAttackAnimData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerAttackAnimData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAttackAnimData, (UObject*)Z_Construct_UPackage__Script_Lighting2(), TEXT("PlayerAttackAnimData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerAttackAnimData.OuterSingleton;
}
template<> LIGHTING2_API UScriptStruct* StaticStruct<FPlayerAttackAnimData>()
{
	return FPlayerAttackAnimData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAttackAnimData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "Category", "PlayerAttackAnimData" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerAttackAnimData, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_AttackMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "PlayerAttackAnimData" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerAttackAnimData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "PlayerAttackAnimData" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerAttackAnimData, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "PlayerAttackAnimData" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerAttackAnimData, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewProp_Damage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
		nullptr,
		&NewStructOps,
		"PlayerAttackAnimData",
		sizeof(FPlayerAttackAnimData),
		alignof(FPlayerAttackAnimData),
		Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerAttackAnimData()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerAttackAnimData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerAttackAnimData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerAttackAnimData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerFinisherData;
class UScriptStruct* FPlayerFinisherData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerFinisherData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerFinisherData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerFinisherData, (UObject*)Z_Construct_UPackage__Script_Lighting2(), TEXT("PlayerFinisherData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerFinisherData.OuterSingleton;
}
template<> LIGHTING2_API UScriptStruct* StaticStruct<FPlayerFinisherData>()
{
	return FPlayerFinisherData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerFinisherData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinisherMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FinisherMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerFinisherData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_FinisherMontage_MetaData[] = {
		{ "Category", "PlayerFinisherData" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_FinisherMontage = { "FinisherMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerFinisherData, FinisherMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_FinisherMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_FinisherMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_HitMontage_MetaData[] = {
		{ "Category", "PlayerFinisherData" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_HitMontage = { "HitMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerFinisherData, HitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_HitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_HitMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "PlayerFinisherData" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerFinisherData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "PlayerFinisherData" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerFinisherData, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "PlayerFinisherData" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerFinisherData, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_FinisherMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_HitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewProp_Damage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
		nullptr,
		&NewStructOps,
		"PlayerFinisherData",
		sizeof(FPlayerFinisherData),
		alignof(FPlayerFinisherData),
		Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerFinisherData()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerFinisherData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerFinisherData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerFinisherData.InnerSingleton;
	}
	void UFFCS_Data::StaticRegisterNativesUFFCS_Data()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFFCS_Data);
	UClass* Z_Construct_UClass_UFFCS_Data_NoRegister()
	{
		return UFFCS_Data::StaticClass();
	}
	struct Z_Construct_UClass_UFFCS_Data_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFFCS_Data_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFCS_Data_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Asset/FFCS_Data.h" },
		{ "ModuleRelativePath", "Asset/FFCS_Data.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFFCS_Data_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFFCS_Data>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFFCS_Data_Statics::ClassParams = {
		&UFFCS_Data::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFFCS_Data_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFFCS_Data_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFFCS_Data()
	{
		if (!Z_Registration_Info_UClass_UFFCS_Data.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFFCS_Data.OuterSingleton, Z_Construct_UClass_UFFCS_Data_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFFCS_Data.OuterSingleton;
	}
	template<> LIGHTING2_API UClass* StaticClass<UFFCS_Data>()
	{
		return UFFCS_Data::StaticClass();
	}
	UFFCS_Data::UFFCS_Data(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFFCS_Data);
	UFFCS_Data::~UFFCS_Data() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics::EnumInfo[] = {
		{ EAttackHitDirection_StaticEnum, TEXT("EAttackHitDirection"), &Z_Registration_Info_UEnum_EAttackHitDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1860249185U) },
		{ EAIStates_StaticEnum, TEXT("EAIStates"), &Z_Registration_Info_UEnum_EAIStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3368309358U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics::ScriptStructInfo[] = {
		{ FPlayerAttackAnimData::StaticStruct, Z_Construct_UScriptStruct_FPlayerAttackAnimData_Statics::NewStructOps, TEXT("PlayerAttackAnimData"), &Z_Registration_Info_UScriptStruct_PlayerAttackAnimData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerAttackAnimData), 1205317913U) },
		{ FPlayerFinisherData::StaticStruct, Z_Construct_UScriptStruct_FPlayerFinisherData_Statics::NewStructOps, TEXT("PlayerFinisherData"), &Z_Registration_Info_UScriptStruct_PlayerFinisherData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerFinisherData), 3054349311U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFFCS_Data, UFFCS_Data::StaticClass, TEXT("UFFCS_Data"), &Z_Registration_Info_UClass_UFFCS_Data, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFFCS_Data), 2442627187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_3259294939(TEXT("/Script/Lighting2"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_Asset_FFCS_Data_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
