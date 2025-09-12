/*
Lab 3: Tres Numeros Aleatorios
Nombre: David Ventura
Núm. Est: 801-24-6367
Colaboraciones: 
- 
-
*/

// Incluir las librerias
#include<iostream>
#include<cstdlib>
using namespace std;

int main() {

    // Desplegar proposito del programa
    cout << "Este programa genera tres números enteros aleatorios y ordena los números de mayor a menor." << endl;

    // Inicializar generador de numeros aleatorios
    srand(time(0));

    // Guardar los numeros en variables
    int randomnum1 = rand() % (100 - 0 + 1) + 0;

    int randomnum2 = rand() % (100 - 0 + 1) + 0;

    int randomnum3 = rand() % (100 - 0 + 1) + 0;

    
   

    // Desplegar numeros aleatorios
    cout << "Numeros aleatorios generados: " << randomnum1 << ", " << randomnum2 << ", "<< randomnum3 << endl;

    // Guardar numeros en otra variable que define cual es el mayor
   int mayor = randomnum1;
   int medio = randomnum2;
   int menor = randomnum3;

    // Hacer codigo para que salgan en orden descendiente
    if ( mayor > randomnum2)  // Si num1 es mayor que el num2 se queda como el mayor
        randomnum2 = medio;
        if (mayor < randomnum2)
        randomnum1 = medio;                                  
    
    else ( medio > randomnum3) // Si num2 es mayor pues se convierte en mayor
        randomnum3 = menor;
        if (medio < randomnum3) 
            randomnum3 = medio;

    else (randomnum3 > randomnum1) {// Si num2 es mayor, num3 es menor 
        randomnum3 = mayor;
        randomnum1 = menor;}
        if ( randomnum3 < randomnum1 ) {
            randomnum1 = mayor;
            randomnum3 = menor;
        }
    
     
          
        
        cout << "Orden descendiente: " << mayor << ", " << medio << ", " << menor << endl;
    return 0;
}


