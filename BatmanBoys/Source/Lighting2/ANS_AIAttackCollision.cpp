// Fill out your copyright notice in the Description page of Project Settings.


#include "ANS_AIAttackCollision.h"

#include "ActorComponent/AC_FFCC_Base.h"
#include "Kismet/KismetSystemLibrary.h"

void UANS_AIAttackCollision::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                         float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	
	AttackOnceTrigger = DoAttackOnce;
}

void UANS_AIAttackCollision::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);

	if(AttackOnceTrigger)
	{
		DoCollisionCheck(MeshComp);
		AttackOnceTrigger = false;
		
	}
	else if(!DoAttackOnce)
	{
		DoCollisionCheck(MeshComp);
	}
}

void UANS_AIAttackCollision::DoCollisionCheck(USkeletalMeshComponent* MeshComp)
{
	FHitResult HitResult;

	const FVector InSocket = MeshComp->GetSocketLocation(StartSocket);
	const FVector OutSocket = MeshComp->GetSocketLocation(EndSocket);

	const ETraceTypeQuery TraceChannel = UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel1);

	TArray<AActor*> ActorsToIgnore;

	ActorsToIgnore.Add(MeshComp->GetOwner());

	bool bHit = UKismetSystemLibrary::SphereTraceSingle(MeshComp->GetWorld(), InSocket, OutSocket, Radius, TraceChannel, true, ActorsToIgnore, EDrawDebugTrace::ForDuration,
		HitResult, true);
	const AActor* HitActor = HitResult.GetActor();
	if(bHit)
	{
		
		if(HitActor && HitResult.GetActor()->GetComponentByClass(UAC_FFCC_Base::StaticClass()))
		{

			FString HitActorName = HitActor->GetName();
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("Hit actor: %s"), *HitActorName));

			UAC_FFCC_Base* FFCS = Cast<UAC_FFCC_Base>(HitActor->GetComponentByClass(UAC_FFCC_Base::StaticClass()));

			if(!(FFCS->GetTag() == HitCollisionExclusionTag) || !(FFCS->GetTag() == FinisherTag))
			{
				EAttackHitDirection HitDirection = FFCS->HitDirection(MeshComp->GetOwner());
				if(HitDirection)
				{
					FFCS->PlayHitMontage(HitDirection);
				}
				else
				{
					FFCS->PlayHitMontage(EAttackHitDirection::Fwd);
				}
			}
		}
	}
}
