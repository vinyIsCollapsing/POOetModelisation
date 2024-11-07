#ifndef VECTEUR3D_H
#define VECTEUR3D_H


class Vecteur3d{
    private:
        float x, y, z;
    public:
        //Vecteur3d();
        Vecteur3d(float x = 0.0, float y = 0.0, float z = 0.0);
        bool coincide(Vecteur3d vecteur);                // Par valeur
        bool coincide(Vecteur3d* vecteur);               // Par adresse
        bool coincideReference(Vecteur3d& vecteur);      // Par reference
};

#endif // VECTEUR3D_H
