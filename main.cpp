#include <iostream>  // BIBLIOTECA IOSTREAM
#include <list>     // BIBLIOTRECA LIST
using namespace std;
void insertar()                  // CREA UNA FUNCION  CON EL NOMBRE INSERTAR DE TIPO VACIO
{
    list <string> nombres;         //LISTA CON ELEMENTOS DE TIPO STRING
    nombres.push_back("\n ALEXIS");    // INSERTA STRING  ALEXIS
    nombres.push_back("\n ERIK");     // INSERTA STRING ERIK
    nombres.push_back("\n JHORDY");    // INGRESA STRING JHORDY
    nombres.push_back("\n JOSE");      // INSERTA STRING JOSE
    nombres.push_back("\n PEDRO");     // INSERTA STRING PEDRO
    nombres.push_back("\n PABLO");      // INSERTA STRING PABLO
   list<string>::iterator it = nombres.begin(); // SE OBTIENE UN ITERADRO AL INICIO DE LA LISTA
    while (*it != "Pedro" && it != nombres.end() ) it++;// BUSCAMOS EL ELEMNTO " PEDRO "

    nombres.insert(it, 1, "\n RUTH");         // INSERTAMOS UN ELEMENTO " RUTH " en la posición indicada
                                            // por el iterador it.
    it = nombres.begin();                    //iguala el iterador  a nombres funcion begin
    while( it != nombres.end() )            // comiensa el bucle wile para poder imprimir  la lista
    {
      cout << *it++ << endl;            //HACE COMENZAR A IMPRIMIR LOS SLEMENTOS CON EL ITERADOR IT
    }}
int main()
{
    insertar();              // LLAMANDO A LA FUNCION INSERTAR
    cout << "\n\n\n\n GRACIAS  TEAM  OVERLORDS DEL C++ " << endl;

    return 0;
}
