// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySandbox_init() {}
	GEOMETRYSANDBOX_API UFunction* Z_Construct_UDelegateFunction_GeometrySandbox_OnColorChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GeometrySandbox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GeometrySandbox()
	{
		if (!Z_Registration_Info_UPackage__Script_GeometrySandbox.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometrySandbox_OnColorChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GeometrySandbox",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0C82C515,
				0xE8F0F8A4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GeometrySandbox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GeometrySandbox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GeometrySandbox(Z_Construct_UPackage__Script_GeometrySandbox, TEXT("/Script/GeometrySandbox"), Z_Registration_Info_UPackage__Script_GeometrySandbox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0C82C515, 0xE8F0F8A4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
