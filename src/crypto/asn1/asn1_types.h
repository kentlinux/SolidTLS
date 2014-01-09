#pragma once

class ASN1Encoder;

class ASN1Object{
public:
	virtual ~ASN1Object() {};
};

class ASN1PrimitiveObject: public ASN1Object{
public:
	virtual ~ASN1PrimitiveObject() {};
};

class ASN1CompositeObject: public ASN1Object{
public:
	virtual ~ASN1CompositeObject() {};
	virtual void ASN1Encode(ASN1Encoder &e) const = 0;
        virtual void ASN1Decode(ASN1Encoder &e) = 0;
};

class ASN1Integer: public ASN1PrimitiveObject{
private:
	int	value;
public:
	virtual ~ASN1Integer() {};
	void setValue(const int value) {this->value = value;};
	int getValue() const {return value;};
};

class ASN1ObjectIdentifier: public ASN1PrimitiveObject{
private:
	int	value;
public:
	virtual ~ASN1ObjectIdentifier() {};
	void setValue(const int value) {this->value = value;};
	int getValue() const {return value;};
};

