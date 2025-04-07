// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomber_Man/EnemigoSubterraneoGusano.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoSubterraneoGusano() {}
// Cross Module References
	BOMBER_MAN_API UClass* Z_Construct_UClass_AEnemigoSubterraneoGusano_NoRegister();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AEnemigoSubterraneoGusano();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AEnemigoSubterraneo();
	UPackage* Z_Construct_UPackage__Script_Bomber_Man();
// End Cross Module References
	void AEnemigoSubterraneoGusano::StaticRegisterNativesAEnemigoSubterraneoGusano()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoSubterraneoGusano_NoRegister()
	{
		return AEnemigoSubterraneoGusano::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoSubterraneoGusano_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoSubterraneoGusano_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoSubterraneo,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomber_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoSubterraneoGusano_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoSubterraneoGusano.h" },
		{ "ModuleRelativePath", "EnemigoSubterraneoGusano.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoSubterraneoGusano_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoSubterraneoGusano>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoSubterraneoGusano_Statics::ClassParams = {
		&AEnemigoSubterraneoGusano::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoSubterraneoGusano_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneoGusano_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoSubterraneoGusano()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoSubterraneoGusano_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoSubterraneoGusano, 2263433037);
	template<> BOMBER_MAN_API UClass* StaticClass<AEnemigoSubterraneoGusano>()
	{
		return AEnemigoSubterraneoGusano::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoSubterraneoGusano(Z_Construct_UClass_AEnemigoSubterraneoGusano, &AEnemigoSubterraneoGusano::StaticClass, TEXT("/Script/Bomber_Man"), TEXT("AEnemigoSubterraneoGusano"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoSubterraneoGusano);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
