#include "solidtls/asn1_der.h"

#include <iostream>

ASN1Encoder& ASN1DEREncoder::operator<<(const ASN1CompositeObject &a)
{
	a.ASN1Encode(*this);
	return *this;	
};

ASN1Encoder& ASN1DEREncoder::operator<<(const ASN1Integer &a)
{
	std::cout<<"int:"<<a.getValue()<<std::endl;
	return *this;	
};
