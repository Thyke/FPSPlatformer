// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPlatformer/FPSPlatformerGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlatformerGameModeBase() {}
// Cross Module References
	FPSPLATFORMER_API UClass* Z_Construct_UClass_AFPSPlatformerGameModeBase_NoRegister();
	FPSPLATFORMER_API UClass* Z_Construct_UClass_AFPSPlatformerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPSPlatformer();
// End Cross Module References
	void AFPSPlatformerGameModeBase::StaticRegisterNativesAFPSPlatformerGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSPlatformerGameModeBase);
	UClass* Z_Construct_UClass_AFPSPlatformerGameModeBase_NoRegister()
	{
		return AFPSPlatformerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlatformerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlatformerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPlatformer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlatformerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSPlatformerGameModeBase.h" },
		{ "ModuleRelativePath", "FPSPlatformerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlatformerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlatformerGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlatformerGameModeBase_Statics::ClassParams = {
		&AFPSPlatformerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlatformerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlatformerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlatformerGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFPSPlatformerGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSPlatformerGameModeBase.OuterSingleton, Z_Construct_UClass_AFPSPlatformerGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSPlatformerGameModeBase.OuterSingleton;
	}
	template<> FPSPLATFORMER_API UClass* StaticClass<AFPSPlatformerGameModeBase>()
	{
		return AFPSPlatformerGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlatformerGameModeBase);
	struct Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_FPSPlatformerGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_FPSPlatformerGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSPlatformerGameModeBase, AFPSPlatformerGameModeBase::StaticClass, TEXT("AFPSPlatformerGameModeBase"), &Z_Registration_Info_UClass_AFPSPlatformerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSPlatformerGameModeBase), 4209568853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_FPSPlatformerGameModeBase_h_2567600817(TEXT("/Script/FPSPlatformer"),
		Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_FPSPlatformerGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPSPlatformer_Source_FPSPlatformer_FPSPlatformerGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
