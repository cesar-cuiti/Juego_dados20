#ifndef FUNCION_DADO_H_INCLUDED
#define FUNCION_DADO_H_INCLUDED

void CargaManual(int v[], int Tam)
{   int i, Num;

    for (i=0; i<Tam; i++)
    {
         cout << "DADO "<< i+1 << " : " ;
         cin >> Num;
    }
}
int cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
        cout << v[i] << endl;
  }}
  void IngresarNombre(char)
  {   char NJug1;
      cout << "INGRESAR NOMBRE DEL JUGADOR: ";
      cin >> NJug1;
  }
  void IngresarRonda (int)
  {   int Rondas;
      cout << "¿CUANTAS RONDAS VA A JUGAR? ";
      cin >> Rondas;
  }
#endif // FUNCION_DADO_H_INCLUDED
