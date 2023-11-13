// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "CustomSettings.h"


class FToolBarBuilder;
class FMenuBuilder;

class FpluginTest2Module : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command (by default it will bring up plugin window) */
	void PluginButtonClicked();

	FReply HelloWorldButtonClicked();
	
private:

	void RegisterMenus();
	UCustomSettings* CustomSettingsObject;


	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

	UCustomSettings* CustomSettings;
	TSharedPtr<class IDetailsView> PropertyWidget;

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
