// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MistHunter/Public/State/Player/StMachinePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStMachinePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MISTHUNTER_API UClass* Z_Construct_UClass_AStMachinePlayer();
	MISTHUNTER_API UClass* Z_Construct_UClass_AStMachinePlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MistHunter();
// End Cross Module References
	void AStMachinePlayer::StaticRegisterNativesAStMachinePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStMachinePlayer);
	UClass* Z_Construct_UClass_AStMachinePlayer_NoRegister()
	{
		return AStMachinePlayer::StaticClass();
	}
	struct Z_Construct_UClass_AStMachinePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStMachinePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MistHunter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStMachinePlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStMachinePlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "State/Player/StMachinePlayer.h" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStMachinePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStMachinePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStMachinePlayer_Statics::ClassParams = {
		&AStMachinePlayer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStMachinePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AStMachinePlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AStMachinePlayer()
	{
		if (!Z_Registration_Info_UClass_AStMachinePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStMachinePlayer.OuterSingleton, Z_Construct_UClass_AStMachinePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStMachinePlayer.OuterSingleton;
	}
	template<> MISTHUNTER_API UClass* StaticClass<AStMachinePlayer>()
	{
		return AStMachinePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStMachinePlayer);
	struct Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_State_Player_StMachinePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_State_Player_StMachinePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStMachinePlayer, AStMachinePlayer::StaticClass, TEXT("AStMachinePlayer"), &Z_Registration_Info_UClass_AStMachinePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStMachinePlayer), 708682589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_State_Player_StMachinePlayer_h_669043186(TEXT("/Script/MistHunter"),
		Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_State_Player_StMachinePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_State_Player_StMachinePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
