/**
 * @file NumerosNoFibonacci.cpp
 * @author Hector Valencia (contacto@hecthoringo.com)
 * @website https://www.hecthoringo.com
 * @brief   Escribe un programa que imprima en pantalla todos los números enteros positivos estrictamente menores que N que NO pertenezcan a la serie de Fibonacci.
 *          ENTRADA Tu programa deberá de leer del un solo número entero 2  N  30000 (30 mil)
 *          SALIDA  Tu programa deberá imprimir en pantalla todos los números enteros positivos menores que N que no formen parte de la serie de Fibonacci, deberá imprimirlos en orden creciente, separados por espacios.
 *          LIMITES 2 <= N <= 30000 (30 mil)
 * @version 1.0
 * @date
 * @copyright hecthoringo
 * 
 */

#include <iostream>

using namespace std;

/**
 * @brief 
 * 
 * @return int 
 */
int main(){
    int a=1, b=1, c=0, m;
    cin>>m;
    for(int i=2;i<m;i++) {
        if(i!=(a+b)){
            cout<<i<<" ";
        } else {
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;
}
