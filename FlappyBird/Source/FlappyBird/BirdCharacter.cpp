// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"

// Sets default values
ABirdCharacter::ABirdCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.8f;

}

// Called when the game starts or when spawned
void ABirdCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABirdCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABirdCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Flap", IE_Pressed, this, &ABirdCharacter::Flap);
}
void ABirdCharacter::Flap()
{
	LaunchCharacter(FVector(0, 0, JumpForce), false, true);
}

