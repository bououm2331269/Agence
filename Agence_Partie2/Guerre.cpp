#include "Guerre.h"

Guerre::Guerre() :Vaisseau(2, 3, 4, 5, "Guerre", 3, 10)
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