#pragma once

#include <string>
#include "Faction.h"

using std::string;



class Vaisseau
{
private:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	int niveau;
	int exp;
	Faction faction;


public:
	Vaisseau(int _attaque, int _defense, int _vie, int _capacite, string _nom, int _niveau, int _exp);
	Vaisseau();
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();
	int getCap();
	int getNiveau();
	int getExp();

	virtual string to_string();
};

