#pragma once
#include "Vaisseau.h"
class Guerre :public Vaisseau
{
public:
	Guerre();
	~Guerre();

	virtual std::string to_string();
};

