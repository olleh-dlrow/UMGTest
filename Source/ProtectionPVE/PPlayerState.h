// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PPlayerState.generated.h"

class UTextBlock;

/**
 * 
 */
UCLASS()
class PROTECTIONPVE_API APPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerScore(float NewScore);

	void SetScoreText(UTextBlock* Text);
protected:
	virtual void BeginPlay() override;
	
	UTextBlock* ScoreText;	
};

