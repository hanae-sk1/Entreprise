
#include <iostream>
#include "Employe.h"
using namespace std;

class Personnel {
private:
    Employe* employes[100];
    int nb;

public:
    Personnel();
    void ajouter(Employe* e);
    double calculerTotalSalaires() const;
};