// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

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

    // Cast EnhancedInputComponent
    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        if (FlapAction)
        {
            EnhancedInput->BindAction(FlapAction, ETriggerEvent::Started, this, &ABirdCharacter::Flap);
        }
    }

    // Add Input Mapping Context
    if (APlayerController* PC = Cast<APlayerController>(Controller))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
        {
            if (FlapMappingContext)
            {
                Subsystem->AddMappingContext(FlapMappingContext, 0);
            }
        }
    }
}
void ABirdCharacter::Flap()
{
    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Jump!"));
    GetCharacterMovement()->Velocity.Z = 600.f;
}

