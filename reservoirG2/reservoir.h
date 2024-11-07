#ifndef RESERVOIR_H
#define RESERVOIR_H

class Reservoir{
    private:
        int capacite;
        int niveau;
    public:
        Reservoir(int taille);
        int verse(int quantite);
        int puise(int quantite);
        int jauge();
};

#endif // RESERVOIR_H
