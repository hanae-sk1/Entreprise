#include "Personnel.h"
#include<iostream>
using namespace std;

Personnel::Personnel()
{
    this->nb = 0;
}

void Personnel::ajouter(Employe* e)
{
    if (this->nb < 100) {
        this->employes[this->nb] = e;
        this->nb++;
    }
    else {
        cout << "Impossible d'ajouter un employe" << endl;
    }
}

double Personnel::calculerTotalSalaires() const
{
    double total = 0.0;

    for (int i = 0; i < this->nb; i++) {
        total += this->employes[i]->calculerSalaire();
    }

    return total;
}