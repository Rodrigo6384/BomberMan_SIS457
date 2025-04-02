// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomber_Man/Bomber_ManGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomber_ManGameMode() {}
// Cross Module References
	BOMBER_MAN_API UClass* Z_Construct_UClass_ABomber_ManGameMode_NoRegister();
	BOMBER_MAN_API UClass* Z_Construct_UClass_ABomber_ManGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bomber_Man();
// End Cross Module References
	void ABomber_ManGameMode::StaticRegisterNativesABomber_ManGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABomber_ManGameMode_NoRegister()
	{
		return ABomber_ManGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABomber_ManGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomber_ManGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomber_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomber_ManGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Bomber_ManGameMode.h" },
		{ "ModuleRelativePath", "Bomber_ManGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomber_ManGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomber_ManGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomber_ManGameMode_Statics::ClassParams = {
		&ABomber_ManGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABomber_ManGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomber_ManGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomber_ManGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomber_ManGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomber_ManGameMode, 3055886560);
	template<> BOMBER_MAN_API UClass* StaticClass<ABomber_ManGameMode>()
	{
		return ABomber_ManGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomber_ManGameMode(Z_Construct_UClass_ABomber_ManGameMode, &ABomber_ManGameMode::StaticClass, TEXT("/Script/Bomber_Man"), TEXT("ABomber_ManGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomber_ManGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
