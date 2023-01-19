// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "InventorySystemCharacter.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//sets the mesh of the item
	ItemMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = ItemMesh;


}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItem::Interact(class AInventorySystemCharacter* Character)
{
	//if the player interacts with the object
	if (Character) {
		//add the item data to the invetory ui
		Character->AddItemToInventoryWidget(ItemData);
	}
	//deletes the item from the scene
	Destroy();
}



