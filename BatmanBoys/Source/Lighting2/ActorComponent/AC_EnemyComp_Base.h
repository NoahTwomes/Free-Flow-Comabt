// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Lighting2/Asset/FFCS_Data.h"
#include "AC_EnemyComp_Base.generated.h"


UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LIGHTING2_API UAC_EnemyComp_Base : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_EnemyComp_Base();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	EAttackHitDirection HitDirection(AActor* Instigator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetAttackPlayer(bool AttackPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentHealth(const float& Damage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	bool GetAttackPlayer();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetEnemyDead(const bool ActorDead);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	float GetCurrentHealth();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	float GetMaxHealth();
	
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	bool GetEnemyDead();

	

	

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (AllowPrivateAccess = true))
	float CurrentHealth;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Health", meta = (AllowPrivateAccess = true))
	float MaxHealth;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", meta = (AllowPrivateAccess = true))
	bool bDead;


		
};
