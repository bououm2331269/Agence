#include "Vaisseau.h"
#include "Faction.h"

using std::to_string;

Vaisseau::Vaisseau(int _attaque, int _defense, int _vie, int _capacite, string _nom, int _niveau, int _exp, Faction* _faction)
{
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
	nom = _nom;
	niveau = _niveau;
	exp = _exp;
	faction = _faction;

}


Vaisseau::Vaisseau(Faction* _faction)
{
	faction = _faction;
	attaque = 0;
	defense = 1;
	vie = 2;
	capacite = 3;
	nom = 4;
	niveau = 5;
	exp = 6;
}

Vaisseau:: ~Vaisseau()
{
	delete faction;
}


int Vaisseau::getAtt()
{
	return attaque+=faction->attaque;
}

int Vaisseau::getDef()
{
	return defense+=faction->defense;
}
int Vaisseau::getVie()
{
	return vie+=faction->vie;
}
int Vaisseau::getCap()
{
	return capacite;
}
int Vaisseau::getNiveau()
{
	return niveau;
}
int Vaisseau::getExp()
{
	return exp;
}



std::string Vaisseau::to_string()
{
	string info = "\n";
	info.append("Attaque: " + std::to_string(this->getAtt()) + "\n");
	info.append("Defense : " + std::to_string(this->getDef()) + "\n");
	info.append("Vie : " + std::to_string(this->getVie()) + "\n");
	info.append("Capacite : " + std::to_string(this->getCap()) + "\n");
	info.append("Nom: " + nom + "\n");
	info.append("Niveau : " + std::to_string(this->getNiveau()) + "\n");
	info.append("Exp: " + std::to_string(this->getExp()) + "\n");
	return info;
}