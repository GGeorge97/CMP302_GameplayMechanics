// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class RTS_BaseBuilderEditorTarget : TargetRules
{
	public RTS_BaseBuilderEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("RTS_BaseBuilder");
	}
}
