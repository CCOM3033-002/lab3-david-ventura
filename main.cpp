/*
Lab 3: Tres Numeros Aleatorios
Nombre: David Ventura
Núm. Est: 801-24-6367
Colaboraciones: 
- Gabriel Santiago
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
    //Primero buscamos cual es el numero mayor

//Verificar si num 1 es mayor que num 2
    if ( mayor < randomnum2 )  // Ver si num1 es mayor que el num2
      { 
        mayor = randomnum2;    // Si num2 es mayor, se guarda en la variable mayor
        medio = randomnum1;    // Num1 se guarda en variable medio
        menor = randomnum3;     //Num3 se guarda en menor

        if ( randomnum2 > randomnum3 )   // Si el num2 es mayor, verificar si num2 es mayor que el num3  
       {
        mayor = randomnum2; }      // Si num2 es mayor, se guarda en la variable mayor
        
            if (randomnum3 > randomnum1) { //Si num3 es mayor, pues es mayor
        
            mayor = randomnum3;      // Num 3 se guarda en la variable medio
            menor = randomnum1; } 

    }

//Verificar si num1 es mayor o menor que num3

    else if ( mayor < randomnum3 ){   // Ver si num3 es mayor que el num1
       
        mayor = randomnum3;      // Num3 es mayor
       

            if  ( mayor < randomnum3 ) {  // Si num1 es mayor que el num3 
            
            mayor = randomnum1;      // Num1 es mayor
            medio = randomnum1;
            menor = randomnum2; }
       }

// Ya conseguimos el numero mayor, ahora toca ver cual será el medio y menor

    else ( medio < menor) {  // Si el medio es menor que medio 
       
        int tmp;      // Crear variable temporal
       tmp = medio;     // Guardar valor de medio en la variable temporal para que medio este vacia
       medio = menor;   // Asignar valor de menor en la variable vacia medio
       menor = tmp;     // Asignar valor temporal dentro de variable  menor
    }      
    // Desplegar Resultados
    cout << "Orden descendiente: " << mayor << ", " << medio << ", " << menor << endl; 
    
    return 0; 
} 



