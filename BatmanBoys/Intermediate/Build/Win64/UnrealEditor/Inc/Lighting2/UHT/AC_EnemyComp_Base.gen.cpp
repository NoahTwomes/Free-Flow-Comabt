// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lighting2/ActorComponent/AC_EnemyComp_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_EnemyComp_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LIGHTING2_API UClass* Z_Construct_UClass_UAC_EnemyComp_Base();
	LIGHTING2_API UClass* Z_Construct_UClass_UAC_EnemyComp_Base_NoRegister();
	LIGHTING2_API UEnum* Z_Construct_UEnum_Lighting2_EAttackHitDirection();
	UPackage* Z_Construct_UPackage__Script_Lighting2();
// End Cross Module References
	struct AC_EnemyComp_Base_eventGetAttackPlayer_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AC_EnemyComp_Base_eventGetAttackPlayer_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct AC_EnemyComp_Base_eventGetCurrentHealth_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		AC_EnemyComp_Base_eventGetCurrentHealth_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct AC_EnemyComp_Base_eventGetEnemyDead_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AC_EnemyComp_Base_eventGetEnemyDead_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct AC_EnemyComp_Base_eventGetMaxHealth_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		AC_EnemyComp_Base_eventGetMaxHealth_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct AC_EnemyComp_Base_eventHitDirection_Parms
	{
		AActor* Instigator;
		TEnumAsByte<EAttackHitDirection> ReturnValue;

		/** Constructor, initializes return property only **/
		AC_EnemyComp_Base_eventHitDirection_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct AC_EnemyComp_Base_eventSetAttackPlayer_Parms
	{
		bool AttackPlayer;
	};
	struct AC_EnemyComp_Base_eventSetCurrentHealth_Parms
	{
		float Damage;
	};
	struct AC_EnemyComp_Base_eventSetEnemyDead_Parms
	{
		bool ActorDead;
	};
	static FName NAME_UAC_EnemyComp_Base_GetAttackPlayer = FName(TEXT("GetAttackPlayer"));
	bool UAC_EnemyComp_Base::GetAttackPlayer()
	{
		AC_EnemyComp_Base_eventGetAttackPlayer_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAC_EnemyComp_Base_GetAttackPlayer),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAC_EnemyComp_Base_GetCurrentHealth = FName(TEXT("GetCurrentHealth"));
	float UAC_EnemyComp_Base::GetCurrentHealth()
	{
		AC_EnemyComp_Base_eventGetCurrentHealth_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAC_EnemyComp_Base_GetCurrentHealth),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAC_EnemyComp_Base_GetEnemyDead = FName(TEXT("GetEnemyDead"));
	bool UAC_EnemyComp_Base::GetEnemyDead()
	{
		AC_EnemyComp_Base_eventGetEnemyDead_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAC_EnemyComp_Base_GetEnemyDead),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAC_EnemyComp_Base_GetMaxHealth = FName(TEXT("GetMaxHealth"));
	float UAC_EnemyComp_Base::GetMaxHealth()
	{
		AC_EnemyComp_Base_eventGetMaxHealth_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAC_EnemyComp_Base_GetMaxHealth),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAC_EnemyComp_Base_HitDirection = FName(TEXT("HitDirection"));
	EAttackHitDirection UAC_EnemyComp_Base::HitDirection(AActor* Instigator)
	{
		AC_EnemyComp_Base_eventHitDirection_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UAC_EnemyComp_Base_HitDirection),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAC_EnemyComp_Base_SetAttackPlayer = FName(TEXT("SetAttackPlayer"));
	void UAC_EnemyComp_Base::SetAttackPlayer(bool AttackPlayer)
	{
		AC_EnemyComp_Base_eventSetAttackPlayer_Parms Parms;
		Parms.AttackPlayer=AttackPlayer ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAC_EnemyComp_Base_SetAttackPlayer),&Parms);
	}
	static FName NAME_UAC_EnemyComp_Base_SetCurrentHealth = FName(TEXT("SetCurrentHealth"));
	void UAC_EnemyComp_Base::SetCurrentHealth(float const& Damage)
	{
		AC_EnemyComp_Base_eventSetCurrentHealth_Parms Parms;
		Parms.Damage=Damage;
		ProcessEvent(FindFunctionChecked(NAME_UAC_EnemyComp_Base_SetCurrentHealth),&Parms);
	}
	static FName NAME_UAC_EnemyComp_Base_SetEnemyDead = FName(TEXT("SetEnemyDead"));
	void UAC_EnemyComp_Base::SetEnemyDead(bool ActorDead)
	{
		AC_EnemyComp_Base_eventSetEnemyDead_Parms Parms;
		Parms.ActorDead=ActorDead ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAC_EnemyComp_Base_SetEnemyDead),&Parms);
	}
	void UAC_EnemyComp_Base::StaticRegisterNativesUAC_EnemyComp_Base()
	{
	}
	struct Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AC_EnemyComp_Base_eventGetAttackPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AC_EnemyComp_Base_eventGetAttackPlayer_Parms), &Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_EnemyComp_Base, nullptr, "GetAttackPlayer", nullptr, nullptr, sizeof(AC_EnemyComp_Base_eventGetAttackPlayer_Parms), Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_EnemyComp_Base_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_EnemyComp_Base, nullptr, "GetCurrentHealth", nullptr, nullptr, sizeof(AC_EnemyComp_Base_eventGetCurrentHealth_Parms), Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AC_EnemyComp_Base_eventGetEnemyDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AC_EnemyComp_Base_eventGetEnemyDead_Parms), &Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_EnemyComp_Base, nullptr, "GetEnemyDead", nullptr, nullptr, sizeof(AC_EnemyComp_Base_eventGetEnemyDead_Parms), Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_EnemyComp_Base_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_EnemyComp_Base, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(AC_EnemyComp_Base_eventGetMaxHealth_Parms), Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_EnemyComp_Base_eventHitDirection_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_EnemyComp_Base_eventHitDirection_Parms, ReturnValue), Z_Construct_UEnum_Lighting2_EAttackHitDirection, METADATA_PARAMS(nullptr, 0) }; // 1860249185
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_EnemyComp_Base, nullptr, "HitDirection", nullptr, nullptr, sizeof(AC_EnemyComp_Base_eventHitDirection_Parms), Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics
	{
		static void NewProp_AttackPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttackPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::NewProp_AttackPlayer_SetBit(void* Obj)
	{
		((AC_EnemyComp_Base_eventSetAttackPlayer_Parms*)Obj)->AttackPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::NewProp_AttackPlayer = { "AttackPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AC_EnemyComp_Base_eventSetAttackPlayer_Parms), &Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::NewProp_AttackPlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::NewProp_AttackPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_EnemyComp_Base, nullptr, "SetAttackPlayer", nullptr, nullptr, sizeof(AC_EnemyComp_Base_eventSetAttackPlayer_Parms), Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::NewProp_Damage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_EnemyComp_Base_eventSetCurrentHealth_Parms, Damage), METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_EnemyComp_Base, nullptr, "SetCurrentHealth", nullptr, nullptr, sizeof(AC_EnemyComp_Base_eventSetCurrentHealth_Parms), Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorDead_MetaData[];
#endif
		static void NewProp_ActorDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ActorDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::NewProp_ActorDead_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::NewProp_ActorDead_SetBit(void* Obj)
	{
		((AC_EnemyComp_Base_eventSetEnemyDead_Parms*)Obj)->ActorDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::NewProp_ActorDead = { "ActorDead", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AC_EnemyComp_Base_eventSetEnemyDead_Parms), &Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::NewProp_ActorDead_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::NewProp_ActorDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::NewProp_ActorDead_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::NewProp_ActorDead,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_EnemyComp_Base, nullptr, "SetEnemyDead", nullptr, nullptr, sizeof(AC_EnemyComp_Base_eventSetEnemyDead_Parms), Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_EnemyComp_Base);
	UClass* Z_Construct_UClass_UAC_EnemyComp_Base_NoRegister()
	{
		return UAC_EnemyComp_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAC_EnemyComp_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[];
#endif
		static void NewProp_bDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAC_EnemyComp_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAC_EnemyComp_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_EnemyComp_Base_GetAttackPlayer, "GetAttackPlayer" }, // 2678939002
		{ &Z_Construct_UFunction_UAC_EnemyComp_Base_GetCurrentHealth, "GetCurrentHealth" }, // 1256047784
		{ &Z_Construct_UFunction_UAC_EnemyComp_Base_GetEnemyDead, "GetEnemyDead" }, // 1085280282
		{ &Z_Construct_UFunction_UAC_EnemyComp_Base_GetMaxHealth, "GetMaxHealth" }, // 201921381
		{ &Z_Construct_UFunction_UAC_EnemyComp_Base_HitDirection, "HitDirection" }, // 4135742307
		{ &Z_Construct_UFunction_UAC_EnemyComp_Base_SetAttackPlayer, "SetAttackPlayer" }, // 1150392868
		{ &Z_Construct_UFunction_UAC_EnemyComp_Base_SetCurrentHealth, "SetCurrentHealth" }, // 1168222327
		{ &Z_Construct_UFunction_UAC_EnemyComp_Base_SetEnemyDead, "SetEnemyDead" }, // 3158469376
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_EnemyComp_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/AC_EnemyComp_Base.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_EnemyComp_Base, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_EnemyComp_Base, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_bDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ActorComponent/AC_EnemyComp_Base.h" },
	};
#endif
	void Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((UAC_EnemyComp_Base*)Obj)->bDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAC_EnemyComp_Base), &Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_bDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_bDead_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_EnemyComp_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_EnemyComp_Base_Statics::NewProp_bDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAC_EnemyComp_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_EnemyComp_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_EnemyComp_Base_Statics::ClassParams = {
		&UAC_EnemyComp_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAC_EnemyComp_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAC_EnemyComp_Base_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAC_EnemyComp_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_EnemyComp_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAC_EnemyComp_Base()
	{
		if (!Z_Registration_Info_UClass_UAC_EnemyComp_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_EnemyComp_Base.OuterSingleton, Z_Construct_UClass_UAC_EnemyComp_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAC_EnemyComp_Base.OuterSingleton;
	}
	template<> LIGHTING2_API UClass* StaticClass<UAC_EnemyComp_Base>()
	{
		return UAC_EnemyComp_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_EnemyComp_Base);
	UAC_EnemyComp_Base::~UAC_EnemyComp_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_EnemyComp_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_EnemyComp_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAC_EnemyComp_Base, UAC_EnemyComp_Base::StaticClass, TEXT("UAC_EnemyComp_Base"), &Z_Registration_Info_UClass_UAC_EnemyComp_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_EnemyComp_Base), 2367161543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_EnemyComp_Base_h_878148539(TEXT("/Script/Lighting2"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_EnemyComp_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_EnemyComp_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
