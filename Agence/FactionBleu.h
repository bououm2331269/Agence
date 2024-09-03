#pragma once
#include "Faction.h"
class FactionBleu:public Faction
{
public:
	FactionBleu();
	~FactionBleu();

	virtual std::string to_string();
};

