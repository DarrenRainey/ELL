// CompilableScale.h

#pragma once

#include "CompilableLayer.h"

#include "layers.h"
using namespace layers;

/// A struct that adds printing capabilities to a layer
///
struct CompilableScale : public Scale, public CompilableLayer
{
public:
    virtual void BackwardPass() override {};
};