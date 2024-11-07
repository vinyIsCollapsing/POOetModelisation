#include <iostream>
#include "reservoir.h"
#include "vecteur3d.h"
#include "chose.h"
#include "point.h"

using namespace std;

int main(int argc, char *argv[]){

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
}
