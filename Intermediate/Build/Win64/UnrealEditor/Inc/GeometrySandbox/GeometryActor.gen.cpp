// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/GeometryActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryActor() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometryActor_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
// End Cross Module References
	void AGeometryActor::StaticRegisterNativesAGeometryActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryActor);
	UClass* Z_Construct_UClass_AGeometryActor_NoRegister()
	{
		return AGeometryActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryActor.h" },
		{ "ModuleRelativePath", "Public/GeometryActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryActor_Statics::ClassParams = {
		&AGeometryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryActor()
	{
		if (!Z_Registration_Info_UClass_AGeometryActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryActor.OuterSingleton, Z_Construct_UClass_AGeometryActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometryActor.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<AGeometryActor>()
	{
		return AGeometryActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryActor);
	struct Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryActor, AGeometryActor::StaticClass, TEXT("AGeometryActor"), &Z_Registration_Info_UClass_AGeometryActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryActor), 1876663958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryActor_h_3325713697(TEXT("/Script/GeometrySandbox"),
		Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
