// Copyright Epic Games, Inc. All Rights Reserved.
using System;
using System.IO;
using UnrealBuildTool;

public class FPSchatTest : ModuleRules
{
	public FPSchatTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "StreamChat","VivoxCore" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bool bFasterWithoutUnity = true;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
		LoadPhoton(Target);
	}
	
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}
	private string PhotonPath
	{
		get { return Path.GetFullPath(Path.Combine(ModulePath, "..", "Photon")); }
	}
	private string PlatformString
	{
		get { return Target.Platform == UnrealTargetPlatform.Win64 ? "x64" : "Win32"; }
	}
	private void AddPhotonLibPathWin(ReadOnlyTargetRules Target, string name)
	{
		PublicAdditionalLibraries.Add(Path.Combine(PhotonPath, "lib", "Windows", name + "-cpp_vc16_release_windows_md_" + PlatformString + ".lib"));
	}
	
	public bool LoadPhoton(ReadOnlyTargetRules Target)
	{
	if (Target.Platform == UnrealTargetPlatform.Win64)
	{
			PublicDefinitions.Add("_EG_WINDOWS_PLATFORM");
			//AddPhotonLibPathWin(Target, "Common");
			//AddPhotonLibPathWin(Target, "Photon");
			AddPhotonLibPathWin(Target, "Chat");
	}
	// Include path
	PublicIncludePaths.Add(Path.Combine(PhotonPath, "."));
	return true;
	}
}
