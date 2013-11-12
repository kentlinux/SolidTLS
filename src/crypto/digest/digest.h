#pragma once
class Digest {
public:
    virtual int transform() = 0;
	virtual ~Digest() {};
};