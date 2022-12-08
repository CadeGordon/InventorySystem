// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "Item.generated.h"

UCLASS()
class INVENTORYSYSTEM_API AItem : public AActor, public IInteractableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Item")
	class UStaticMeshComponent* ItemMesh;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Interact() override;

};
