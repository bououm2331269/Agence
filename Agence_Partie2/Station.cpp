#include "Station.h"
#include "FactoryVaisseau.h"
Station::Station()
{
	platinumDisponible = 2;
	vieStation = 1;
}

Station:: ~Station()
{

}
void Station::init()
{
	for (int i = 0; i < 3; i++)
	{
		AjouterVaisseau(FactoryVaisseau::getRandomVaisseau());
	}
}
vector<Vaisseau*> Station::getVaisseauDispo()
{
	return vecVaisseau;
}
void Station::AjouterVaisseau(Vaisseau* vaisseau)
{
	vecVaisseau.push_back(vaisseau);
}
