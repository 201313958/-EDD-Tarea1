#include <stdlib.h>
#include "nodo.cpp"
#include <iostream>
template <typename T>
class Lista
{
private:
    /* data */
public:
    nodo<T> *primero;
    nodo<T> *ultimo; 
    Lista(/* args */);
    void Encolar(T val);
    void Desencolar();
    void imprimir();
};

template <typename T>
Lista<T>::Lista(/* args */)
{
    this->primero = nullptr;
    this->ultimo =  nullptr;
}

template <typename T>
void Lista<T>::Desencolar() {
    if(this->primero != nullptr){
        this->primero = this->primero->siguiente;
    } else {
        std::cout << "La cola esta vacia" << std::endl;
    }
}

template <typename T>
void Lista<T>::Encolar(T val) {
    nodo<T> *nuevo = new nodo<T>(val);

    if(this->primero == nullptr) {
        this->primero = nuevo;
        this->ultimo = nuevo;
    } else {
        this->ultimo->siguiente= nuevo;
        this->ultimo = nuevo;
    }
}

template <typename T>
void Lista<T>::imprimir() {
    nodo<T> *tmp = this->primero;
    
    while(tmp != nullptr) {
        std::cout << tmp->valor << std::endl;
        tmp = tmp->siguiente;
    }
}
