// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    //Showing messages when start playing on the sign of the game
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the 4 letter word!"));//Magic Number Remove
    PrintLine(TEXT("Press enter to continue..."));

    //Setting up game
    HiddenWord = TEXT("cake");// Set the HiddemWord
    //Set Lives

    //Prompt player for guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    //Removes messages and clears the sign of the game
    ClearScreen();

    //checking player guess

    //check if it is the correct hidden word
    if (Input == HiddenWord) 
    {
        PrintLine(TEXT("You have won!"));
    }
    else 
    {
        PrintLine(TEXT("You have lost!"));
    };
    //Check if Isogram
    //prompt to guess again
    //Check right number of characters
    //prompt to guess again

    //Remove Life
    
    //Check if lives > 0
    //if yes guess again
    //show lives left
    //if no show game over and hiddenwod?
    //prompt to play again, press enter to play again?
    //check user input
    //playgain or guit
}