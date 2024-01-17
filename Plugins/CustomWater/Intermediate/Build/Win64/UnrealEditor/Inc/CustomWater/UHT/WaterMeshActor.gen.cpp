// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomWater/Public/WaterMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterMeshActor() {}
// Cross Module References
	CUSTOMWATER_API UClass* Z_Construct_UClass_AWaterMeshActor();
	CUSTOMWATER_API UClass* Z_Construct_UClass_AWaterMeshActor_NoRegister();
	CUSTOMWATER_API UClass* Z_Construct_UClass_UWaterMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CustomWater();
// End Cross Module References
	void AWaterMeshActor::StaticRegisterNativesAWaterMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterMeshActor);
	UClass* Z_Construct_UClass_AWaterMeshActor_NoRegister()
	{
		return AWaterMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AWaterMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomWater,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterMeshActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterMeshActor.h" },
		{ "ModuleRelativePath", "Public/WaterMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterMeshActor_Statics::NewProp_CustomComponent_MetaData[] = {
		{ "Category", "WaterMeshActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterMeshActor_Statics::NewProp_CustomComponent = { "CustomComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterMeshActor, CustomComponent), Z_Construct_UClass_UWaterMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterMeshActor_Statics::NewProp_CustomComponent_MetaData), Z_Construct_UClass_AWaterMeshActor_Statics::NewProp_CustomComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMeshActor_Statics::NewProp_CustomComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterMeshActor_Statics::ClassParams = {
		&AWaterMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWaterMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaterMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaterMeshActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterMeshActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWaterMeshActor()
	{
		if (!Z_Registration_Info_UClass_AWaterMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterMeshActor.OuterSingleton, Z_Construct_UClass_AWaterMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterMeshActor.OuterSingleton;
	}
	template<> CUSTOMWATER_API UClass* StaticClass<AWaterMeshActor>()
	{
		return AWaterMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterMeshActor);
	AWaterMeshActor::~AWaterMeshActor() {}
	struct Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWaterMeshActor, AWaterMeshActor::StaticClass, TEXT("AWaterMeshActor"), &Z_Registration_Info_UClass_AWaterMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterMeshActor), 724511469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshActor_h_2157311311(TEXT("/Script/CustomWater"),
		Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomProject___3_Plugins_CustomWater_Source_CustomWater_Public_WaterMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
