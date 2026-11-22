#pragma once
#include "Employe.h"
#include<iostream>
using namespace std;
class Commercial :
	public Employe
{
private:
	double ventes;
	static const double TAUX;
public:
	Commercial(string nom, int matricule, int indice, double ventes);
	void setVentes(double v);
	double calculerSalaire() const override;
};
