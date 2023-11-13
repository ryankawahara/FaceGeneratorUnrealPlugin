// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "pluginTest2Style.h"

class FpluginTest2Commands : public TCommands<FpluginTest2Commands>
{
public:

	FpluginTest2Commands()
		: TCommands<FpluginTest2Commands>(TEXT("pluginTest2"), NSLOCTEXT("Contexts", "pluginTest2", "pluginTest2 Plugin"), NAME_None, FpluginTest2Style::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};