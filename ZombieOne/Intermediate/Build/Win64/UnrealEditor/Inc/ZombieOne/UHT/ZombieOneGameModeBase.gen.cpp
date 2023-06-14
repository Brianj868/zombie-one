// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZombieOne/ZombieOneGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieOneGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ZombieOne();
	ZOMBIEONE_API UClass* Z_Construct_UClass_AZombieOneGameModeBase();
	ZOMBIEONE_API UClass* Z_Construct_UClass_AZombieOneGameModeBase_NoRegister();
// End Cross Module References
	void AZombieOneGameModeBase::StaticRegisterNativesAZombieOneGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieOneGameModeBase);
	UClass* Z_Construct_UClass_AZombieOneGameModeBase_NoRegister()
	{
		return AZombieOneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AZombieOneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieOneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZombieOne,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieOneGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ZombieOneGameModeBase.h" },
		{ "ModuleRelativePath", "ZombieOneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieOneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieOneGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieOneGameModeBase_Statics::ClassParams = {
		&AZombieOneGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieOneGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieOneGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieOneGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AZombieOneGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieOneGameModeBase.OuterSingleton, Z_Construct_UClass_AZombieOneGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZombieOneGameModeBase.OuterSingleton;
	}
	template<> ZOMBIEONE_API UClass* StaticClass<AZombieOneGameModeBase>()
	{
		return AZombieOneGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieOneGameModeBase);
	AZombieOneGameModeBase::~AZombieOneGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_brian_OneDrive_Documents_GitHub_zombie_one_ZombieOne_Source_ZombieOne_ZombieOneGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_brian_OneDrive_Documents_GitHub_zombie_one_ZombieOne_Source_ZombieOne_ZombieOneGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZombieOneGameModeBase, AZombieOneGameModeBase::StaticClass, TEXT("AZombieOneGameModeBase"), &Z_Registration_Info_UClass_AZombieOneGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieOneGameModeBase), 36605690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_brian_OneDrive_Documents_GitHub_zombie_one_ZombieOne_Source_ZombieOne_ZombieOneGameModeBase_h_4119886858(TEXT("/Script/ZombieOne"),
		Z_CompiledInDeferFile_FID_Users_brian_OneDrive_Documents_GitHub_zombie_one_ZombieOne_Source_ZombieOne_ZombieOneGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_brian_OneDrive_Documents_GitHub_zombie_one_ZombieOne_Source_ZombieOne_ZombieOneGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
