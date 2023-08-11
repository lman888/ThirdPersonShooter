// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/MasterGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterGun() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AMasterGun();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AMasterGun_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void AMasterGun::StaticRegisterNativesAMasterGun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterGun);
	UClass* Z_Construct_UClass_AMasterGun_NoRegister()
	{
		return AMasterGun::StaticClass();
	}
	struct Z_Construct_UClass_AMasterGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_muzzleSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_muzzleSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_impactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_muzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_muzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_impactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gunDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gunDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MasterGun.h" },
		{ "ModuleRelativePath", "MasterGun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleSound_MetaData[] = {
		{ "Category", "Sound Effect" },
		{ "ModuleRelativePath", "MasterGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleSound = { "muzzleSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMasterGun, muzzleSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGun_Statics::NewProp_impactSound_MetaData[] = {
		{ "Category", "Sound Effect" },
		{ "ModuleRelativePath", "MasterGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterGun_Statics::NewProp_impactSound = { "impactSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMasterGun, impactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterGun_Statics::NewProp_impactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::NewProp_impactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGun_Statics::NewProp_root_MetaData[] = {
		{ "Category", "MasterGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MasterGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterGun_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMasterGun, root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterGun_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGun_Statics::NewProp_skeletalComponent_MetaData[] = {
		{ "Category", "MasterGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MasterGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterGun_Statics::NewProp_skeletalComponent = { "skeletalComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMasterGun, skeletalComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterGun_Statics::NewProp_skeletalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::NewProp_skeletalComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleFlash_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "MasterGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleFlash = { "muzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMasterGun, muzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGun_Statics::NewProp_impactEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "MasterGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterGun_Statics::NewProp_impactEffect = { "impactEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMasterGun, impactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterGun_Statics::NewProp_impactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::NewProp_impactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGun_Statics::NewProp_maxRange_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "MasterGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterGun_Statics::NewProp_maxRange = { "maxRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMasterGun, maxRange), METADATA_PARAMS(Z_Construct_UClass_AMasterGun_Statics::NewProp_maxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::NewProp_maxRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGun_Statics::NewProp_gunDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MasterGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterGun_Statics::NewProp_gunDamage = { "gunDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMasterGun, gunDamage), METADATA_PARAMS(Z_Construct_UClass_AMasterGun_Statics::NewProp_gunDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::NewProp_gunDamage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGun_Statics::NewProp_impactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGun_Statics::NewProp_root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGun_Statics::NewProp_skeletalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGun_Statics::NewProp_muzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGun_Statics::NewProp_impactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGun_Statics::NewProp_maxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGun_Statics::NewProp_gunDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterGun_Statics::ClassParams = {
		&AMasterGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMasterGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterGun()
	{
		if (!Z_Registration_Info_UClass_AMasterGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterGun.OuterSingleton, Z_Construct_UClass_AMasterGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterGun.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AMasterGun>()
	{
		return AMasterGun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterGun);
	AMasterGun::~AMasterGun() {}
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_MasterGun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_MasterGun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterGun, AMasterGun::StaticClass, TEXT("AMasterGun"), &Z_Registration_Info_UClass_AMasterGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterGun), 4119368893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_MasterGun_h_282572964(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_MasterGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_MasterGun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
