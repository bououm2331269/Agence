#include "Transport.h"

Transport::Transport(Faction* faction):Vaisseau(faction)
{

}
Transport:: ~Transport()
{

}

std::string Transport::to_string()
{
	std::string messageTransport = Vaisseau::to_string();
	messageTransport.append("Je suis un robot de transport ");
	return messageTransport;
}