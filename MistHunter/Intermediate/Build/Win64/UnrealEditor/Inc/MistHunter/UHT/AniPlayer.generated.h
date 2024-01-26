// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/Player/AniPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UCharacterMovementComponent;
class USkeletalMeshComponent;
#ifdef MISTHUNTER_AniPlayer_generated_h
#error "AniPlayer.generated.h already included, missing '#pragma once' in AniPlayer.h"
#endif
#define MISTHUNTER_AniPlayer_generated_h

#define FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_SPARSE_DATA
#define FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMovementThreshold); \
	DECLARE_FUNCTION(execSetMovementData); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetMovement); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execSetOwner);


#define FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_ACCESSORS
#define FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAniPlayer(); \
	friend struct Z_Construct_UClass_UAniPlayer_Statics; \
public: \
	DECLARE_CLASS(UAniPlayer, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MistHunter"), NO_API) \
	DECLARE_SERIALIZER(UAniPlayer)


#define FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAniPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAniPlayer(UAniPlayer&&); \
	NO_API UAniPlayer(const UAniPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAniPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAniPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAniPlayer) \
	NO_API virtual ~UAniPlayer();


#define FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_15_PROLOG
#define FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_SPARSE_DATA \
	FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_ACCESSORS \
	FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_INCLASS_NO_PURE_DECLS \
	FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MISTHUNTER_API UClass* StaticClass<class UAniPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
