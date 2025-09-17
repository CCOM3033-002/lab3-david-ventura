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

    //Verificar si num 1 es el mayor
    if ( mayor < randomnum2 ){  // Ver si num1 es menor que el num2
       
        mayor = randomnum2;    // Si num2 es mayor, se guarda en la variable mayor
        medio = randomnum1;    // Num1 se guarda en variable medio
        menor = randomnum3;     //Num3 se guarda en menor
    
        if ( randomnum2 > randomnum3 )   // Si el num2 es mayor, verificar si num2 es mayor que el num3  
            mayor = randomnum2;       // Si num2 es mayor, se guarda en la variable mayor
        
        else { 
            //Si num3 es mayor, pues es mayor
            mayor = randomnum3;      // Num 3 se guarda en la variable mayor
            menor = randomnum1; 
            medio = randomnum2;
        } 
    }


    //Si num1 es mayor que num2, hay que verificar es mayor o menor que num3

    else if ( mayor < randomnum3 ) {  // Ver si num3 es mayor que el num1
        mayor = randomnum3; // Num3 se guarda en variable mayor
        medio = randomnum1;
        menor = randomnum2;             
        }

    // Ya conseguimos el numero mayor, ahora toca ver cual será el medio y menor

    else {                      // Si num1 es mayor que num2 y num3, y num2 es mayor que num3
        medio = randomnum2;     //(Este orden es el que se asume y declara al principio)
        menor = randomnum3;
    }



    if ( medio < menor){   // Si el medio es menor que medio 
       
        int tmp;      // Crear variable temporal
        tmp = medio;     // Guardar valor de medio en la variable temporal para que medio este vacia
        medio = menor;   // Asignar valor de menor en la variable vacia medio
        menor = tmp; }    // Asignar valor temporal dentro de variable  menor
          
    // Desplegar Resultados
    cout << "Orden descendiente: " << mayor << ", " << medio << ", " << menor << endl; 
    
    return 0;
} 



