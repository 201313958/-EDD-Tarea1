#include <iostream>
#include "Lista.cpp"
using namespace std;

int main() {
    Lista<string> *lst = new Lista<string>();
    lst->Encolar("Primero");
    lst->Encolar("Segundo");
    lst->Encolar("Tercero");
    lst->Encolar("Cuarto");
    lst->Encolar("Quinto");
    cout << "Primera insercion" << endl;
    lst->imprimir();
    lst->Desencolar();
    lst->Desencolar();
    lst->Desencolar();
    cout << "3 elementos se desencola" << endl;
    lst->imprimir();
    system("pause");
    return 0;
}