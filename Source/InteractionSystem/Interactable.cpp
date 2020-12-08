// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"
#include "InteractionComponent.h"

// Sets default values for this component's properties
UInteractable::UInteractable()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Interaction Sphere"));
	
	if (GetOwner()) {
		SphereComponent->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	}
}


// Called when the game starts
void UInteractable::BeginPlay()
{
	Super::BeginPlay();

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &UInteractable::OnOverlapBegin);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &UInteractable::OnOverlapEnd);

	if (GetOwner()) {
		InteractableLocation = GetOwner()->GetActorLocation();
	}
}

bool UInteractable::CanInteract(AActor* Player)
{
	if (Player && Player != nullptr) {
		if (!CheckAngle(Player)) {
			return false;
		}

		if (!CheckObstacle(Player)) {
			return false;
		}

		return true;
	}
	return false;
}

void UInteractable::Interact() 
{
	if (GetOwner() && GetWorld()) {
		GetWorld()->DestroyActor(GetOwner());
	}
}

bool UInteractable::CheckAngle(AActor* Player) 
{
	if (Player && Player != nullptr) {
		FVector PlayerForwardVector = Player->GetActorForwardVector();
		FVector const PlayerToInteractableLocation = (InteractableLocation - Player->GetActorLocation()).GetSafeNormal();
		PlayerForwardVector.Normalize();

		float Dot = FVector::DotProduct(PlayerForwardVector, PlayerToInteractableLocation);

		float angle = FMath::Acos(Dot) * (180 / PI);

		return angle < 45.0f ? true : false;
	}
	return false;
}

bool UInteractable::CheckObstacle(AActor* Player)
{
	if (GetWorld()) {
		FCollisionQueryParams collisionParams;
		collisionParams.AddIgnoredActor(GetOwner());
		FHitResult OutHit;
		if (GetWorld()->LineTraceSingleByChannel(OutHit, InteractableLocation, Player->GetActorLocation(), ECC_GameTraceChannel2, collisionParams)) {
			if (OutHit.GetActor()->FindComponentByClass<UInteractionComponent>()) {
				return true;
			}
		}
	}

	return false;
}

void UInteractable::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComp, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->FindComponentByClass<UInteractionComponent>())
	{
		OtherActor->FindComponentByClass<UInteractionComponent>()->SubscribeInteractable(this);
	}
}

void UInteractable::OnOverlapEnd(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->FindComponentByClass<UInteractionComponent>())
	{
		OtherActor->FindComponentByClass<UInteractionComponent>()->UnSubscribeInteractable(this);
	}
}

