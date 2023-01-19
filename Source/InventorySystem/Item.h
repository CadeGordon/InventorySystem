// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "Structs.h"
#include "Item.generated.h"

UCLASS()
class INVENTORYSYSTEM_API AItem : public AActor, public IInteractableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	/// <summary>
	/// lets the dev choose the mesh for the item they want to use
	/// </summary>
	UPROPERTY(EditDefaultsOnly, Category = "Item")
	class UStaticMeshComponent* ItemMesh;
	/// <summary>
	/// Gets the data for an item from the structs class
	/// </summary>
	UPROPERTY(EditDefaultsOnly, Category = "Item")
	FItemData ItemData;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/// <summary>
	/// Lets the player interact with an item
	/// </summary>
	/// <param name="Character"></param>
	virtual void Interact(class AInventorySystemCharacter* Character) override;
	/// <summary>
	/// Gets all the data of the item from the struct
	/// </summary>
	/// <returns></returns>
	FItemData GetItemData() const { return ItemData; }

};
