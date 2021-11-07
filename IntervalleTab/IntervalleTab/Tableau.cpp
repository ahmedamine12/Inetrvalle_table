#include "pch.h"
#include "Tableau.h"
using namespace tab;

Tableau::Tableau(int taille)
{
	this->nbrelem = taille;
	this->T = new float(taille);
}

int tab::Tableau::taille()
{
	return this->nbrelem;
}

Tableau::~Tableau()
{
	delete this->T;
	this->T = 0;
}

Tableau::Tableau(const Tableau& tn)
{
	this->nbrelem = tn.nbrelem;
	if (this->T)
	{
		delete this->T;
		this->T = 0;

	}
	this->T = new float(*tn.T);
}

Tableau& Tableau::operator=(const Tableau& nt)
{
	if (this != &nt)
	{
		this->nbrelem = nt.nbrelem;
		if (this->T)
		{
			delete this->T;
			this->T = 0;
		}

	}
	return *this;
	
}

float& Tableau::operator[](const int ind)
{
	assert( this->nbrelem > ind);
	return this->T[ind];
}
