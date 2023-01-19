#pragma once

#include "Structs.generated.h"


USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_BODY()
		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		//get the actor of the item class
		TSubclassOf<class AItem> ItemClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		//gives the dev the option to give the item an image
		class UTexture2D* ItemImage;

};