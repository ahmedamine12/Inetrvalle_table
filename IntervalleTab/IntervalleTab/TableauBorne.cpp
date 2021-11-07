#include "pch.h"
#include "TableauBorne.h"

TableauBorne::TableauBorne(float ma , float mi, int taille):Tableau(taille)
{
	this->max = ma;
	this->min = mi;

}

float& TableauBorne::operator[](const int ind)
{
	return this->Tableau::operator[](ind);
	

}

TableauBorne& TableauBorne::operator()(const int ind, float newval)
{
	if (ind > this->taille() ||this. )

		return *this;
}
