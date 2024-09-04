#pragma once
#include "Vaisseau.h"
#include "Faction.h"

class FactoryVaisseau
{
public:
	static Vaisseau* getRandomVaisseau();
	static Vaisseau* getRandomVaisseauRang();

private:
	static Faction* getRandomFaction();
};

