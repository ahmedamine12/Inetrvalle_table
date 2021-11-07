#pragma once
#include <iostream>
#include <assert.h>
using namespace std;
namespace tab
{
	class Tableau
	{
	private:
		float* T;
		int nbrelem;
	public:
		Tableau(int);
		int taille();
		~Tableau();
		Tableau(const Tableau&);
		Tableau& operator=(const Tableau&);
		// cette methode va retourne l'elment 
		float& operator[](const int ind);





	};

}