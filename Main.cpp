#include <iostream>
#include "Lista.cpp"
using namespace std;

int main() {
    Lista<string> *lst = new Lista<string>();
    lst->insertar("hola");
    lst->insertar("mundo");
    lst->imprimir();
    cout << "Hola mundo" << endl;
    system("pause");
    return 0;
}