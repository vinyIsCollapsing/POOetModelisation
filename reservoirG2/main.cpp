#include <iostream>
#include "reservoir.h"
#include "vecteur3d.h"
#include "chose.h"
#include "point.h"
#include "ensembleentier.h"

using namespace std;

int main(int argc, char *argv[]){
/*
    Reservoir *monReservoir = new Reservoir(5);

    cout << "Clasee reservoir" << endl;
    cout << monReservoir->jauge() << endl;
    cout << monReservoir->puise(3)<< endl;
    cout << monReservoir->jauge() << endl;
    cout << monReservoir->verse(4)<< endl;
    cout << monReservoir->jauge() << endl;
    cout << monReservoir->verse(4)<< endl;
    cout << monReservoir->jauge() << endl;
    cout << monReservoir->puise(2)<< endl;
    cout << monReservoir->jauge() << endl;
    cout << monReservoir->puise(8)<< endl;
    cout << monReservoir->jauge() << endl;

    Vecteur3d *monVecteur3d = new Vecteur3d();
    Vecteur3d *autreVecteur3d = new Vecteur3d(1.0, 2.0, 3.0);

    cout << "Classe Vectuer3d" << endl;
    Vecteur3d v1(1.0, 2.0, 3.0);
    Vecteur3d v2(1.0, 2.0, 3.0);
    if (v1.coincide(v2)) {
        cout << "Les vecteurs coïncident par valeur." << endl;
    }
    if (v1.coincide(&v2)) {
        std::cout << "Les vecteurs coïncident par adresse." << std::endl;
    }
    if (v1.coincideReference(v2)) {
        std::cout << "Les vecteurs coïncident par reference." << std::endl;
    }

    cout << "Classe chose" << endl;
    Chose x;
    cout << "bonjour" << endl;

    cout << "Classe point" << endl;
    Point* tableauPoints = new Point[4];
    delete[] tableauPoints;


    return 0;
*/
    /*
     * Exercice 3
    EnsembleEntier *monEnsemble = new EnsembleEntier();

    cout << monEnsemble->getCardinal() << endl;
    monEnsemble->addElement(3);

    cout << monEnsemble->getCardinal() << endl;
    monEnsemble->addElement(3);

    cout << monEnsemble->getCardinal() << endl;
    monEnsemble->addElement(7);

    cout << monEnsemble->getCardinal() << endl;
    monEnsemble->addElement(2);

    cout << monEnsemble->getCardinal() << endl;
    monEnsemble->addElement(23);

    cout << monEnsemble->appartient(2) << endl;
    */
/*
 * Exercice 4
    EnsembleEntier conjunto(5);

    conjunto.addElement(3);
    conjunto.addElement(5);
    conjunto.addElement(3);
    conjunto.addElement(7);
    conjunto.addElement(9);
    conjunto.addElement(11);

    int numero = 5;
    if (conjunto.appartient(numero)) {
        std::cout << "O número " << numero << " pertence ao conjunto." << std::endl;
    } else {
        std::cout << "O número " << numero << " não pertence ao conjunto." << std::endl;
    }

    std::cout << "Cardinal final: " << conjunto.getCardinal() << std::endl;
*/

    EnsembleEntier conjunto(5);

    conjunto.addElement(3);
    conjunto.addElement(5);
    conjunto.addElement(7);
    conjunto.addElement(9);

    std::cout << "Elementos do conjunto: ";
    conjunto.init();

    while (conjunto.existe()) {
        std::cout << conjunto.prochain() << " ";
    }

    std::cout << "\nCardinal final: " << conjunto.getCardinal() << std::endl;

    return 0;
}
