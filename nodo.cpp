

template <typename T> class nodo
{
private:
    
public:
    nodo(T);
    T valor;
    nodo *siguiente;
};

template <typename T>
nodo<T>::nodo(T valor) {  
    this->siguiente = nullptr;
    this->valor = valor;
}

