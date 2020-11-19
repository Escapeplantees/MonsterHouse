// Fill out your copyright notice in the Description page of Project Settings.


#include "CoachBlueprintFunctionLibrary.h"

void UCoachBlueprintFunctionLibrary::CoachDirectConnect(FString IP){
	APlayerController* pc = GWorld->GetFirstPlayerController<APlayerController>();
	pc->ClientTravel(IP, TRAVEL_Absolute);
}

FString UCoachBlueprintFunctionLibrary::GetPortNumber() {
	return FString::FromInt(GWorld->URL.Port);
}