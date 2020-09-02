// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();
    PrintLine(FString::Printf(TEXT("The hidden word is %i characters long"), HiddenWord.Len()));
    // Welcome the player
    PrintLine(TEXT("Hello"));
    PrintLine(TEXT("Guess the four letter word"));
    PrintLine(TEXT("press enter to begin")); 
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You win"));
    }
    else
    {
        if (Input.Len() != HiddenWord.Len())
        {
          PrintLine(FString::Printf(TEXT("The hidden word is %i"), HiddenWord.Len()));  // %i for integer
        }
    }
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("cake"); 
    lives = 4; 
}