#pragma once

#include <string>

using std::string;

class Faction
{
public:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	

public:
	Faction(int _attaque, int _defense, int _vie, int _capacite);
	Faction();
	~Faction();

	int getAtt();

	int getDef();

	int getVie();

	int getCap();

	string getNom();

	virtual string to_string();
};

