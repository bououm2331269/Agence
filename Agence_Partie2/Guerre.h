#pragma once
#include "Vaisseau.h"
class Guerre :public Vaisseau
{
public:
	Guerre(Faction* faction);
	~Guerre();

	virtual std::string to_string();
};

