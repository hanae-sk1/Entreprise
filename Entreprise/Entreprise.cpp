// Entreprise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employe.h"
#include "Commercial.h"
#include "Responsable.h"
#include "Personnel.h"
using namespace std;

int main() {
    Employe e1("samir", 1, 120);
    Commercial c1("ahlam", 2, 60, 34000);
    Responsable r1("inass", 3, 300);
    Responsable chef("ayoub", 4, 400);

    r1.ajouterEmploye(&e1);
    r1.ajouterEmploye(&c1);
    chef.ajouterEmploye(&r1);

    chef.afficherInferieursDirects();
    cout << "--- Tous les subordonnes ---" << endl;
    chef.afficherTousInferieurs();

    Personnel p;
    p.ajouter(&e1);
    p.ajouter(&c1);
    p.ajouter(&r1);
    p.ajouter(&chef);
    cout << "Total des salaires : " << p.calculerTotalSalaires() << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
