// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INTERACTIONSYSTEM_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractionComponent();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	TArray<UInteractable*> Interactables;

private:
	void SortInteractableByPriority();

public:	

	void SubscribeInteractable(UInteractable* interactable);
	void UnSubscribeInteractable(UInteractable* interactable);

	UFUNCTION()
	void InteractAction();
		
};
