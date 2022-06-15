// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/GeometrySandboxGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySandboxGameModeBase() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometrySandboxGameModeBase_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometrySandboxGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
// End Cross Module References
	void AGeometrySandboxGameModeBase::StaticRegisterNativesAGeometrySandboxGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometrySandboxGameModeBase);
	UClass* Z_Construct_UClass_AGeometrySandboxGameModeBase_NoRegister()
	{
		return AGeometrySandboxGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGeometrySandboxGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometrySandboxGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometrySandboxGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GeometrySandboxGameModeBase.h" },
		{ "ModuleRelativePath", "GeometrySandboxGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometrySandboxGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometrySandboxGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometrySandboxGameModeBase_Statics::ClassParams = {
		&AGeometrySandboxGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeometrySandboxGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometrySandboxGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometrySandboxGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGeometrySandboxGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometrySandboxGameModeBase.OuterSingleton, Z_Construct_UClass_AGeometrySandboxGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometrySandboxGameModeBase.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<AGeometrySandboxGameModeBase>()
	{
		return AGeometrySandboxGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometrySandboxGameModeBase);
	struct Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_GeometrySandboxGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_GeometrySandboxGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometrySandboxGameModeBase, AGeometrySandboxGameModeBase::StaticClass, TEXT("AGeometrySandboxGameModeBase"), &Z_Registration_Info_UClass_AGeometrySandboxGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometrySandboxGameModeBase), 2612983621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_GeometrySandboxGameModeBase_h_2574611326(TEXT("/Script/GeometrySandbox"),
		Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_GeometrySandboxGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_GeometrySandboxGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
