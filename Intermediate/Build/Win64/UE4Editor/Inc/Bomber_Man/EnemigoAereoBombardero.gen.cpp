// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomber_Man/EnemigoAereoBombardero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAereoBombardero() {}
// Cross Module References
	BOMBER_MAN_API UClass* Z_Construct_UClass_AEnemigoAereoBombardero_NoRegister();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AEnemigoAereoBombardero();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AEnemigoAereo();
	UPackage* Z_Construct_UPackage__Script_Bomber_Man();
// End Cross Module References
	void AEnemigoAereoBombardero::StaticRegisterNativesAEnemigoAereoBombardero()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAereoBombardero_NoRegister()
	{
		return AEnemigoAereoBombardero::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAereoBombardero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAereoBombardero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoAereo,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomber_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAereoBombardero_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAereoBombardero.h" },
		{ "ModuleRelativePath", "EnemigoAereoBombardero.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAereoBombardero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAereoBombardero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAereoBombardero_Statics::ClassParams = {
		&AEnemigoAereoBombardero::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAereoBombardero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereoBombardero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAereoBombardero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAereoBombardero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAereoBombardero, 4186949422);
	template<> BOMBER_MAN_API UClass* StaticClass<AEnemigoAereoBombardero>()
	{
		return AEnemigoAereoBombardero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAereoBombardero(Z_Construct_UClass_AEnemigoAereoBombardero, &AEnemigoAereoBombardero::StaticClass, TEXT("/Script/Bomber_Man"), TEXT("AEnemigoAereoBombardero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAereoBombardero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
