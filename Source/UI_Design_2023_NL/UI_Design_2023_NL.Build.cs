// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UI_Design_2023_NL : ModuleRules
{
	public UI_Design_2023_NL(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
