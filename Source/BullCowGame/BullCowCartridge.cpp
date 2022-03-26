// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    //Showing messages when start playing on the sign of the game
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Press enter to continue..."));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    //Removes messages and clears the sign of the game
    ClearScreen();
    //TEXT() macro: so that unreal can encode it correctly
    FString HiddenWord = TEXT("cake");
    
}