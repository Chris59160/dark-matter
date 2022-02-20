// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "UObject/Interface.h"

#include "IType.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UTestInterface : public UInterface
{
    GENERATED_BODY()
};

class ITestInterface
{
    GENERATED_BODY()

public:
    /** Add interface function declarations here */
};
