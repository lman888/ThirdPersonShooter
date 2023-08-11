// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/ShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterGameMode();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void AShooterGameMode::StaticRegisterNativesAShooterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterGameMode);
	UClass* Z_Construct_UClass_AShooterGameMode_NoRegister()
	{
		return AShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShooterGameMode.h" },
		{ "ModuleRelativePath", "ShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameMode_Statics::ClassParams = {
		&AShooterGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton, Z_Construct_UClass_AShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AShooterGameMode>()
	{
		return AShooterGameMode::StaticClass();
	}
	AShooterGameMode::AShooterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameMode);
	AShooterGameMode::~AShooterGameMode() {}
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGameMode, AShooterGameMode::StaticClass, TEXT("AShooterGameMode"), &Z_Registration_Info_UClass_AShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGameMode), 2448808219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterGameMode_h_1832312113(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
