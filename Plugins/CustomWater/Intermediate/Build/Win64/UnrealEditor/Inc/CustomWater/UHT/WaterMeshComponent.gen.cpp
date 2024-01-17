// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomWater/Public/WaterMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterMeshComponent() {}
// Cross Module References
	CUSTOMWATER_API UClass* Z_Construct_UClass_UWaterMeshComponent();
	CUSTOMWATER_API UClass* Z_Construct_UClass_UWaterMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CustomWater();
// End Cross Module References
	void UWaterMeshComponent::StaticRegisterNativesUWaterMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterMeshComponent);
	UClass* Z_Construct_UClass_UWaterMeshComponent_NoRegister()
	{
		return UWaterMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomWater,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WaterMeshComponent.h" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterMeshComponent_Statics::ClassParams = {
		&UWaterMeshComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaterMeshComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWaterMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterMeshComponent.OuterSingleton, Z_Construct_UClass_UWaterMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterMeshComponent.OuterSingleton;
	}
	template<> CUSTOMWATER_API UClass* StaticClass<UWaterMeshComponent>()
	{
		return UWaterMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterMeshComponent);
	UWaterMeshComponent::~UWaterMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterMeshComponent, UWaterMeshComponent::StaticClass, TEXT("UWaterMeshComponent"), &Z_Registration_Info_UClass_UWaterMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterMeshComponent), 3428297540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshComponent_h_643545726(TEXT("/Script/CustomWater"),
		Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
