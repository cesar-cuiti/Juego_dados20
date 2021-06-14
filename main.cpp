#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>

using namespace std;
#include"Funcion_dado.h"
int main()
{   int Opc; int Jug[5];
    char Jug1 , Jug2 ;

     while (true)
     {  system("cls");
         cout << " 1 JUEGO NUEVO PARA UN JUGADOR "<< endl;
         cout << " 2 JUEGO NUEVO PARA DOS JUGADORES " << endl;
         cout << " 3 MOSTRAR PUNTUACION MAS ALTA "<< endl;
         cout << " 4 MODO SIMULADO (CARGA MANUAL DE DADOS " << endl;
         cout << " 0 FIN DEL PROGRAMA " << endl;
         cout <<"-------------------------------------------------------"<<endl;
         cout << "ELIJA UNA OPCION: ";
         cin >> Opc;
         system("cls");
         switch (Opc) {
         case 1 : cargarAleatorio(Jug,5,6);
                 break;
         case 2: cout << "INGRESE NOMBRE DEL JUGADOR 1: ";
                 cin >> Jug1;
                 cout << "INGRESE NOMBRE DEL JUGADOR 2: ";
                 cin >> Jug2;

                 break;
         case 3: ;
                 break;
         case 4: CargaManual(Jug,5);
                 break;
         case 0: cout<< "GRACIAS POR JUGAR A DADO 20!!"<< endl;
                 return 0;
                 break;
         }
     }

    system("pause");
    return 0;
}
