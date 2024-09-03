#pragma once
#include "Vaisseau.h"
#include "Faction.h"

class FactoryVaisseau
{
public:
	static Vaisseau* getRandomVaisseau();

private:
	static Faction* getRandomFaction();
};

