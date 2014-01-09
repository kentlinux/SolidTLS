#include "solidtls/asn1.h"
#include <iostream> 

using namespace std;

class ASN1Test: public ASN1CompositeObject
{
private:
	ASN1Integer	a_int1;
	ASN1Integer	a_int2;
public:
	ASN1Test() { a_int1.setValue(1); a_int2.setValue(2);};	
	~ASN1Test() {};	
	void ASN1Encode(ASN1Encoder &e) const;	
	void ASN1Decode(ASN1Encoder &e);
};

void ASN1Test::ASN1Encode(ASN1Encoder &e) const
{
	e<<a_int1<<a_int2;
}

void ASN1Test::ASN1Decode(ASN1Encoder &e)
{
}





class ASN1Test2: public ASN1CompositeObject
{
private:
	ASN1Test	a_t1;
	ASN1Test	a_t2;
	ASN1Integer	a_int;
public:
	ASN1Test2() { a_int.setValue(3);};	
	~ASN1Test2() {};	
	void ASN1Encode(ASN1Encoder &e) const;	
	void ASN1Decode(ASN1Encoder &e);
};

void ASN1Test2::ASN1Encode(ASN1Encoder &e) const
{
	e<<a_t1<<a_int<<a_t2;
}

void ASN1Test2::ASN1Decode(ASN1Encoder &e)
{
}




int main()
{
	cout<<"START"<<endl;

	ASN1Test	a_test;
	ASN1Test2	a_test2;
//	ASN1Encoder	*der_enc = new ASN1DEREncoder();
	ASN1DEREncoder	der_enc;

	der_enc<<a_test2;
	cout<<"STOP"<<endl;

	return 0;
}
