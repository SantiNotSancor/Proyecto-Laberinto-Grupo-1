// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProyectoLaberinto/ProyectoLaberintoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectoLaberintoGameModeBase() {}
// Cross Module References
	PROYECTOLABERINTO_API UClass* Z_Construct_UClass_AProyectoLaberintoGameModeBase_NoRegister();
	PROYECTOLABERINTO_API UClass* Z_Construct_UClass_AProyectoLaberintoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProyectoLaberinto();
// End Cross Module References
	void AProyectoLaberintoGameModeBase::StaticRegisterNativesAProyectoLaberintoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProyectoLaberintoGameModeBase_NoRegister()
	{
		return AProyectoLaberintoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProyectoLaberintoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectoLaberintoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProyectoLaberinto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoLaberintoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProyectoLaberintoGameModeBase.h" },
		{ "ModuleRelativePath", "ProyectoLaberintoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectoLaberintoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectoLaberintoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectoLaberintoGameModeBase_Statics::ClassParams = {
		&AProyectoLaberintoGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProyectoLaberintoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoLaberintoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectoLaberintoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectoLaberintoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectoLaberintoGameModeBase, 751486362);
	template<> PROYECTOLABERINTO_API UClass* StaticClass<AProyectoLaberintoGameModeBase>()
	{
		return AProyectoLaberintoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectoLaberintoGameModeBase(Z_Construct_UClass_AProyectoLaberintoGameModeBase, &AProyectoLaberintoGameModeBase::StaticClass, TEXT("/Script/ProyectoLaberinto"), TEXT("AProyectoLaberintoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectoLaberintoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
