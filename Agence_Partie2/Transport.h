#pragma once
#include "Vaisseau.h"

class Transport:public Vaisseau
{
public:
	Transport(Faction* faction);
	~Transport();

	virtual std::string to_string();
};


