#include <iostream> //sirve para operar de entrada y salida
using namespace std; // permite utilizar elementos del espacio de nombres std sin tener que prefijarlos
int main (){ //es la funci�n principal del programa donde comienza la ejecuci�n

int array [6] = {10,20,30,40,50,60}; //declara un arreglo de enteros de tama�o 6 e inicializa sus elementos
for (int i=0; i<6; i++) //for es el bucle que imprime seis saltos de l�nea uno por cada iteraci�n
    cout<<endl;
cout<<"la suma de ambos posiciones es: "; //imprime el mensaje �la suma de ambas posiciones es� en la consola
cout<<array[1] + array [5]; //imprime la suma de los elementos en las posiciones 1 y 5 del arreglo


return 0; // termina el programa y devuelve el 0 al sistema operativo indicando que el programa termino correctamente
}
