// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "MainMenu_Base.generated.h"


UENUM(BlueprintType)
enum class MenuIndex : uint8
{
	Play 			UMETA(DisplayName = "Play Index"),
	Options			UMETA(DisplayName = "Option Index"),
	Credits			UMETA(DisplayName = "Credits Index"),
	Exit			UMETA(DisplayName = "Exit Index")

};

/**
 * 
 */
UCLASS()
class ELEMENTSOFWAR_API UMainMenu_Base : public UUserWidget
{
	GENERATED_BODY()
	
public:

	//variables
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "CursorVariables")
		int32 curIndex = (int32)MenuIndex::Play;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "CursorVariables")
		int32 maxIndex = 3;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CursorVariables")
		UAudioComponent * m_cMoveSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CursorVariables")
		UAudioComponent * m_cAcceptSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CursorVariables")
		UAudioComponent * m_cDeclineSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CursorVariables")
		bool Accepted = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CursorVariables")
		bool Declined = false;

	// Called when the game starts or when spawned
	UFUNCTION(BlueprintImplementableEvent, Category = "MainMenuFunctions")
		void Init();

	// Called every frame
	UFUNCTION(BlueprintImplementableEvent, Category = "MainMenuFunctions")
		void Update(float DeltaSeconds);

	UFUNCTION(BlueprintCallable, Category = "MainMenuFunctions")
		void InputCheck();

	UFUNCTION(BlueprintImplementableEvent, Category = "MainMenuFunctions")
		void Accept();

	UFUNCTION(BlueprintImplementableEvent, Category = "MainMenuFunctions")
		void Decline();

};
