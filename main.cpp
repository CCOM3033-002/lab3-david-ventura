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
    //Primero buscamos cual es el numero mayor

//Verificar si num 1 es mayor que num 2
    if ( mayor > randomnum2 )   // Ver si num1 es mayor que el num2 
       {
        mayor = randomnum1;      // Si num1 es mayor, se guarda en la variable mayor
        medio = randomnum2;      // Num 2 se guarda en la variable medio
        menor = randomnum3;
       
        if ( mayor < randomnum2 )  // Ver si num2 es mayor que el num1
       
        mayor = randomnum2;    // Si num2 es mayor, se guarda en la variable mayor
        medio = randomnum1;    // Num1 se guarda en variable medio
        menor = randomnum3;
    }

//Verificar si num1 es mayor o menor que num3

    else if ( mayor < randomnum3 )   // Ver si num1 es mayor que el num3 
       {
        mayor = randomnum3;      // Si num3 es mayor, se guarda en la variable mayor
       
       }

// Ya conseguimos el numero mayor, ahora toca ver cual será el medio y menor

 if ( medio < menor)  // Ver si es mayor que el num3 
       {
               int tmp = medio;
               medio = menor;
               menor = medio;
    } 


       
       

    // Este bloque es para verificar cual es mas medio y menor. 


   /* else if ( medio > randomnum3)  // Ver si es mayor que el num3 
       {
        mayor = randomnum1;      // Si num1 es mayor, se guarda en la variable mayor
       
       if (mayor <= randomnum3)  // Ver si num3 es mayor que el num1
        
        mayor = randomnum3;         // Guardar en variable que num3 es mayor pq es mayor que num 1

    } 
    
    else if (randomnum2 > randomnum3)      // Ver si el num2 es mayor que num3
     
    {
        medio = randomnum2;                  // Si num2 es mayor que num3 se le asigna a la variable medio
        menor = randomnum3; 
    }
       else if ( randomnum2 < randomnum3 ) 
    
       {
        medio = randomnum3;
        menor = randomnum2;
        }
    */
        
        
    cout << "Orden descendiente: " << mayor << ", " << medio << ", " << menor << endl; 
    
    return 0; 
} 



