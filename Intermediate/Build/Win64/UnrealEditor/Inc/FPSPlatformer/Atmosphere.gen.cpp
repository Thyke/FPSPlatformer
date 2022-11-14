// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPlatformer/Atmosphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtmosphere() {}
// Cross Module References
	FPSPLATFORMER_API UClass* Z_Construct_UClass_AAtmosphere_NoRegister();
	FPSPLATFORMER_API UClass* Z_Construct_UClass_AAtmosphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSPlatformer();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
// End Cross Module References
	void AAtmosphere::StaticRegisterNativesAAtmosphere()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtmosphere);
	UClass* Z_Construct_UClass_AAtmosphere_NoRegister()
	{
		return AAtmosphere::StaticClass();
	}
	struct Z_Construct_UClass_AAtmosphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectionalLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyAtmosphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExponentialHeightFog_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExponentialHeightFog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricCloud_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumetricCloud;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtmosphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPlatformer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Atmosphere.h" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphere_Statics::NewProp_DirectionalLight_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtmosphere_Statics::NewProp_DirectionalLight = { "DirectionalLight", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtmosphere, DirectionalLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtmosphere_Statics::NewProp_DirectionalLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphere_Statics::NewProp_DirectionalLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyLight_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyLight = { "SkyLight", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtmosphere, SkyLight), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyAtmosphere_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyAtmosphere = { "SkyAtmosphere", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtmosphere, SkyAtmosphere), Z_Construct_UClass_USkyAtmosphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyAtmosphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyAtmosphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphere_Statics::NewProp_ExponentialHeightFog_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtmosphere_Statics::NewProp_ExponentialHeightFog = { "ExponentialHeightFog", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtmosphere, ExponentialHeightFog), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtmosphere_Statics::NewProp_ExponentialHeightFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphere_Statics::NewProp_ExponentialHeightFog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphere_Statics::NewProp_VolumetricCloud_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtmosphere_Statics::NewProp_VolumetricCloud = { "VolumetricCloud", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtmosphere, VolumetricCloud), Z_Construct_UClass_UVolumetricCloudComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtmosphere_Statics::NewProp_VolumetricCloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphere_Statics::NewProp_VolumetricCloud_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtmosphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphere_Statics::NewProp_DirectionalLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphere_Statics::NewProp_SkyAtmosphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphere_Statics::NewProp_ExponentialHeightFog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphere_Statics::NewProp_VolumetricCloud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtmosphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtmosphere>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtmosphere_Statics::ClassParams = {
		&AAtmosphere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAtmosphere_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphere_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtmosphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtmosphere()
	{
		if (!Z_Registration_Info_UClass_AAtmosphere.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtmosphere.OuterSingleton, Z_Construct_UClass_AAtmosphere_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAtmosphere.OuterSingleton;
	}
	template<> FPSPLATFORMER_API UClass* StaticClass<AAtmosphere>()
	{
		return AAtmosphere::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtmosphere);
	struct Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_Atmosphere_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_Atmosphere_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAtmosphere, AAtmosphere::StaticClass, TEXT("AAtmosphere"), &Z_Registration_Info_UClass_AAtmosphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtmosphere), 2910520983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_Atmosphere_h_31677799(TEXT("/Script/FPSPlatformer"),
		Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_Atmosphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_Atmosphere_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
