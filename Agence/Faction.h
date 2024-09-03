#pragma once

#include <string>

using std::string;

class Faction
{
private:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	

public:
	Faction(int _attaque, int _defense, int _vie, int _capacite);
	~Faction();

	string getNom();
	int getAtt();
	int getDef();
	int getVie();
	int getCap();
	
	virtual string to_string();
};

