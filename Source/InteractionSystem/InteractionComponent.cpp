// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"

// Sets default values for this component's properties
UInteractionComponent::UInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	
}

void UInteractionComponent::InteractAction()
{
	SortInteractableByPriority();
	for (UInteractable* Interactable : Interactables) {
		
		if (Interactable->CanInteract(GetOwner())) 
		{
			Interactable->Interact();
			return;
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Nope");
		}
	}
}

// Called every frame
void UInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInteractionComponent::SubscribeInteractable(UInteractable* interactable)
{
	Interactables.Add(interactable);
	//SortInteractableByPriority();
}

void UInteractionComponent::UnSubscribeInteractable(UInteractable* interactable)
{
	Interactables.Remove(interactable);
	//SortInteractableByPriority();
}

void UInteractionComponent::SortInteractableByPriority()
{
	Interactables.Sort([](const UInteractable& A, const UInteractable& B) {
		
		return A.Priority < B.Priority;
	});
}

