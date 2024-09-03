#pragma once

#include <string>
#include <FactionRouge.h>

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
	FactionRouge faction;


public:
	Vaisseau(int _attaque, int _defense, int _vie, int _capacite, string _nom, int _niveau, int _exp);
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();
	int getCap();
	int getNiveau();
	int getExp();

	virtual string to_string();
};

