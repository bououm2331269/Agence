#pragma once
#include <vector>
#include "Vaisseau.h"
using std::vector;
class Station
{
private:
	int platinumDisponible;
	int vieStation;

	//Vaisseau disponible dans la station
	vector<Vaisseau*> vecVaisseau;
public :
	Station();
	~Station();

	vector<Vaisseau*> getVaisseauDispo();
	void init();
	void AjouterVaisseau(Vaisseau* vaisseau);
};

