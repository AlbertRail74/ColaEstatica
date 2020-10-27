#ifndef LISTA_H
#define LISTA_H


#define MAX 10

template<class T>
class Lista
{
public:
    Lista();
    bool llena();
    void insertar(T elemento);
    void insertar(T elemento, unsigned int posicion);
    void borrar(unsigned int posicion);
    unsigned int cantidad();
    T posicion(unsigned int posicion);

private:
    T arreglo[MAX];
    unsigned int contador;};

template<class T>
Lista<T>::Lista()
{
    contador=0;}


template<class T>
bool Lista<T>::llena()
{
    return contador == MAX;}

template<class T>
void Lista<T>::insertar(T elemento)
{
    if(!llena())
    {
        arreglo[contador]=elemento;
                contador++;}

}

template<class T>
void Lista<T>::insertar(T elemento, unsigned int posicion)
{
    for(unsigned int i=contador;i>posicion;i--)
    {
        arreglo[i]=arreglo[i-1];}
    arreglo[posicion]=elemento;
    contador++;
}

template<class T>
void Lista<T>::borrar(unsigned int posicion)
{
    for(unsigned int i=posicion;i<contador;i++)
    {
        arreglo[i]=arreglo[i+1];}
    contador--;
}

template<class T>
unsigned int Lista<T>::cantidad()
{
    return contador;
}

template<class T>
T Lista<T>::posicion(unsigned int posicion)
{
    return arreglo[posicion];
}


#endif // LISTA_H
