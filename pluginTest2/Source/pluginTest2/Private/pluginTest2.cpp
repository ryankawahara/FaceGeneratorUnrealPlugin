// Copyright Epic Games, Inc. All Rights Reserved.

#include "pluginTest2.h"
#include "pluginTest2Style.h"
#include "pluginTest2Commands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include "EditorFramework/AssetImportData.h"
#include "Engine/Engine.h"
#include <filesystem>


static const FName pluginTest2TabName("pluginTest2");

#define LOCTEXT_NAMESPACE "FpluginTest2Module"

void FpluginTest2Module::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FpluginTest2Style::Initialize();
	FpluginTest2Style::ReloadTextures();

	FpluginTest2Commands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FpluginTest2Commands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FpluginTest2Module::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FpluginTest2Module::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(pluginTest2TabName, FOnSpawnTab::CreateRaw(this, &FpluginTest2Module::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FpluginTest2TabTitle", "pluginTest2"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FpluginTest2Module::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FpluginTest2Style::Shutdown();

	FpluginTest2Commands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(pluginTest2TabName);
}

TSharedRef<SDockTab> FpluginTest2Module::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FpluginTest2Module::OnSpawnPluginTab")),
		FText::FromString(TEXT("pluginTest2.cpp"))
	);

	// Load our Property Module
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	// FDetailsViewArgs is a struct of settings to customize our Details View Widget
	FDetailsViewArgs Args;
	Args.bHideSelectionTip = true;

	// Create the widget and store it in the PropertyWidget pointer
	PropertyWidget = PropertyModule.CreateDetailView(Args);

	// Important! We set our new Details View to a mutable version of our custom settings.
	CustomSettingsObject = GetMutableDefault<UCustomSettings>();
	PropertyWidget->SetObject(CustomSettingsObject);

	// Create a button widget
	TSharedRef<SButton> HelloWorldButton = SNew(SButton)
		.Text(FText::FromString(TEXT("Hello World")))
		.OnClicked(FOnClicked::CreateRaw(this, &FpluginTest2Module::HelloWorldButtonClicked));

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Use our newly created widgets here!
			SNew(SVerticalBox)

				+ SVerticalBox::Slot()
				.FillHeight(15.0)
				[
					PropertyWidget.ToSharedRef()
				]
				+ SVerticalBox::Slot()
				.FillHeight(2.5)
				.HAlign(HAlign_Center)
				[
					HelloWorldButton
				]
		];
}

FReply FpluginTest2Module::HelloWorldButtonClicked()
{
	// Print "Hello World" to the console


	if (CustomSettingsObject)
	{
		UStaticMesh* SelectedMesh = CustomSettingsObject->CustomMesh;
		if (SelectedMesh)
		{
			//FString MeshName = SelectedMesh->GetPathName();
			FString MeshName = SelectedMesh->AssetImportData->GetFirstFilename();
			UE_LOG(LogTemp, Warning, TEXT("Selected Mesh Name: %s"), *MeshName);
			std::filesystem::path filePath = std::filesystem::current_path();
			std::filesystem::path directory = filePath.parent_path();
			// Replace "other_file.txt" with the name of the different file
			std::filesystem::path differentFile("testScript.py");

			// Append the different file's name to the directory path
			std::filesystem::path combinedPath = directory / differentFile;

			// Convert the combined path to a string and print it
			std::string combinedPathStr = combinedPath.string();
			FString testCommand = FString(combinedPathStr.c_str());
			UE_LOG(LogTemp, Warning, TEXT("Execute: %s"), *testCommand);

			FString command = FString(("py " + combinedPathStr).c_str());


			GEngine->Exec(NULL, *command);



		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Selected Mesh is null"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("CustomSettings is null"));
	}


	/*if (SelectedMesh) {
		UAssetImportData* info = SelectedMesh->AssetImportData;
		if (info) {
			//UE_LOG(LogTemp, Warning, TEXT(SelectedMesh->AssetImportData.GetPath));
			UE_LOG(LogTemp, Warning, TEXT("Hello !"));


		}

	} */




//	UE_LOG(LogTemp, Warning, TEXT(SelectedMesh->AssetImportData.GetPath));




	return FReply::Handled();
}


void FpluginTest2Module::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(pluginTest2TabName);
}

void FpluginTest2Module::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FpluginTest2Commands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FpluginTest2Commands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FpluginTest2Module, pluginTest2)