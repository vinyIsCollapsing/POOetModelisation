#ifndef ENSEMBLEENTIER_H
#define ENSEMBLEENTIER_H

struct Node {
    int value;
    Node* next;
};

class EnsembleEntier {
private:
    Node* head;
    int maxElements;
    int currentSize;
    Node* iterator;

public:
    EnsembleEntier(int maxElements = 10);
    ~EnsembleEntier();

    void addElement(int element);
    bool appartient(int element) const;
    int getCardinal() const;

    // Funções para o iterador
    void init();
    int prochain();
    bool existe() const;
};

#endif
