// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CustomSettings.generated.h"

UCLASS(BlueprintType, config = EditorPerProjectUserSettings)
class PLUGINTEST2_API UCustomSettings : public UObject
{
    GENERATED_BODY()
public:

    UPROPERTY(EditAnywhere, Category = "Custom Settings")
    UTexture2D* InputFaceImage;

//    UPROPERTY(EditAnywhere, Category = "Custom Settings")
//    float CustomFloat;

//    UPROPERTY(EditAnywhere, Category = "Other Settings")
//    bool CustomBool;

    UFUNCTION(BlueprintCallable, CallInEditor, Category = "Custom Settings")
    void PrintHelloToConsole()
    {
        // Print "Hello" to the console
        UE_LOG(LogTemp, Warning, TEXT("Hello"));
    }
    public:
    // Getter function to access the private CustomMesh variable
    UFUNCTION(BlueprintCallable, Category = "Custom Settings")
    double GetCustomMesh() const
    {
  //      return CustomMesh;
        return 5.12;

    }
};