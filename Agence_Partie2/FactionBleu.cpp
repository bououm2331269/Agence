#include "FactionBleu.h"
#include<ctime>

FactionBleu::FactionBleu() :Faction (2,5,12,10)
{

}

FactionBleu:: ~FactionBleu()
{

}

std::string FactionBleu::to_string()
{
	std::string messageFactionBleu = Faction::to_string();
	messageFactionBleu.append("Je suis de la factionBleu ");
	return messageFactionBleu;
}

