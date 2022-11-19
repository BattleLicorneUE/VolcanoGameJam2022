// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/GetUserPrivilegeCallbackProxy.h"
#include "AdvancedSessions/Classes/BlueprintDataDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetUserPrivilegeCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms
		{
			EBPUserPrivileges QueriedPrivilege;
			bool HadPrivilege;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueriedPrivilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QueriedPrivilege;
		static void NewProp_HadPrivilege_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HadPrivilege;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege = { "QueriedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms, QueriedPrivilege), Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges, METADATA_PARAMS(nullptr, 0) }; // 2447095556
	void Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege_SetBit(void* Obj)
	{
		((_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms*)Obj)->HadPrivilege = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege = { "HadPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms), &Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* const &FBPUniqueNetId, PlayerID,*/" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
		{ "ToolTip", "const &FBPUniqueNetId, PlayerID," },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions, nullptr, "BlueprintGetUserPrivilegeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGetUserPrivilegeCallbackProxy::execGetUserPrivilege)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM_REF(EBPUserPrivileges,Z_Param_Out_PrivilegeToCheck);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_PlayerUniqueNetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetUserPrivilegeCallbackProxy**)Z_Param__Result=UGetUserPrivilegeCallbackProxy::GetUserPrivilege(Z_Param_WorldContextObject,(EBPUserPrivileges&)(Z_Param_Out_PrivilegeToCheck),Z_Param_Out_PlayerUniqueNetID);
		P_NATIVE_END;
	}
	void UGetUserPrivilegeCallbackProxy::StaticRegisterNativesUGetUserPrivilegeCallbackProxy()
	{
		UClass* Class = UGetUserPrivilegeCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserPrivilege", &UGetUserPrivilegeCallbackProxy::execGetUserPrivilege },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics
	{
		struct GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms
		{
			UObject* WorldContextObject;
			EBPUserPrivileges PrivilegeToCheck;
			FBPUniqueNetId PlayerUniqueNetID;
			UGetUserPrivilegeCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrivilegeToCheck_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivilegeToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrivilegeToCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerUniqueNetID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerUniqueNetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck = { "PrivilegeToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, PrivilegeToCheck), Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges, METADATA_PARAMS(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_MetaData)) }; // 2447095556
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID = { "PlayerUniqueNetID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, PlayerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID_MetaData)) }; // 766028705
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, ReturnValue), Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedIdentity" },
		{ "Comment", "// Gets the privilage of the user\n" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
		{ "ToolTip", "Gets the privilage of the user" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetUserPrivilegeCallbackProxy, nullptr, "GetUserPrivilege", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms), Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetUserPrivilegeCallbackProxy);
	UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister()
	{
		return UGetUserPrivilegeCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege, "GetUserPrivilege" }, // 392810136
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GetUserPrivilegeCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful destroy\n" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful destroy" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGetUserPrivilegeCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 3751400137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful destroy" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGetUserPrivilegeCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetUserPrivilegeCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::ClassParams = {
		&UGetUserPrivilegeCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UGetUserPrivilegeCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetUserPrivilegeCallbackProxy.OuterSingleton, Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetUserPrivilegeCallbackProxy.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UGetUserPrivilegeCallbackProxy>()
	{
		return UGetUserPrivilegeCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetUserPrivilegeCallbackProxy);
	UGetUserPrivilegeCallbackProxy::~UGetUserPrivilegeCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGetUserPrivilegeCallbackProxy, UGetUserPrivilegeCallbackProxy::StaticClass, TEXT("UGetUserPrivilegeCallbackProxy"), &Z_Registration_Info_UClass_UGetUserPrivilegeCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetUserPrivilegeCallbackProxy), 3868675467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_1755992940(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
