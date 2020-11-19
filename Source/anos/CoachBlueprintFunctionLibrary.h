// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoachBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ANOS_API UCoachBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Direct Connect", CompactNodeTitle = "CoachDirectConn"), Category = "Coach")
		static void CoachDirectConnect(FString IP);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Server Port"), Category = "Coach")
		static FString GetPortNumber();
};
