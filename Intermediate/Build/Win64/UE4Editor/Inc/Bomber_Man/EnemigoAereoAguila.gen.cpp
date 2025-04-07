// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomber_Man/EnemigoAereoAguila.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAereoAguila() {}
// Cross Module References
	BOMBER_MAN_API UClass* Z_Construct_UClass_AEnemigoAereoAguila_NoRegister();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AEnemigoAereoAguila();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AEnemigoAereo();
	UPackage* Z_Construct_UPackage__Script_Bomber_Man();
// End Cross Module References
	void AEnemigoAereoAguila::StaticRegisterNativesAEnemigoAereoAguila()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAereoAguila_NoRegister()
	{
		return AEnemigoAereoAguila::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAereoAguila_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAereoAguila_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoAereo,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomber_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAereoAguila_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAereoAguila.h" },
		{ "ModuleRelativePath", "EnemigoAereoAguila.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAereoAguila_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAereoAguila>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAereoAguila_Statics::ClassParams = {
		&AEnemigoAereoAguila::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAereoAguila_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereoAguila_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAereoAguila()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAereoAguila_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAereoAguila, 2090881098);
	template<> BOMBER_MAN_API UClass* StaticClass<AEnemigoAereoAguila>()
	{
		return AEnemigoAereoAguila::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAereoAguila(Z_Construct_UClass_AEnemigoAereoAguila, &AEnemigoAereoAguila::StaticClass, TEXT("/Script/Bomber_Man"), TEXT("AEnemigoAereoAguila"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAereoAguila);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
