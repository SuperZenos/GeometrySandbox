// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/SandboxPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSandboxPawn() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ASandboxPawn_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ASandboxPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ASandboxPawn::StaticRegisterNativesASandboxPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASandboxPawn);
	UClass* Z_Construct_UClass_ASandboxPawn_NoRegister()
	{
		return ASandboxPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASandboxPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASandboxPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SandboxPawn.h" },
		{ "ModuleRelativePath", "Public/SandboxPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPawn_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "SandboxPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SandboxPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASandboxPawn_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASandboxPawn, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASandboxPawn_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPawn_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPawn_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "SandboxPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SandboxPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASandboxPawn_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASandboxPawn, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASandboxPawn_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPawn_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "SandboxPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SandboxPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASandboxPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASandboxPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASandboxPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPawn_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "SandboxPawn" },
		{ "ModuleRelativePath", "Public/SandboxPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASandboxPawn_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASandboxPawn, Velocity), METADATA_PARAMS(Z_Construct_UClass_ASandboxPawn_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPawn_Statics::NewProp_Velocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASandboxPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASandboxPawn_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASandboxPawn_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASandboxPawn_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASandboxPawn_Statics::NewProp_Velocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASandboxPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASandboxPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASandboxPawn_Statics::ClassParams = {
		&ASandboxPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASandboxPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASandboxPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASandboxPawn()
	{
		if (!Z_Registration_Info_UClass_ASandboxPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASandboxPawn.OuterSingleton, Z_Construct_UClass_ASandboxPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASandboxPawn.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<ASandboxPawn>()
	{
		return ASandboxPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASandboxPawn);
	struct Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASandboxPawn, ASandboxPawn::StaticClass, TEXT("ASandboxPawn"), &Z_Registration_Info_UClass_ASandboxPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASandboxPawn), 124352669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPawn_h_1470141646(TEXT("/Script/GeometrySandbox"),
		Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
