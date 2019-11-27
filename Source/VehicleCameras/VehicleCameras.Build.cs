// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VehicleCameras : ModuleRules
{
	public VehicleCameras(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "PhysXVehicles", "HeadMountedDisplay" });
		PublicDependencyModuleNames.AddRange(new string[] { "Json", "JsonUtilities" });
		PublicDefinitions.Add("HMD_MODULE_INCLUDED=1");
	}
}
