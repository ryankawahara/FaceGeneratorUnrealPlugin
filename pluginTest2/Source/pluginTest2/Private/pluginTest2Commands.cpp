// Copyright Epic Games, Inc. All Rights Reserved.

#include "pluginTest2Commands.h"

#define LOCTEXT_NAMESPACE "FpluginTest2Module"

void FpluginTest2Commands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "pluginTest2", "Bring up pluginTest2 window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
