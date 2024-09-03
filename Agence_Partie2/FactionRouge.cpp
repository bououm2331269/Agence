#include "FactionRouge.h"
FactionRouge::FactionRouge() :Faction(20,5,9,21)
{

}
FactionRouge:: ~FactionRouge()
{

}
std::string FactionRouge::to_string()
{
	std::string messageFactionRouge = Faction::to_string();
	messageFactionRouge.append("Je suis de la factionRouge ");
	return messageFactionRouge;
}