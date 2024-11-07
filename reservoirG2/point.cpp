#include "point.h"
#include <iostream>

int Point::compteur = 0;

Point::Point()
{
    numero = ++compteur;  // On incrémente le compteur à chaque création d'un objet
    std::cout << "Point " << numero << " créé." << std::endl;
}
Point::~Point(){
    std::cout << "Point " << numero << " détruit." << std::endl;
}
