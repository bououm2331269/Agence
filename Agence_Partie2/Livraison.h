#pragma once
#include "Vaisseau.h"
class Livraison :public Vaisseau
{
public:
	Livraison();
	~Livraison();

	virtual std::string to_string();
};

