// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void OnInput(const FString &Input) override;
	void SetupGame();
	void EndGame();

	// Your declarations go below!
private:
	FString HiddenWord; // fstring is dynamic, it depends how many characters have regarding the space in memory.
	int32 Lives;		// it is a four byte space in memory.
	bool bGameOver;
};
