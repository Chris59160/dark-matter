#pragma once

#include "IType.h"

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "UObject/Interface.h"

#include "ICharacterType.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UCharacterType : public UType
{
    GENERATED_BODY()
};

class ICharacterType
{
    GENERATED_BODY()

public:
    /** Add interface function declarations here */
};