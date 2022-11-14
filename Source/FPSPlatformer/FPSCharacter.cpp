// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"
// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(40.0f, 95.0f);

	TurnRate = 45.f;
	LookUpRate = 45.0f;

	FPSCam = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FPSCam->SetupAttachment(GetCapsuleComponent());
	FPSCam->AddRelativeLocation(FVector(-40.0f, 1.75f, 65.0f));
	FPSCam->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//PlayerInputComponent->BindAction("Grab", IE_Pressed, this, &APaintCharacter::OnGrabObject);

	PlayerInputComponent->BindAxis("Move FB", this, &AFPSCharacter::MoveFW);
	PlayerInputComponent->BindAxis("Move LR", this, &AFPSCharacter::MoveLR);

	PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::LookAtRate);
}

void AFPSCharacter::MoveFW(float val)
{
	if (val != 0)
	{
		AddMovementInput(GetActorForwardVector(), val);
	}
}

void AFPSCharacter::MoveLR(float val)
{
	if (val != 0)
	{
		AddMovementInput(GetActorRightVector(), val);
	}
}

void AFPSCharacter::TurnAtRate(float rate)
{
	AddControllerYawInput(rate * TurnRate * GetWorld()->GetDeltaSeconds());
}

void AFPSCharacter::LookAtRate(float rate)
{
	AddControllerPitchInput(rate * LookUpRate * GetWorld()->GetDeltaSeconds());
}

