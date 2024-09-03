#include "Livraison.h"
Livraison::Livraison() :Vaisseau(1, 2, 3, 4, "Livraison", 2, 5)
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