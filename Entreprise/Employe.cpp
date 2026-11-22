#include "Employe.h"
#include<iostream>
using namespace std;
double Employe::valeurPoint = 10.0;

Employe::Employe(string nom, int matricule, int indice)
{
	this->nom = nom;
	this->matricule = matricule;
	this->indice = indice;
}

void Employe::afficher() const
{
	cout << "nom :" << nom << endl;
	cout << "matricule:" << matricule << endl;
	cout << "indice:" << indice << endl;
	cout << "Salaire:" << calculerSalaire() << endl;
}

double Employe::calculerSalaire() const
{
	return indice * valeurPoint;
}

void Employe::setValeurPoint(double v)
{
	valeurPoint = v;
}

Employe::~Employe()
{
}