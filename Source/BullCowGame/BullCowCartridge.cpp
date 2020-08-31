// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcome the player
    PrintLine(TEXT("Hello"));
    PrintLine(TEXT("Guess the four letter word"));
    PrintLine(TEXT("press enter to begin"));

    InitGame(); // Setting up the game
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
        PrintLine(TEXT("You lose"));
    }
}

void UBullCowCartridge::InitGame()
{
    HiddenWord = TEXT("cake"); // Set the hidden word
    lives = // Set lives
}