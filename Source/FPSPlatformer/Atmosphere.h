// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Atmosphere.generated.h"

UCLASS()
class FPSPLATFORMER_API AAtmosphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAtmosphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleDefaultsOnly, Category = Atmosphere)
		class UDirectionalLightComponent* DirectionalLight;

	UPROPERTY(VisibleDefaultsOnly, Category = Atmosphere)
		class USkyLightComponent* SkyLight;

	UPROPERTY(VisibleDefaultsOnly, Category = Atmosphere)
		class USkyAtmosphereComponent* SkyAtmosphere;

	UPROPERTY(VisibleDefaultsOnly, Category = Atmosphere)
		class UExponentialHeightFogComponent* ExponentialHeightFog;

	UPROPERTY(VisibleDefaultsOnly, Category = Atmosphere)
		class UVolumetricCloudComponent* VolumetricCloud;
};
