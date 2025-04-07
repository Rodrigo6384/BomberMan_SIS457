// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomber_Man/PlataformaElevador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataformaElevador() {}
// Cross Module References
	BOMBER_MAN_API UClass* Z_Construct_UClass_APlataformaElevador_NoRegister();
	BOMBER_MAN_API UClass* Z_Construct_UClass_APlataformaElevador();
	BOMBER_MAN_API UClass* Z_Construct_UClass_APlataforma();
	UPackage* Z_Construct_UPackage__Script_Bomber_Man();
// End Cross Module References
	void APlataformaElevador::StaticRegisterNativesAPlataformaElevador()
	{
	}
	UClass* Z_Construct_UClass_APlataformaElevador_NoRegister()
	{
		return APlataformaElevador::StaticClass();
	}
	struct Z_Construct_UClass_APlataformaElevador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlturaMaxima_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlturaMaxima;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlturaMinima_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlturaMinima;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlataformaElevador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlataforma,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomber_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformaElevador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlataformaElevador.h" },
		{ "ModuleRelativePath", "PlataformaElevador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMaxima_MetaData[] = {
		{ "Category", "PlataformaElevador" },
		{ "ModuleRelativePath", "PlataformaElevador.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMaxima = { "AlturaMaxima", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlataformaElevador, AlturaMaxima), METADATA_PARAMS(Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMaxima_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMaxima_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMinima_MetaData[] = {
		{ "Category", "PlataformaElevador" },
		{ "ModuleRelativePath", "PlataformaElevador.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMinima = { "AlturaMinima", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlataformaElevador, AlturaMinima), METADATA_PARAMS(Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMinima_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMinima_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformaElevador_Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "Category", "PlataformaElevador" },
		{ "ModuleRelativePath", "PlataformaElevador.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlataformaElevador_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlataformaElevador, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_APlataformaElevador_Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaElevador_Statics::NewProp_VelocidadMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlataformaElevador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMaxima,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformaElevador_Statics::NewProp_AlturaMinima,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataformaElevador_Statics::NewProp_VelocidadMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlataformaElevador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataformaElevador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlataformaElevador_Statics::ClassParams = {
		&APlataformaElevador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlataformaElevador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaElevador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlataformaElevador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformaElevador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlataformaElevador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlataformaElevador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlataformaElevador, 2407805774);
	template<> BOMBER_MAN_API UClass* StaticClass<APlataformaElevador>()
	{
		return APlataformaElevador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlataformaElevador(Z_Construct_UClass_APlataformaElevador, &APlataformaElevador::StaticClass, TEXT("/Script/Bomber_Man"), TEXT("APlataformaElevador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlataformaElevador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
