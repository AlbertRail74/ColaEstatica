#include <iostream>
#include "lista.h"

using namespace std;

int main(){


    int op;
    string nombre;
    Lista<string> cola;
    do{
    cout<<"\n Opcion 01: Encolar \n Opcion 02: Desencolar \n Opcion 03: Frente \n Opcion 04: Final \n Opcion 05: Salir \n\n Selecione una opcion: ";
    cin>>op;

    switch (op) {
    case 1:
            cout<<"\nIngrese elemento ";
            cin>>nombre;
            cola.insertar(nombre);
            cout<<"\nNombre ingresado correctamente"<<endl;
        break;
     case 2:
        cout<<"\nElemento desencolado"<<endl;
        cola.borrar(1);
        break;
    case 3:
            cout<<"\nEl elemento al frente de la cola es: "<<cola.posicion(0);
        break;
    case 4:
            cout<<"\nEl elemento al final de la cola es: "<<cola.posicion(cola.cantidad()-1);
        break;
    case 5:
        break;
    default:
        cout<<"Opcion invalida";
        break;}}

    while(op!=5);


    return 0;
}
