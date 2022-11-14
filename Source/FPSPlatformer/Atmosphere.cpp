// Fill out your copyright notice in the Description page of Project Settings.


#include "Atmosphere.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/VolumetricCloudComponent.h"
// Sets default values
AAtmosphere::AAtmosphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DirectionalLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Directional Light"));
	DirectionalLight->SetupAttachment(RootComponent);
	DirectionalLight->LightSourceAngle = 0.5357f;
	DirectionalLight->bUseTemperature = true;
	DirectionalLight->Temperature = 8100.f;
	DirectionalLight->Intensity = 3.0f;
	DirectionalLight->SetAtmosphereSunLight(true);

	SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("Sky Light"));
	SkyLight->SetupAttachment(RootComponent);
	SkyLight->bRealTimeCapture = true;

	SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("Sky Atmosphere"));
	SkyAtmosphere->SetupAttachment(RootComponent);

	ExponentialHeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("Exponential Height Fog"));
	ExponentialHeightFog->SetupAttachment(RootComponent);

	VolumetricCloud = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("Volumetric Cloud"));
	VolumetricCloud->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AAtmosphere::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAtmosphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

