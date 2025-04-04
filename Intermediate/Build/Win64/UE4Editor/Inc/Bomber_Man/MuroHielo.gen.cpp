// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomber_Man/MuroHielo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroHielo() {}
// Cross Module References
	BOMBER_MAN_API UClass* Z_Construct_UClass_AMuroHielo_NoRegister();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AMuroHielo();
	BOMBER_MAN_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_Bomber_Man();
// End Cross Module References
	void AMuroHielo::StaticRegisterNativesAMuroHielo()
	{
	}
	UClass* Z_Construct_UClass_AMuroHielo_NoRegister()
	{
		return AMuroHielo::StaticClass();
	}
	struct Z_Construct_UClass_AMuroHielo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroHielo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomber_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroHielo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroHielo.h" },
		{ "ModuleRelativePath", "MuroHielo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroHielo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroHielo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroHielo_Statics::ClassParams = {
		&AMuroHielo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroHielo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroHielo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroHielo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroHielo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroHielo, 3492350185);
	template<> BOMBER_MAN_API UClass* StaticClass<AMuroHielo>()
	{
		return AMuroHielo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroHielo(Z_Construct_UClass_AMuroHielo, &AMuroHielo::StaticClass, TEXT("/Script/Bomber_Man"), TEXT("AMuroHielo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroHielo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
