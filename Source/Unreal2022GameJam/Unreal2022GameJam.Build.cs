// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Unreal2022GameJam : ModuleRules
{
	public Unreal2022GameJam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
