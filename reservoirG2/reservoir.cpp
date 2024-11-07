#include "reservoir.h"

Reservoir::Reservoir(int taille){
    this->capacite = taille;
    this->niveau = 0;
}
int Reservoir::verse(int quantite){
    int verse = 0;

    if(quantite < this->capacite - this->niveau){
        this->niveau += quantite;
        verse = quantite;
    } else {
        verse = quantite - this->niveau;
        this->niveau = this->capacite;
    }

    return verse;
}
int Reservoir::puise(int quantite){
    int puise = 0;

    if(quantite < this->capacite - this->niveau){
        puise = quantite;
        this->niveau -= quantite;
    } else {
        puise = this->niveau;
        this->niveau = 0;
    }
    return puise;
}
int Reservoir::jauge(){
    return this->niveau;
}
