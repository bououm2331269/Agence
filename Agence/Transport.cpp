#include "Transport.h"

Transport::Transport():Vaisseau(0,1,2,3,"Transport",1,3)
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