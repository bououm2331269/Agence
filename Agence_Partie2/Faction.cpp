#include "Faction.h"
using std::to_string;

Faction::Faction(int _attaque, int _defense, int _vie, int _capacite)
{
	attaque =_attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
}

Faction::Faction()
{
}



Faction:: ~Faction()
{

}


std::string Faction::to_string()
{
	string info = "\n";
	info.append(" " + nom + "\n");
	return info;
}

