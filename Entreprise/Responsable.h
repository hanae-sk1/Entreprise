#pragma once
#include "Employe.h"
class Responsable :
    public Employe
{
private:
    Employe* inferieurs[20];
    int nb;
public:
    Responsable(string nom, int matricule, int indice);
    void ajouterEmploye(Employe* e);
    void afficherInferieursDirects() const;
    void afficherTousInferieurs() const;

};
