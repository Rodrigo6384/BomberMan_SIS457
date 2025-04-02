// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomber_Man/MuroBurbuja.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroBurbuja() {}
// Cross Module References
	BOMBER_MAN_API UClass* Z_Construct_UClass_AMuroBurbuja_NoRegister();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AMuroBurbuja();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_Bomber_Man();
// End Cross Module References
	void AMuroBurbuja::StaticRegisterNativesAMuroBurbuja()
	{
	}
	UClass* Z_Construct_UClass_AMuroBurbuja_NoRegister()
	{
		return AMuroBurbuja::StaticClass();
	}
	struct Z_Construct_UClass_AMuroBurbuja_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroBurbuja_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomber_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroBurbuja_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroBurbuja.h" },
		{ "ModuleRelativePath", "MuroBurbuja.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroBurbuja_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroBurbuja>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroBurbuja_Statics::ClassParams = {
		&AMuroBurbuja::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroBurbuja_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroBurbuja_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroBurbuja()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroBurbuja_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroBurbuja, 1652068501);
	template<> BOMBER_MAN_API UClass* StaticClass<AMuroBurbuja>()
	{
		return AMuroBurbuja::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroBurbuja(Z_Construct_UClass_AMuroBurbuja, &AMuroBurbuja::StaticClass, TEXT("/Script/Bomber_Man"), TEXT("AMuroBurbuja"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroBurbuja);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
