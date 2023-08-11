// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/BTService_playerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_playerLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_UBTService_playerLocation();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_UBTService_playerLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void UBTService_playerLocation::StaticRegisterNativesUBTService_playerLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_playerLocation);
	UClass* Z_Construct_UClass_UBTService_playerLocation_NoRegister()
	{
		return UBTService_playerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_playerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_playerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_playerLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_playerLocation.h" },
		{ "ModuleRelativePath", "BTService_playerLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_playerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_playerLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_playerLocation_Statics::ClassParams = {
		&UBTService_playerLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_playerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_playerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_playerLocation()
	{
		if (!Z_Registration_Info_UClass_UBTService_playerLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_playerLocation.OuterSingleton, Z_Construct_UClass_UBTService_playerLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_playerLocation.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<UBTService_playerLocation>()
	{
		return UBTService_playerLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_playerLocation);
	UBTService_playerLocation::~UBTService_playerLocation() {}
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_playerLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_playerLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_playerLocation, UBTService_playerLocation::StaticClass, TEXT("UBTService_playerLocation"), &Z_Registration_Info_UClass_UBTService_playerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_playerLocation), 1163947246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_playerLocation_h_4216466042(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_playerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_playerLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
