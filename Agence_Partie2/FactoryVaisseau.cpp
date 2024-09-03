#include "FactoryVaisseau.h"
#include <ctime>
#include <string>
#include "Utilitaire.h"
#include "Guerre.h"
#include "Transport.h"
#include "Livraison.h"
enum class TypeVaisseau
{
	GUERRE,
	TRANSPORT,
	LIVRAISON
};


Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	srand(time(NULL));
	Vaisseau* vaisseau(0);

	Faction* maFaction = getRandomFaction();

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