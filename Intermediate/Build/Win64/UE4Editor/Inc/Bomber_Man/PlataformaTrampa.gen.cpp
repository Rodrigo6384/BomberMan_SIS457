// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomber_Man/PlataformaTrampa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataformaTrampa() {}
// Cross Module References
	BOMBER_MAN_API UClass* Z_Construct_UClass_APlataformaTrampa_NoRegister();
	BOMBER_MAN_API UClass* Z_Construct_UClass_APlataformaTrampa();
	BOMBER_MAN_API UClass* Z_Construct_UClass_APlataforma();
	UPackage* Z_Construct_UPackage__Script_Bomber_Man();
// End Cross Module References
	void APlataformaTrampa::StaticRegisterNativesAPlataformaTrampa()
	{
	}
	UClass* Z_Construct_UClass_APlataformaTrampa_NoRegister()
	{
		return APlataformaTrampa::StaticClass();
	}
	struct Z_Construct_UClass_APlataformaTrampa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangoMovimientoMinimo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangoMovimientoMinimo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangoMovimientoMaximo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangoMovimientoMaximo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlataformaTrampa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlataforma,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomber_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformaTrampa_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlataformaTrampa.h" },
		{ "ModuleRelativePath", "PlataformaTrampa.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMinimo_MetaData[] = {
		{ "Category", "PlataformaTrampa" },
		{ "ModuleRelativePath", "PlataformaTrampa.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMinimo = { "RangoMovimientoMinimo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlataformaTrampa, RangoMovimientoMinimo), METADATA_PARAMS(Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMinimo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMinimo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMaximo_MetaData[] = {
		{ "Category", "PlataformaTrampa" },
		{ "ModuleRelativePath", "PlataformaTrampa.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMaximo = { "RangoMovimientoMaximo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlataformaTrampa, RangoMovimientoMaximo), METADATA_PARAMS(Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMaximo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMaximo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlataformaTrampa_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMinimo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformaTrampa_Statics::NewProp_RangoMovimientoMaximo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlataformaTrampa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataformaTrampa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlataformaTrampa_Statics::ClassParams = {
		&APlataformaTrampa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlataformaTrampa_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaTrampa_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlataformaTrampa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaTrampa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlataformaTrampa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlataformaTrampa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlataformaTrampa, 231494736);
	template<> BOMBER_MAN_API UClass* StaticClass<APlataformaTrampa>()
	{
		return APlataformaTrampa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlataformaTrampa(Z_Construct_UClass_APlataformaTrampa, &APlataformaTrampa::StaticClass, TEXT("/Script/Bomber_Man"), TEXT("APlataformaTrampa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlataformaTrampa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
