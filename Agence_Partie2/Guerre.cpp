#include "Guerre.h"

Guerre::Guerre(Faction* faction):Vaisseau(faction)
{

}
Guerre:: ~Guerre()
{

}

std::string Guerre::to_string()
{
	std::string messageGuerre = Vaisseau::to_string();
	messageGuerre.append("Je suis un robot de guerre ");
	return messageGuerre;
}