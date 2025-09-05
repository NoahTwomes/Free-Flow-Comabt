// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Lighting2/Asset/FFCS_Data.h"
#include "AC_FFCC_Base.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LIGHTING2_API UAC_FFCC_Base : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_FFCC_Base();


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	EAttackHitDirection HitDirection(AActor* Instigator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void PlayHitMontage(EAttackHitDirection HitDirection);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentEnemy(AActor* EnemyRef);

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	AActor* GetCurrentEnemy();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCounterEnemy(AActor* EnemyRef);

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	AActor* GetCounterEnemy();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetTag(const FGameplayTag& Tag);

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, Blueprintable)
	FGameplayTag GetTag();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Counter")
	void PlayCounterMontage();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Finisher")
	void PlayFinisherMontage();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Combo")
	void ComboCounter();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Combo")
	void ResetComboCounter();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Combo")
	void SetFinisherAnims(const FPlayerFinisherData& NewFinisherData);

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	FPlayerFinisherData GetFinisherAnims();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	FPlayerAttackAnimData GetAttackAnims();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Combo")
	void SetAttackAnims(const FPlayerAttackAnimData& NewAttackData);

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Finisher", meta = (AllowPrivateAccess = true))
	FPlayerFinisherData FinisherAnims;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Finisher", meta = (AllowPrivateAccess = true))
	FPlayerAttackAnimData AttackAnims;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Finisher", meta = (AllowPrivateAccess = true))
	TArray<FPlayerFinisherData> FinisherAnimSets;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo")
	int Counter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer Handle")
	FTimerHandle ComboCounter_TimerHandle;

		
};
