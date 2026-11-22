#include "Responsable.h"
#include <iostream>
using namespace std;

Responsable::Responsable(string nom, int matricule, int indice) :Employe(nom, matricule, indice)
{
	this->nb = 0;
}

void Responsable::ajouterEmploye(Employe* e)
{
	if (this->nb < 20) {
		this->inferieurs[nb] = e;
		this->nb++;
	}
	else {
		cout << "Impossible d'ajouter un employe" << endl;
	}
}

void Responsable::afficherInferieursDirects() const
{
	cout << "Inferieurs directs de " << nom << ":" << endl;
	for (int i = 0; i < this->nb; i++) {
		this->inferieurs[i]->afficher();
	}
}

void Responsable::afficherTousInferieurs() const
{
	cout << "Tous les inferieurs de " << nom << ":" << endl;
	for (int i = 0; i < this->nb; i++) {
		this->inferieurs[i]->afficher();
		Responsable* r = dynamic_cast<Responsable*>(this->inferieurs[i]);
		if (r != nullptr) {
			r->afficherTousInferieurs();
		}
	}
}