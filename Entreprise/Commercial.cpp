#include "Commercial.h"
#include<iostream>
using namespace std;

Commercial::Commercial(string nom, int matricule, int indice, double ventes) : Employe(nom, matricule, indice)
{
	this->ventes = ventes;
}

void Commercial::setVentes(double v)
{
	this->ventes = v;
}

double Commercial::calculerSalaire() const
{
	return Employe::calculerSalaire() + TAUX * ventes;
}