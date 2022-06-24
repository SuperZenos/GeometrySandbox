// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/SandboxPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSandboxPlayerController() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ASandboxPlayerController_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ASandboxPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASandboxPlayerController::StaticRegisterNativesASandboxPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASandboxPlayerController);
	UClass* Z_Construct_UClass_ASandboxPlayerController_NoRegister()
	{
		return ASandboxPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASandboxPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pawns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPawnIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPawnIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASandboxPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SandboxPlayerController.h" },
		{ "ModuleRelativePath", "Public/SandboxPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_Inner = { "Pawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/SandboxPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns = { "Pawns", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASandboxPlayerController, Pawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_CurrentPawnIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SandboxPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_CurrentPawnIndex = { "CurrentPawnIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASandboxPlayerController, CurrentPawnIndex), METADATA_PARAMS(Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_CurrentPawnIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_CurrentPawnIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASandboxPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_CurrentPawnIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASandboxPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASandboxPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASandboxPlayerController_Statics::ClassParams = {
		&ASandboxPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASandboxPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASandboxPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASandboxPlayerController()
	{
		if (!Z_Registration_Info_UClass_ASandboxPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASandboxPlayerController.OuterSingleton, Z_Construct_UClass_ASandboxPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASandboxPlayerController.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<ASandboxPlayerController>()
	{
		return ASandboxPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASandboxPlayerController);
	struct Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASandboxPlayerController, ASandboxPlayerController::StaticClass, TEXT("ASandboxPlayerController"), &Z_Registration_Info_UClass_ASandboxPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASandboxPlayerController), 3984541898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPlayerController_h_4212507235(TEXT("/Script/GeometrySandbox"),
		Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_SandboxPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
