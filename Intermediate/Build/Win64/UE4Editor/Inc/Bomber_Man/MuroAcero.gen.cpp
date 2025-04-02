// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomber_Man/MuroAcero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroAcero() {}
// Cross Module References
	BOMBER_MAN_API UClass* Z_Construct_UClass_AMuroAcero_NoRegister();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AMuroAcero();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_Bomber_Man();
// End Cross Module References
	void AMuroAcero::StaticRegisterNativesAMuroAcero()
	{
	}
	UClass* Z_Construct_UClass_AMuroAcero_NoRegister()
	{
		return AMuroAcero::StaticClass();
	}
	struct Z_Construct_UClass_AMuroAcero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroAcero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomber_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroAcero_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroAcero.h" },
		{ "ModuleRelativePath", "MuroAcero.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroAcero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroAcero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroAcero_Statics::ClassParams = {
		&AMuroAcero::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroAcero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroAcero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroAcero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroAcero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroAcero, 2441785610);
	template<> BOMBER_MAN_API UClass* StaticClass<AMuroAcero>()
	{
		return AMuroAcero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroAcero(Z_Construct_UClass_AMuroAcero, &AMuroAcero::StaticClass, TEXT("/Script/Bomber_Man"), TEXT("AMuroAcero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroAcero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
