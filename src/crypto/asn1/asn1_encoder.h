#pragma once
#include "solidtls/asn1_types.h"

class ASN1Encoder{
public:
	virtual ASN1Encoder& operator<<(const ASN1Integer &a) = 0;
	virtual ASN1Encoder& operator<<(const ASN1CompositeObject &a) = 0;
	virtual ~ASN1Encoder() {};
};

