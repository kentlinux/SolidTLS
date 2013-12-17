#pragma once
#include "digest.h"

class MD5: public Digest {
public:
    int transform();
};
