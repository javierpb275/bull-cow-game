// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    //Showing messages when start playing on the sign of the game
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the 4 letter word!"));//Magic Number Remove
    PrintLine(TEXT("Press enter to continue..."));
    HiddenWord = TEXT("cake");
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    //Removes messages and clears the sign of the game
    ClearScreen();

    //check if it is the correct hidden word
    if (Input == HiddenWord) 
    {
        PrintLine(TEXT("You have won!"));
    }
    else 
    {
        PrintLine(TEXT("You have lost!"));
    };
}