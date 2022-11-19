// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SendFriendInviteCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;
class USendFriendInviteCallbackProxy;
struct FBPUniqueNetId;
#ifdef ADVANCEDSESSIONS_SendFriendInviteCallbackProxy_generated_h
#error "SendFriendInviteCallbackProxy.generated.h already included, missing '#pragma once' in SendFriendInviteCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_SendFriendInviteCallbackProxy_generated_h

#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_11_DELEGATE \
static inline void FBlueprintSendFriendInviteDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintSendFriendInviteDelegate) \
{ \
	BlueprintSendFriendInviteDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_SPARSE_DATA
#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendFriendInvite);


#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendFriendInvite);


#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_ACCESSORS
#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSendFriendInviteCallbackProxy(); \
	friend struct Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USendFriendInviteCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(USendFriendInviteCallbackProxy)


#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSendFriendInviteCallbackProxy(); \
	friend struct Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USendFriendInviteCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(USendFriendInviteCallbackProxy)


#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API USendFriendInviteCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendFriendInviteCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, USendFriendInviteCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendFriendInviteCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API USendFriendInviteCallbackProxy(USendFriendInviteCallbackProxy&&); \
	ADVANCEDSESSIONS_API USendFriendInviteCallbackProxy(const USendFriendInviteCallbackProxy&); \
public: \
	ADVANCEDSESSIONS_API virtual ~USendFriendInviteCallbackProxy();


#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API USendFriendInviteCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API USendFriendInviteCallbackProxy(USendFriendInviteCallbackProxy&&); \
	ADVANCEDSESSIONS_API USendFriendInviteCallbackProxy(const USendFriendInviteCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, USendFriendInviteCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendFriendInviteCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendFriendInviteCallbackProxy) \
	ADVANCEDSESSIONS_API virtual ~USendFriendInviteCallbackProxy();


#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_13_PROLOG
#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_SPARSE_DATA \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_RPC_WRAPPERS \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_ACCESSORS \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_INCLASS \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_SPARSE_DATA \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_ACCESSORS \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
	FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SendFriendInviteCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class USendFriendInviteCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GIT_PROJECTS_VolcanoGameJam2022_Plugins_AdvancedSessionSteam_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
