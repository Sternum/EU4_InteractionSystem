// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"

#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "Interactable.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class INTERACTIONSYSTEM_API UInteractable : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractable();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	USphereComponent* SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	int Priority = 0;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
private: 
	FVector InteractableLocation;

	bool CheckAngle(AActor* Player);
	bool CheckObstacle(AActor* Player);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	bool CanInteract(AActor* Player);

	void Interact();

	UFUNCTION()
	void OnOverlapBegin( 
		UPrimitiveComponent* OverlappedComp, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, 
		bool bFromSweep, 
		const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlapEnd(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);
};
