#include <iostream>
#include "ensembleentier.h"

EnsembleEntier::EnsembleEntier(int maxElements) : maxElements(maxElements), currentSize(0), head(nullptr), iterator(nullptr) {}

EnsembleEntier::~EnsembleEntier() {
    // Liberar memória da lista encadeada
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void EnsembleEntier::addElement(int element) {
    if (currentSize >= maxElements) {
        std::cout << "Capacidade máxima atingida. Não é possível adicionar o elemento " << element << "." << std::endl;
        return;
    }
    if (appartient(element)) {
        std::cout << "Elemento " << element << " já existe no conjunto." << std::endl;
        return;
    }
    Node* newNode = new Node{element, head};
    head = newNode;
    ++currentSize;
    std::cout << "Elemento " << element << " adicionado. Cardinal atual: " << getCardinal() << std::endl;
}

bool EnsembleEntier::appartient(int element) const {
    Node* current = head;
    while (current != nullptr) {
        if (current->value == element) {
            return true;
        }
        current = current->next;
    }
    return false;
}

int EnsembleEntier::getCardinal() const {
    return currentSize;
}

// Funções do iterador

void EnsembleEntier::init() {
    iterator = head;  // Aponta o iterador para o início da lista
}

int EnsembleEntier::prochain() {
    if (iterator != nullptr) {
        int value = iterator->value;
        iterator = iterator->next;  // Move o iterador para o próximo nó
        return value;
    }
    throw std::out_of_range("Não há mais elementos.");  // Exceção se o iterador estiver fora da lista
}

bool EnsembleEntier::existe() const {
    return iterator != nullptr;  // Retorna verdadeiro se ainda houver elementos a serem iterados
}
