// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MistHunter/Public/Animation/Player/AniPlayer.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAniPlayer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MISTHUNTER_API UClass* Z_Construct_UClass_UAniPlayer();
	MISTHUNTER_API UClass* Z_Construct_UClass_UAniPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MistHunter();
// End Cross Module References
	DEFINE_FUNCTION(UAniPlayer::execMovementThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__minCurrentSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param__minMaxSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param__minInputAcceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MovementThreshold(Z_Param__minCurrentSpeed,Z_Param__minMaxSpeed,Z_Param__minInputAcceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAniPlayer::execSetMovementData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAniPlayer::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAniPlayer::execGetMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCharacterMovementComponent**)Z_Param__Result=P_THIS->GetMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAniPlayer::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAniPlayer::execSetOwner)
	{
		P_GET_OBJECT(AActor,Z_Param__actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwner(Z_Param__actor);
		P_NATIVE_END;
	}
	void UAniPlayer::StaticRegisterNativesUAniPlayer()
	{
		UClass* Class = UAniPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMesh", &UAniPlayer::execGetMesh },
			{ "GetMovement", &UAniPlayer::execGetMovement },
			{ "GetOwner", &UAniPlayer::execGetOwner },
			{ "MovementThreshold", &UAniPlayer::execMovementThreshold },
			{ "SetMovementData", &UAniPlayer::execSetMovementData },
			{ "SetOwner", &UAniPlayer::execSetOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAniPlayer_GetMesh_Statics
	{
		struct AniPlayer_eventGetMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AniPlayer_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAniPlayer, nullptr, "GetMesh", nullptr, nullptr, Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::AniPlayer_eventGetMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::AniPlayer_eventGetMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAniPlayer_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAniPlayer_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAniPlayer_GetMovement_Statics
	{
		struct AniPlayer_eventGetMovement_Parms
		{
			UCharacterMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AniPlayer_eventGetMovement_Parms, ReturnValue), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAniPlayer, nullptr, "GetMovement", nullptr, nullptr, Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::AniPlayer_eventGetMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::AniPlayer_eventGetMovement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAniPlayer_GetMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAniPlayer_GetMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAniPlayer_GetOwner_Statics
	{
		struct AniPlayer_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AniPlayer_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAniPlayer, nullptr, "GetOwner", nullptr, nullptr, Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::AniPlayer_eventGetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::AniPlayer_eventGetOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAniPlayer_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAniPlayer_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics
	{
		struct AniPlayer_eventMovementThreshold_Parms
		{
			float _minCurrentSpeed;
			float _minMaxSpeed;
			float _minInputAcceleration;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__minCurrentSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp__minMaxSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp__minInputAcceleration;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp__minCurrentSpeed = { "_minCurrentSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AniPlayer_eventMovementThreshold_Parms, _minCurrentSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp__minMaxSpeed = { "_minMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AniPlayer_eventMovementThreshold_Parms, _minMaxSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp__minInputAcceleration = { "_minInputAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AniPlayer_eventMovementThreshold_Parms, _minInputAcceleration), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AniPlayer_eventMovementThreshold_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AniPlayer_eventMovementThreshold_Parms), &Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp__minCurrentSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp__minMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp__minInputAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAniPlayer, nullptr, "MovementThreshold", nullptr, nullptr, Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::AniPlayer_eventMovementThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::AniPlayer_eventMovementThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAniPlayer_MovementThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAniPlayer_MovementThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAniPlayer_SetMovementData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAniPlayer_SetMovementData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAniPlayer_SetMovementData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAniPlayer, nullptr, "SetMovementData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_SetMovementData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAniPlayer_SetMovementData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAniPlayer_SetMovementData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAniPlayer_SetMovementData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAniPlayer_SetOwner_Statics
	{
		struct AniPlayer_eventSetOwner_Parms
		{
			AActor* _actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp__actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::NewProp__actor = { "_actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AniPlayer_eventSetOwner_Parms, _actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::NewProp__actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAniPlayer, nullptr, "SetOwner", nullptr, nullptr, Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::AniPlayer_eventSetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::AniPlayer_eventSetOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAniPlayer_SetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAniPlayer_SetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAniPlayer);
	UClass* Z_Construct_UClass_UAniPlayer_NoRegister()
	{
		return UAniPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UAniPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lastInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_falling_MetaData[];
#endif
		static void NewProp_falling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_falling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAniPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MistHunter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAniPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAniPlayer_GetMesh, "GetMesh" }, // 1106414468
		{ &Z_Construct_UFunction_UAniPlayer_GetMovement, "GetMovement" }, // 1346427776
		{ &Z_Construct_UFunction_UAniPlayer_GetOwner, "GetOwner" }, // 2631609982
		{ &Z_Construct_UFunction_UAniPlayer_MovementThreshold, "MovementThreshold" }, // 579267196
		{ &Z_Construct_UFunction_UAniPlayer_SetMovementData, "SetMovementData" }, // 3146855374
		{ &Z_Construct_UFunction_UAniPlayer_SetOwner, "SetOwner" }, // 3312249194
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAniPlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/Player/AniPlayer.h" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAniPlayer_Statics::NewProp_velocity_MetaData[] = {
		{ "Category", "AniPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAniPlayer_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAniPlayer, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::NewProp_velocity_MetaData), Z_Construct_UClass_UAniPlayer_Statics::NewProp_velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAniPlayer_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "AniPlayer" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAniPlayer_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAniPlayer, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::NewProp_speed_MetaData), Z_Construct_UClass_UAniPlayer_Statics::NewProp_speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAniPlayer_Statics::NewProp_maxSpeed_MetaData[] = {
		{ "Category", "AniPlayer" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAniPlayer_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAniPlayer, maxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::NewProp_maxSpeed_MetaData), Z_Construct_UClass_UAniPlayer_Statics::NewProp_maxSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAniPlayer_Statics::NewProp_lastInput_MetaData[] = {
		{ "Category", "AniPlayer" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAniPlayer_Statics::NewProp_lastInput = { "lastInput", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAniPlayer, lastInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::NewProp_lastInput_MetaData), Z_Construct_UClass_UAniPlayer_Statics::NewProp_lastInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAniPlayer_Statics::NewProp_falling_MetaData[] = {
		{ "Category", "AniPlayer" },
		{ "ModuleRelativePath", "Public/Animation/Player/AniPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UAniPlayer_Statics::NewProp_falling_SetBit(void* Obj)
	{
		((UAniPlayer*)Obj)->falling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAniPlayer_Statics::NewProp_falling = { "falling", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAniPlayer), &Z_Construct_UClass_UAniPlayer_Statics::NewProp_falling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::NewProp_falling_MetaData), Z_Construct_UClass_UAniPlayer_Statics::NewProp_falling_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAniPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAniPlayer_Statics::NewProp_velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAniPlayer_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAniPlayer_Statics::NewProp_maxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAniPlayer_Statics::NewProp_lastInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAniPlayer_Statics::NewProp_falling,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAniPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAniPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAniPlayer_Statics::ClassParams = {
		&UAniPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAniPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAniPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAniPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAniPlayer()
	{
		if (!Z_Registration_Info_UClass_UAniPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAniPlayer.OuterSingleton, Z_Construct_UClass_UAniPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAniPlayer.OuterSingleton;
	}
	template<> MISTHUNTER_API UClass* StaticClass<UAniPlayer>()
	{
		return UAniPlayer::StaticClass();
	}
	UAniPlayer::UAniPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAniPlayer);
	UAniPlayer::~UAniPlayer() {}
	struct Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAniPlayer, UAniPlayer::StaticClass, TEXT("UAniPlayer"), &Z_Registration_Info_UClass_UAniPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAniPlayer), 2729284986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_4216150834(TEXT("/Script/MistHunter"),
		Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_Animation_Player_AniPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
