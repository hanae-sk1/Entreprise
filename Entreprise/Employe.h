#pragma once
#include<iostream>
using namespace std;
class Employe
{
protected:
	string nom;
	int matricule;
	int indice;
	static double valeurPoint;
public:
	Employe(string nom, int matricule, int indice);
	virtual void afficher()const;
	virtual double calculerSalaire() const;
	static void setValeurPoint(double v);
	virtual ~Employe();
};