/**
 * @file NumerosNoFibonacci.c
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

#include<stdio.h>

/**
 * @brief 
 * 
 * @return int 
 */

int main() {
	int n,i=1,n1=0,n2=1,f=1;
	scanf("%d",&n);
	do{
		n2 = n1 + n2;
		n1 = n2 - n1;	
		if(n2!=i) {	
			while(i<n2 && i<n)	{
				printf("%d ",i);
				i++;
			}			
		}
		i++;
    }while(n2<n);  
	return 0;
}
