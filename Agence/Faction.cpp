#include "Faction.h"
using std::to_string;

Faction::Faction(int _attaque, int _defense, int _vie, int _capacite)
{
	attaque =_attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
}

Faction:: ~Faction()
{

}

int Faction::getAtt()
{
	return attaque;
}

int Faction::getDef()
{
	return defense;
}
int Faction::getVie()
{
	return vie;
}
int Faction::getCap()
{
	return capacite;
}
string Faction::getNom()
{
	return nom;
}

std::string Faction::to_string()
{
	string info = "\n";
	//info.append(" " + nom + "\n");
	return info;
}

