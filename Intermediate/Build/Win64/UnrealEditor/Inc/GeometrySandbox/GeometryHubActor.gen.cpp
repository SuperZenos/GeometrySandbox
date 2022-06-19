// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/GeometryHubActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryHubActor() {}
// Cross Module References
	GEOMETRYSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryPayload();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister();
	GEOMETRYSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometryHubActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryPayload;
class UScriptStruct* FGeometryPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryPayload, Z_Construct_UPackage__Script_GeometrySandbox(), TEXT("GeometryPayload"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryPayload.OuterSingleton;
}
template<> GEOMETRYSANDBOX_API UScriptStruct* StaticStruct<FGeometryPayload>()
{
	return FGeometryPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GeometryClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_GeometryClass_MetaData[] = {
		{ "Category", "GeometryPayload" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_GeometryClass = { "GeometryClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayload, GeometryClass), Z_Construct_UClass_ABaseGeometryActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_GeometryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_GeometryClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "GeometryPayload" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayload, Data), Z_Construct_UScriptStruct_FGeometryData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data_MetaData)) }; // 197633474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Category", "GeometryPayload" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayload, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_GeometryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
		nullptr,
		&NewStructOps,
		"GeometryPayload",
		sizeof(FGeometryPayload),
		alignof(FGeometryPayload),
		Z_Construct_UScriptStruct_FGeometryPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryPayload.InnerSingleton, Z_Construct_UScriptStruct_FGeometryPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryPayload.InnerSingleton;
	}
	void AGeometryHubActor::StaticRegisterNativesAGeometryHubActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryHubActor);
	UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister()
	{
		return AGeometryHubActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryHubActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryPayloads_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryPayloads_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryPayloads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GeometryClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryHubActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryHubActor.h" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_Inner = { "GeometryPayloads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGeometryPayload, METADATA_PARAMS(nullptr, 0) }; // 1631392462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_MetaData[] = {
		{ "Category", "GeometryHubActor" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads = { "GeometryPayloads", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, GeometryPayloads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_MetaData)) }; // 1631392462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass_MetaData[] = {
		{ "Category", "GeometryHubActor" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass = { "GeometryClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, GeometryClass), Z_Construct_UClass_ABaseGeometryActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryHubActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryHubActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams = {
		&AGeometryHubActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryHubActor()
	{
		if (!Z_Registration_Info_UClass_AGeometryHubActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryHubActor.OuterSingleton, Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometryHubActor.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<AGeometryHubActor>()
	{
		return AGeometryHubActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryHubActor);
	struct Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryHubActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryHubActor_h_Statics::ScriptStructInfo[] = {
		{ FGeometryPayload::StaticStruct, Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewStructOps, TEXT("GeometryPayload"), &Z_Registration_Info_UScriptStruct_GeometryPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryPayload), 1631392462U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryHubActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryHubActor, AGeometryHubActor::StaticClass, TEXT("AGeometryHubActor"), &Z_Registration_Info_UClass_AGeometryHubActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryHubActor), 2634231659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryHubActor_h_1870360338(TEXT("/Script/GeometrySandbox"),
		Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryHubActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryHubActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryHubActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_GeometryHubActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
