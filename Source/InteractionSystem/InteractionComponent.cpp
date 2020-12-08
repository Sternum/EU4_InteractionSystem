// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"

// Sets default values for this component's properties
UInteractionComponent::UInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

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
	}
}

void UInteractionComponent::SubscribeInteractable(UInteractable* interactable)
{
	if (interactable && interactable != nullptr) {
		Interactables.Add(interactable);
	}
}

void UInteractionComponent::UnSubscribeInteractable(UInteractable* interactable)
{
	if(interactable && interactable != nullptr)
	Interactables.Remove(interactable);
}

void UInteractionComponent::SortInteractableByPriority()
{

	Interactables.Sort([](const UInteractable& A, const UInteractable& B) {
		return A.Priority > B.Priority;
	});
}

