#pragma once

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "UObject/Interface.h"

#include "IType.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UType : public UInterface
{
    GENERATED_BODY()
};

class IType
{
    GENERATED_BODY()

public:
    /** Add interface function declarations here */
};