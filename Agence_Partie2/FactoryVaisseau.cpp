#include "FactoryVaisseau.h"
#include <ctime>
#include <string>
#include "Utilitaire.h"
#include "Guerre.h"
#include "Transport.h"
#include "Livraison.h"
#include "FactionRouge.h"
#include "FactionBleu.h"
#include <iostream>
enum class TypeVaisseau
{
	GUERRE,
	TRANSPORT,
	LIVRAISON
};
enum class TypeRang
{
	JUNIOR,
	SENIOR,
	VETERAN
};
Faction* FactoryVaisseau :: getRandomFaction()
{
	srand(time(NULL));
	Faction* faction(0);
	int nbreAleatoire =(int)Utilitaire::genererNb(1, 3);
	if (nbreAleatoire == 1) 
	{
		faction = new FactionRouge();
	}
	else 
	{
		faction = new FactionBleu();
	}
	return faction;
}
Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	srand(time(NULL));
	Vaisseau* vaisseau(0);

	Faction* maFaction = getRandomFaction();
	std::cout << maFaction->to_string();
	TypeVaisseau typeV = (TypeVaisseau)Utilitaire::genererNb(0, 3);
	if (typeV == TypeVaisseau::GUERRE)
	{
		vaisseau = new Guerre(maFaction);
	}
	else if(typeV == TypeVaisseau::TRANSPORT)
	{
		vaisseau = new Transport(maFaction);
	}
	else
	{
		vaisseau = new Livraison(maFaction);
	}
	return vaisseau;
}

Vaisseau* FactoryVaisseau::getRandomVaisseauRang()
{
	srand(time(NULL));
	Vaisseau* vaisseau(0);

	Faction* maFaction = getRandomFaction();
	std::cout << maFaction->to_string();
	TypeRang typeV = (TypeRang)Utilitaire::genererNb(0, 3);
	if (typeV == TypeRang::JUNIOR)
	{
		vaisseau = new Guerre(maFaction);
	}
	else if (typeV == TypeRang::SENIOR)
	{
		vaisseau = new Transport(maFaction);
	}
	else
	{
		vaisseau = new Livraison(maFaction);
	}
	return vaisseau;
}