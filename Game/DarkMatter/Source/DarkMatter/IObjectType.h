#pragma once

#include "IType.h"

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "UObject/Interface.h"

#include "IObjectType.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UObjectType : public UType
{
    GENERATED_BODY()
};

class IObjectType
{
    GENERATED_BODY()

public:
    /** Add interface function declarations here */
};
