// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "InputAction.h"             //  Dành cho UInputAction
#include "InputMappingContext.h"    //  Dành cho UInputMappingContext
#include "BirdCharacter.generated.h"


UCLASS()
class FLAPPYBIRD_API ABirdCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABirdCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* FlapMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* FlapAction;

	UPROPERTY(EditAnywhere)
	float JumpForce = 600.f;

	UFUNCTION()
	void Flap();

};
