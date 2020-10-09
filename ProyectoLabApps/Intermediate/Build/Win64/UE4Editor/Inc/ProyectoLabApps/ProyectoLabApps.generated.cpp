// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProyectoLabApps.h"
#include "ProyectoLabApps.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ProyectoLabApps() {}
	void AProyectoLabAppsGameModeBase::StaticRegisterNativesAProyectoLabAppsGameModeBase()
	{
	}
	IMPLEMENT_CLASS(AProyectoLabAppsGameModeBase, 323323714);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	PROYECTOLABAPPS_API class UClass* Z_Construct_UClass_AProyectoLabAppsGameModeBase_NoRegister();
	PROYECTOLABAPPS_API class UClass* Z_Construct_UClass_AProyectoLabAppsGameModeBase();
	PROYECTOLABAPPS_API class UPackage* Z_Construct_UPackage__Script_ProyectoLabApps();
	UClass* Z_Construct_UClass_AProyectoLabAppsGameModeBase_NoRegister()
	{
		return AProyectoLabAppsGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AProyectoLabAppsGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_ProyectoLabApps();
			OuterClass = AProyectoLabAppsGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProyectoLabAppsGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ProyectoLabAppsGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectoLabAppsGameModeBase(Z_Construct_UClass_AProyectoLabAppsGameModeBase, &AProyectoLabAppsGameModeBase::StaticClass, TEXT("AProyectoLabAppsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectoLabAppsGameModeBase);
	UPackage* Z_Construct_UPackage__Script_ProyectoLabApps()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/ProyectoLabApps")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x7B707DC0;
			Guid.B = 0x2D036D7A;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
