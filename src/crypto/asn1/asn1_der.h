#pragma once
#include "solidtls/asn1_encoder.h"
#include "solidtls/asn1_types.h"

class ASN1DEREncoder: public ASN1Encoder{
public:
	virtual ASN1Encoder& operator<<(const ASN1CompositeObject &a);
	virtual ASN1Encoder& operator<<(const ASN1Integer &a);
	virtual ~ASN1DEREncoder() {};
};
