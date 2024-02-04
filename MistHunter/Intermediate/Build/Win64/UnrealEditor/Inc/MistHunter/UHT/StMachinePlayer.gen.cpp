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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MISTHUNTER_API UClass* Z_Construct_UClass_AStMachinePlayer();
	MISTHUNTER_API UClass* Z_Construct_UClass_AStMachinePlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MistHunter();
// End Cross Module References
	DEFINE_FUNCTION(AStMachinePlayer::execStateSprintEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StateSprintEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStMachinePlayer::execStateSprintStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StateSprintStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStMachinePlayer::execStateLook)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__inputX);
		P_GET_PROPERTY(FFloatProperty,Z_Param__inputY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StateLook(Z_Param__inputX,Z_Param__inputY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStMachinePlayer::execStateMoveEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StateMoveEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStMachinePlayer::execStateMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__inputX);
		P_GET_PROPERTY(FFloatProperty,Z_Param__inputY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StateMove(Z_Param__inputX,Z_Param__inputY);
		P_NATIVE_END;
	}
	static FName NAME_AStMachinePlayer_SetAnimStateIdle = FName(TEXT("SetAnimStateIdle"));
	void AStMachinePlayer::SetAnimStateIdle()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStMachinePlayer_SetAnimStateIdle),NULL);
	}
	static FName NAME_AStMachinePlayer_SetAnimStateJog = FName(TEXT("SetAnimStateJog"));
	void AStMachinePlayer::SetAnimStateJog()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStMachinePlayer_SetAnimStateJog),NULL);
	}
	static FName NAME_AStMachinePlayer_SetAnimStatePivot = FName(TEXT("SetAnimStatePivot"));
	void AStMachinePlayer::SetAnimStatePivot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStMachinePlayer_SetAnimStatePivot),NULL);
	}
	static FName NAME_AStMachinePlayer_SetAnimStateWalk = FName(TEXT("SetAnimStateWalk"));
	void AStMachinePlayer::SetAnimStateWalk()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStMachinePlayer_SetAnimStateWalk),NULL);
	}
	void AStMachinePlayer::StaticRegisterNativesAStMachinePlayer()
	{
		UClass* Class = AStMachinePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StateLook", &AStMachinePlayer::execStateLook },
			{ "StateMove", &AStMachinePlayer::execStateMove },
			{ "StateMoveEnd", &AStMachinePlayer::execStateMoveEnd },
			{ "StateSprintEnd", &AStMachinePlayer::execStateSprintEnd },
			{ "StateSprintStart", &AStMachinePlayer::execStateSprintStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStMachinePlayer_SetAnimStateIdle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStMachinePlayer_SetAnimStateIdle_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Player Animation Idle" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStMachinePlayer_SetAnimStateIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStMachinePlayer, nullptr, "SetAnimStateIdle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_SetAnimStateIdle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStMachinePlayer_SetAnimStateIdle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AStMachinePlayer_SetAnimStateIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStMachinePlayer_SetAnimStateIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStMachinePlayer_SetAnimStateJog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStMachinePlayer_SetAnimStateJog_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Player Animation Jog" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStMachinePlayer_SetAnimStateJog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStMachinePlayer, nullptr, "SetAnimStateJog", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_SetAnimStateJog_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStMachinePlayer_SetAnimStateJog_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AStMachinePlayer_SetAnimStateJog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStMachinePlayer_SetAnimStateJog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStMachinePlayer_SetAnimStatePivot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStMachinePlayer_SetAnimStatePivot_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Player Animation Pivot" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStMachinePlayer_SetAnimStatePivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStMachinePlayer, nullptr, "SetAnimStatePivot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_SetAnimStatePivot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStMachinePlayer_SetAnimStatePivot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AStMachinePlayer_SetAnimStatePivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStMachinePlayer_SetAnimStatePivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStMachinePlayer_SetAnimStateWalk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStMachinePlayer_SetAnimStateWalk_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Player Animation Walk" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStMachinePlayer_SetAnimStateWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStMachinePlayer, nullptr, "SetAnimStateWalk", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_SetAnimStateWalk_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStMachinePlayer_SetAnimStateWalk_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AStMachinePlayer_SetAnimStateWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStMachinePlayer_SetAnimStateWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics
	{
		struct StMachinePlayer_eventStateLook_Parms
		{
			float _inputX;
			float _inputY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__inputX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp__inputY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::NewProp__inputX = { "_inputX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StMachinePlayer_eventStateLook_Parms, _inputX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::NewProp__inputY = { "_inputY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StMachinePlayer_eventStateLook_Parms, _inputY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::NewProp__inputX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::NewProp__inputY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStMachinePlayer, nullptr, "StateLook", nullptr, nullptr, Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::StMachinePlayer_eventStateLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::StMachinePlayer_eventStateLook_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AStMachinePlayer_StateLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStMachinePlayer_StateLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics
	{
		struct StMachinePlayer_eventStateMove_Parms
		{
			float _inputX;
			float _inputY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__inputX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp__inputY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::NewProp__inputX = { "_inputX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StMachinePlayer_eventStateMove_Parms, _inputX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::NewProp__inputY = { "_inputY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StMachinePlayer_eventStateMove_Parms, _inputY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::NewProp__inputX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::NewProp__inputY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//STATES\n" },
#endif
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "STATES" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStMachinePlayer, nullptr, "StateMove", nullptr, nullptr, Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::StMachinePlayer_eventStateMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::StMachinePlayer_eventStateMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AStMachinePlayer_StateMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStMachinePlayer_StateMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStMachinePlayer_StateMoveEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStMachinePlayer_StateMoveEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStMachinePlayer_StateMoveEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStMachinePlayer, nullptr, "StateMoveEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_StateMoveEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStMachinePlayer_StateMoveEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AStMachinePlayer_StateMoveEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStMachinePlayer_StateMoveEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStMachinePlayer_StateSprintEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStMachinePlayer_StateSprintEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStMachinePlayer_StateSprintEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStMachinePlayer, nullptr, "StateSprintEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_StateSprintEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStMachinePlayer_StateSprintEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AStMachinePlayer_StateSprintEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStMachinePlayer_StateSprintEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStMachinePlayer_StateSprintStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStMachinePlayer_StateSprintStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStMachinePlayer_StateSprintStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStMachinePlayer, nullptr, "StateSprintStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStMachinePlayer_StateSprintStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStMachinePlayer_StateSprintStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AStMachinePlayer_StateSprintStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStMachinePlayer_StateSprintStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStMachinePlayer);
	UClass* Z_Construct_UClass_AStMachinePlayer_NoRegister()
	{
		return AStMachinePlayer::StaticClass();
	}
	struct Z_Construct_UClass_AStMachinePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSprint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetMoveRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetMoveRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStMachinePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MistHunter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStMachinePlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AStMachinePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStMachinePlayer_SetAnimStateIdle, "SetAnimStateIdle" }, // 297305537
		{ &Z_Construct_UFunction_AStMachinePlayer_SetAnimStateJog, "SetAnimStateJog" }, // 1595448434
		{ &Z_Construct_UFunction_AStMachinePlayer_SetAnimStatePivot, "SetAnimStatePivot" }, // 909618320
		{ &Z_Construct_UFunction_AStMachinePlayer_SetAnimStateWalk, "SetAnimStateWalk" }, // 1001782769
		{ &Z_Construct_UFunction_AStMachinePlayer_StateLook, "StateLook" }, // 1214484847
		{ &Z_Construct_UFunction_AStMachinePlayer_StateMove, "StateMove" }, // 254835520
		{ &Z_Construct_UFunction_AStMachinePlayer_StateMoveEnd, "StateMoveEnd" }, // 3967951328
		{ &Z_Construct_UFunction_AStMachinePlayer_StateSprintEnd, "StateSprintEnd" }, // 3019584186
		{ &Z_Construct_UFunction_AStMachinePlayer_StateSprintStart, "StateSprintStart" }, // 2540693108
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStMachinePlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStMachinePlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "State/Player/StMachinePlayer.h" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_maxSprint_MetaData[] = {
		{ "Category", "StMachinePlayer" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_maxSprint = { "maxSprint", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStMachinePlayer, maxSprint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_maxSprint_MetaData), Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_maxSprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_targetMoveRotation_MetaData[] = {
		{ "Category", "StMachinePlayer" },
		{ "ModuleRelativePath", "Public/State/Player/StMachinePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_targetMoveRotation = { "targetMoveRotation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStMachinePlayer, targetMoveRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_targetMoveRotation_MetaData), Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_targetMoveRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStMachinePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_maxSprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStMachinePlayer_Statics::NewProp_targetMoveRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStMachinePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStMachinePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStMachinePlayer_Statics::ClassParams = {
		&AStMachinePlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStMachinePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStMachinePlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStMachinePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AStMachinePlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStMachinePlayer_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AStMachinePlayer, AStMachinePlayer::StaticClass, TEXT("AStMachinePlayer"), &Z_Registration_Info_UClass_AStMachinePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStMachinePlayer), 1006070161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_State_Player_StMachinePlayer_h_118767863(TEXT("/Script/MistHunter"),
		Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_State_Player_StMachinePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_MistHunter_MistHunter_Source_MistHunter_Public_State_Player_StMachinePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
