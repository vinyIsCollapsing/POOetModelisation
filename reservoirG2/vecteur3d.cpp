#include "vecteur3d.h"

/*
Vecteur3d::Vecteur3d()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}
*/

Vecteur3d::Vecteur3d(float x, float y, float z){
    this->x = x;
    this->y = y;
    this->z = z;
}
bool Vecteur3d::coincide(Vecteur3d vecteur){
    return (this->x == vecteur.x && this->y == vecteur.y && this->z == vecteur.z);
}
bool Vecteur3d::coincide(Vecteur3d* vecteur) {
    return (this->x == vecteur->x && this->y == vecteur->y && this->z == vecteur->z);
}
bool Vecteur3d::coincideReference(Vecteur3d& vecteur) {
    return (this->x == vecteur.x && this->y == vecteur.y && this->z == vecteur.z);
}
