#include "Livraison.h"
Livraison::Livraison(Faction* faction) :Vaisseau(faction)
{

}
Livraison:: ~Livraison()
{

}

std::string Livraison::to_string()
{
	std::string messageLivraison = Vaisseau::to_string();
	messageLivraison.append("Je suis un robot de livraison ");
	return messageLivraison;
}