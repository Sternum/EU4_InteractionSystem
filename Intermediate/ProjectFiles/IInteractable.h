#pragma once
class IInteractable
{
	virtual void Interact() = 0;
	virtual void CanInteract(class AActor* Player) = 0;
};

