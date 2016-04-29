// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTOR_BatteryPickup_generated_h
#error "BatteryPickup.generated.h already included, missing '#pragma once' in BatteryPickup.h"
#endif
#define BATTERYCOLLECTOR_BatteryPickup_generated_h

#define BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_RPC_WRAPPERS
#define BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesABatteryPickup(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryPickup(); \
	public: \
	DECLARE_CLASS(ABatteryPickup, APickup, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ABatteryPickup) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesABatteryPickup(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryPickup(); \
	public: \
	DECLARE_CLASS(ABatteryPickup, APickup, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ABatteryPickup) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryPickup); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ABatteryPickup(const ABatteryPickup& InCopy); \
public:


#define BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ABatteryPickup(const ABatteryPickup& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryPickup)


#define BatteryCollector_Source_BatteryCollector_BatteryPickup_h_11_PROLOG
#define BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_INCLASS \
	BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryPickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_BatteryPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS