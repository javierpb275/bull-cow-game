// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();

    //* : it is a pointer. a pointer is an address where that string is stored in memory and the is gonna return a pointer to an array of characters
    // PrintF: it has no knowledge of defined types like FString. we need to use the *.
    // PrintLine(FString::Printf(TEXT("The HiddenWord is: %s"), *HiddenWord));//Show string variable value in string
    PrintLine(TEXT("The HiddenWord is: %s.\nIt is %i characters Long"), *HiddenWord, HiddenWord.Len()); // Debug Line
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
    }
    else // Checking PlayerGuess
    {
        ProcessGuess(Input);
    }
}

void UBullCowCartridge::SetupGame()
{
    // welcoming player
    PrintLine(TEXT("Welcome to Bull Cows!"));

    HiddenWord = TEXT("cakes");
    Lives = HiddenWord.Len();
    bGameOver = false;

    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len());
    PrintLine(TEXT("You have %i lives."), Lives);
    PrintLine(TEXT("Type in your guess and \npress enter to continue...")); // Prompt player for guess
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play again."));
}

void UBullCowCartridge::ProcessGuess(FString Guess)
{
        if (Guess == HiddenWord)
        {
            PrintLine(TEXT("You have won!"));
            EndGame();
        }
        else
        {
            PrintLine(TEXT("You have lost a life!"));
            PrintLine(TEXT("%i"), --Lives);
            if (Lives > 0)
            {
                if (Guess.Len() != HiddenWord.Len())
                {
                    PrintLine(TEXT("Sorry, try guessing again! \nYou have %i lives remaining"), Lives);
                }
            }
            else
            {
                PrintLine(TEXT("You have no lives left! Game Over!"));
                EndGame();
            }
        }
}