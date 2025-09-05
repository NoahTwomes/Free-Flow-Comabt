// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lighting2/ActorComponent/AC_FFCC_Base.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "Lighting2/Asset/FFCS_Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_FFCC_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LIGHTING2_API UClass* Z_Construct_UClass_UAC_FFCC_Base();
	LIGHTING2_API UClass* Z_Construct_UClass_UAC_FFCC_Base_NoRegister();
	LIGHTING2_API UEnum* Z_Construct_UEnum_Lighting2_EAttackHitDirection();
	LIGHTING2_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAttackAnimData();
	LIGHTING2_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerFinisherData();
	UPackage* Z_Construct_UPackage__Script_Lighting2();
// End Cross Module References
	struct AC_FFCC_Base_eventGetAttackAnims_Parms
	{
		FPlayerAttackAnimData ReturnValue;
	};
	struct AC_FFCC_Base_eventGetCounterEnemy_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		AC_FFCC_Base_eventGetCounterEnemy_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct AC_FFCC_Base_eventGetCurrentEnemy_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		AC_FFCC_Base_eventGetCurrentEnemy_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct AC_FFCC_Base_eventGetFinisherAnims_Parms
	{
		FPlayerFinisherData ReturnValue;
	};
	struct AC_FFCC_Base_eventGetTag_Parms
	{
		FGameplayTag ReturnValue;
	};
	struct AC_FFCC_Base_eventHitDirection_Parms
	{
		AActor* Instigator;
		TEnumAsByte<EAttackHitDirection> ReturnValue;

		/** Constructor, initializes return property only **/
		AC_FFCC_Base_eventHitDirection_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct AC_FFCC_Base_eventPlayHitMontage_Parms
	{
		TEnumAsByte<EAttackHitDirection> HitDirection;
	};
	struct AC_FFCC_Base_eventSetAttackAnims_Parms
	{
		FPlayerAttackAnimData NewAttackData;
	};
	struct AC_FFCC_Base_eventSetCounterEnemy_Parms
	{
		AActor* EnemyRef;
	};
	struct AC_FFCC_Base_eventSetCurrentEnemy_Parms
	{
		AActor* EnemyRef;
	};
	struct AC_FFCC_Base_eventSetFinisherAnims_Parms
	{
		FPlayerFinisherData NewFinisherData;
	};
	struct AC_FFCC_Base_eventSetTag_Parms
	{
		FGameplayTag Tag;
	};
	static FName NAME_UAC_FFCC_Base_ComboCounter = FName(TEXT("ComboCounter"));
	void UAC_FFCC_Base::ComboCounter()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_ComboCounter),NULL);
	}
	static FName NAME_UAC_FFCC_Base_GetAttackAnims = FName(TEXT("GetAttackAnims"));
	FPlayerAttackAnimData UAC_FFCC_Base::GetAttackAnims()
	{
		AC_FFCC_Base_eventGetAttackAnims_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_GetAttackAnims),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAC_FFCC_Base_GetCounterEnemy = FName(TEXT("GetCounterEnemy"));
	AActor* UAC_FFCC_Base::GetCounterEnemy()
	{
		AC_FFCC_Base_eventGetCounterEnemy_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_GetCounterEnemy),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAC_FFCC_Base_GetCurrentEnemy = FName(TEXT("GetCurrentEnemy"));
	AActor* UAC_FFCC_Base::GetCurrentEnemy()
	{
		AC_FFCC_Base_eventGetCurrentEnemy_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_GetCurrentEnemy),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAC_FFCC_Base_GetFinisherAnims = FName(TEXT("GetFinisherAnims"));
	FPlayerFinisherData UAC_FFCC_Base::GetFinisherAnims()
	{
		AC_FFCC_Base_eventGetFinisherAnims_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_GetFinisherAnims),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAC_FFCC_Base_GetTag = FName(TEXT("GetTag"));
	FGameplayTag UAC_FFCC_Base::GetTag()
	{
		AC_FFCC_Base_eventGetTag_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_GetTag),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAC_FFCC_Base_HitDirection = FName(TEXT("HitDirection"));
	EAttackHitDirection UAC_FFCC_Base::HitDirection(AActor* Instigator)
	{
		AC_FFCC_Base_eventHitDirection_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_HitDirection),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAC_FFCC_Base_PlayCounterMontage = FName(TEXT("PlayCounterMontage"));
	void UAC_FFCC_Base::PlayCounterMontage()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_PlayCounterMontage),NULL);
	}
	static FName NAME_UAC_FFCC_Base_PlayFinisherMontage = FName(TEXT("PlayFinisherMontage"));
	void UAC_FFCC_Base::PlayFinisherMontage()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_PlayFinisherMontage),NULL);
	}
	static FName NAME_UAC_FFCC_Base_PlayHitMontage = FName(TEXT("PlayHitMontage"));
	void UAC_FFCC_Base::PlayHitMontage(EAttackHitDirection HitDirection)
	{
		AC_FFCC_Base_eventPlayHitMontage_Parms Parms;
		Parms.HitDirection=HitDirection;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_PlayHitMontage),&Parms);
	}
	static FName NAME_UAC_FFCC_Base_ResetComboCounter = FName(TEXT("ResetComboCounter"));
	void UAC_FFCC_Base::ResetComboCounter()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_ResetComboCounter),NULL);
	}
	static FName NAME_UAC_FFCC_Base_SetAttackAnims = FName(TEXT("SetAttackAnims"));
	void UAC_FFCC_Base::SetAttackAnims(FPlayerAttackAnimData const& NewAttackData)
	{
		AC_FFCC_Base_eventSetAttackAnims_Parms Parms;
		Parms.NewAttackData=NewAttackData;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_SetAttackAnims),&Parms);
	}
	static FName NAME_UAC_FFCC_Base_SetCounterEnemy = FName(TEXT("SetCounterEnemy"));
	void UAC_FFCC_Base::SetCounterEnemy(AActor* EnemyRef)
	{
		AC_FFCC_Base_eventSetCounterEnemy_Parms Parms;
		Parms.EnemyRef=EnemyRef;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_SetCounterEnemy),&Parms);
	}
	static FName NAME_UAC_FFCC_Base_SetCurrentEnemy = FName(TEXT("SetCurrentEnemy"));
	void UAC_FFCC_Base::SetCurrentEnemy(AActor* EnemyRef)
	{
		AC_FFCC_Base_eventSetCurrentEnemy_Parms Parms;
		Parms.EnemyRef=EnemyRef;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_SetCurrentEnemy),&Parms);
	}
	static FName NAME_UAC_FFCC_Base_SetFinisherAnims = FName(TEXT("SetFinisherAnims"));
	void UAC_FFCC_Base::SetFinisherAnims(FPlayerFinisherData const& NewFinisherData)
	{
		AC_FFCC_Base_eventSetFinisherAnims_Parms Parms;
		Parms.NewFinisherData=NewFinisherData;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_SetFinisherAnims),&Parms);
	}
	static FName NAME_UAC_FFCC_Base_SetTag = FName(TEXT("SetTag"));
	void UAC_FFCC_Base::SetTag(FGameplayTag const& Tag)
	{
		AC_FFCC_Base_eventSetTag_Parms Parms;
		Parms.Tag=Tag;
		ProcessEvent(FindFunctionChecked(NAME_UAC_FFCC_Base_SetTag),&Parms);
	}
	void UAC_FFCC_Base::StaticRegisterNativesUAC_FFCC_Base()
	{
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_ComboCounter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_ComboCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_ComboCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "ComboCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_ComboCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_ComboCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_ComboCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_ComboCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventGetAttackAnims_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerAttackAnimData, METADATA_PARAMS(nullptr, 0) }; // 1205317913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "GetAttackAnims", nullptr, nullptr, sizeof(AC_FFCC_Base_eventGetAttackAnims_Parms), Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventGetCounterEnemy_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "GetCounterEnemy", nullptr, nullptr, sizeof(AC_FFCC_Base_eventGetCounterEnemy_Parms), Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventGetCurrentEnemy_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "GetCurrentEnemy", nullptr, nullptr, sizeof(AC_FFCC_Base_eventGetCurrentEnemy_Parms), Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventGetFinisherAnims_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerFinisherData, METADATA_PARAMS(nullptr, 0) }; // 3054349311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "GetFinisherAnims", nullptr, nullptr, sizeof(AC_FFCC_Base_eventGetFinisherAnims_Parms), Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventGetTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "GetTag", nullptr, nullptr, sizeof(AC_FFCC_Base_eventGetTag_Parms), Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_GetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_GetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventHitDirection_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventHitDirection_Parms, ReturnValue), Z_Construct_UEnum_Lighting2_EAttackHitDirection, METADATA_PARAMS(nullptr, 0) }; // 1860249185
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "HitDirection", nullptr, nullptr, sizeof(AC_FFCC_Base_eventHitDirection_Parms), Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_HitDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_HitDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_PlayCounterMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_PlayCounterMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Counter" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_PlayCounterMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "PlayCounterMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_PlayCounterMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_PlayCounterMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_PlayCounterMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_PlayCounterMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_PlayFinisherMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_PlayFinisherMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Finisher" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_PlayFinisherMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "PlayFinisherMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_PlayFinisherMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_PlayFinisherMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_PlayFinisherMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_PlayFinisherMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_HitDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventPlayHitMontage_Parms, HitDirection), Z_Construct_UEnum_Lighting2_EAttackHitDirection, METADATA_PARAMS(nullptr, 0) }; // 1860249185
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::NewProp_HitDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "PlayHitMontage", nullptr, nullptr, sizeof(AC_FFCC_Base_eventPlayHitMontage_Parms), Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_ResetComboCounter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_ResetComboCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_ResetComboCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "ResetComboCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_ResetComboCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_ResetComboCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_ResetComboCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_ResetComboCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAttackData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewAttackData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::NewProp_NewAttackData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::NewProp_NewAttackData = { "NewAttackData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventSetAttackAnims_Parms, NewAttackData), Z_Construct_UScriptStruct_FPlayerAttackAnimData, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::NewProp_NewAttackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::NewProp_NewAttackData_MetaData)) }; // 1205317913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::NewProp_NewAttackData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "SetAttackAnims", nullptr, nullptr, sizeof(AC_FFCC_Base_eventSetAttackAnims_Parms), Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::NewProp_EnemyRef = { "EnemyRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventSetCounterEnemy_Parms, EnemyRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::NewProp_EnemyRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "SetCounterEnemy", nullptr, nullptr, sizeof(AC_FFCC_Base_eventSetCounterEnemy_Parms), Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::NewProp_EnemyRef = { "EnemyRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventSetCurrentEnemy_Parms, EnemyRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::NewProp_EnemyRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "SetCurrentEnemy", nullptr, nullptr, sizeof(AC_FFCC_Base_eventSetCurrentEnemy_Parms), Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFinisherData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFinisherData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::NewProp_NewFinisherData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::NewProp_NewFinisherData = { "NewFinisherData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventSetFinisherAnims_Parms, NewFinisherData), Z_Construct_UScriptStruct_FPlayerFinisherData, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::NewProp_NewFinisherData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::NewProp_NewFinisherData_MetaData)) }; // 3054349311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::NewProp_NewFinisherData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "SetFinisherAnims", nullptr, nullptr, sizeof(AC_FFCC_Base_eventSetFinisherAnims_Parms), Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_FFCC_Base_eventSetTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_FFCC_Base, nullptr, "SetTag", nullptr, nullptr, sizeof(AC_FFCC_Base_eventSetTag_Parms), Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_FFCC_Base_SetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_FFCC_Base_SetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_FFCC_Base);
	UClass* Z_Construct_UClass_UAC_FFCC_Base_NoRegister()
	{
		return UAC_FFCC_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAC_FFCC_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinisherAnims_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinisherAnims;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnims_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackAnims;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinisherAnimSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinisherAnimSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FinisherAnimSets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Counter_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Counter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboCounter_TimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboCounter_TimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAC_FFCC_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Lighting2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAC_FFCC_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_FFCC_Base_ComboCounter, "ComboCounter" }, // 1349282559
		{ &Z_Construct_UFunction_UAC_FFCC_Base_GetAttackAnims, "GetAttackAnims" }, // 469425542
		{ &Z_Construct_UFunction_UAC_FFCC_Base_GetCounterEnemy, "GetCounterEnemy" }, // 901694769
		{ &Z_Construct_UFunction_UAC_FFCC_Base_GetCurrentEnemy, "GetCurrentEnemy" }, // 626445511
		{ &Z_Construct_UFunction_UAC_FFCC_Base_GetFinisherAnims, "GetFinisherAnims" }, // 2660573031
		{ &Z_Construct_UFunction_UAC_FFCC_Base_GetTag, "GetTag" }, // 1475880255
		{ &Z_Construct_UFunction_UAC_FFCC_Base_HitDirection, "HitDirection" }, // 312642330
		{ &Z_Construct_UFunction_UAC_FFCC_Base_PlayCounterMontage, "PlayCounterMontage" }, // 1376625660
		{ &Z_Construct_UFunction_UAC_FFCC_Base_PlayFinisherMontage, "PlayFinisherMontage" }, // 1203234113
		{ &Z_Construct_UFunction_UAC_FFCC_Base_PlayHitMontage, "PlayHitMontage" }, // 3052651389
		{ &Z_Construct_UFunction_UAC_FFCC_Base_ResetComboCounter, "ResetComboCounter" }, // 2448168821
		{ &Z_Construct_UFunction_UAC_FFCC_Base_SetAttackAnims, "SetAttackAnims" }, // 1844067831
		{ &Z_Construct_UFunction_UAC_FFCC_Base_SetCounterEnemy, "SetCounterEnemy" }, // 3125467215
		{ &Z_Construct_UFunction_UAC_FFCC_Base_SetCurrentEnemy, "SetCurrentEnemy" }, // 3561530405
		{ &Z_Construct_UFunction_UAC_FFCC_Base_SetFinisherAnims, "SetFinisherAnims" }, // 1146604435
		{ &Z_Construct_UFunction_UAC_FFCC_Base_SetTag, "SetTag" }, // 3974215354
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_FFCC_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/AC_FFCC_Base.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnims_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Finisher" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnims = { "FinisherAnims", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_FFCC_Base, FinisherAnims), Z_Construct_UScriptStruct_FPlayerFinisherData, METADATA_PARAMS(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnims_MetaData)) }; // 3054349311
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_AttackAnims_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Finisher" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_AttackAnims = { "AttackAnims", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_FFCC_Base, AttackAnims), Z_Construct_UScriptStruct_FPlayerAttackAnimData, METADATA_PARAMS(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_AttackAnims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_AttackAnims_MetaData)) }; // 1205317913
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnimSets_Inner = { "FinisherAnimSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlayerFinisherData, METADATA_PARAMS(nullptr, 0) }; // 3054349311
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnimSets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Finisher" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnimSets = { "FinisherAnimSets", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_FFCC_Base, FinisherAnimSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnimSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnimSets_MetaData)) }; // 3054349311
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_Counter_MetaData[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_Counter = { "Counter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_FFCC_Base, Counter), METADATA_PARAMS(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_Counter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_Counter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_ComboCounter_TimerHandle_MetaData[] = {
		{ "Category", "Timer Handle" },
		{ "ModuleRelativePath", "ActorComponent/AC_FFCC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_ComboCounter_TimerHandle = { "ComboCounter_TimerHandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_FFCC_Base, ComboCounter_TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_ComboCounter_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_ComboCounter_TimerHandle_MetaData)) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_FFCC_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnims,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_AttackAnims,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnimSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_FinisherAnimSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_Counter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_FFCC_Base_Statics::NewProp_ComboCounter_TimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAC_FFCC_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_FFCC_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_FFCC_Base_Statics::ClassParams = {
		&UAC_FFCC_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAC_FFCC_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAC_FFCC_Base_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAC_FFCC_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_FFCC_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAC_FFCC_Base()
	{
		if (!Z_Registration_Info_UClass_UAC_FFCC_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_FFCC_Base.OuterSingleton, Z_Construct_UClass_UAC_FFCC_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAC_FFCC_Base.OuterSingleton;
	}
	template<> LIGHTING2_API UClass* StaticClass<UAC_FFCC_Base>()
	{
		return UAC_FFCC_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_FFCC_Base);
	UAC_FFCC_Base::~UAC_FFCC_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_FFCC_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_FFCC_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAC_FFCC_Base, UAC_FFCC_Base::StaticClass, TEXT("UAC_FFCC_Base"), &Z_Registration_Info_UClass_UAC_FFCC_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_FFCC_Base), 1629797879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_FFCC_Base_h_2303286424(TEXT("/Script/Lighting2"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_FFCC_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Free_Flow_Comabt_BatmanBoys_Source_Lighting2_ActorComponent_AC_FFCC_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
