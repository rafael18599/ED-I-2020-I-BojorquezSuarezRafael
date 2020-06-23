/*
 ============================================================================
 Name        : Rafael_Bojorquez_Tare01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
void Sumar(int arreglo[],int n,int sum);
int main()

{	setbuf(stdout,NULL);
	srand (time(NULL));
	int arreglo[100],i ;
	int n=100;
		for(i=0;i<n;i++)
		{arreglo[i]=(rand ()%50 )+1;}
			printf("\n los elementos del array son: ");
		for(i=0;i<n;i++)
		{printf("\t %d", arreglo[i]);}
	int sum = 50;
	Sumar(arreglo, n, sum);

	return 0;
}
void Sumar(int arreglo[100], int n, int sum)
{   bool b = false;
		for (int i = 0; i < n - 1; i++)
		{for (int j = i+1 ; j < n; j++)

			{if (arreglo[i] + arreglo[j] == sum)
				{printf("\n estos pares suman 50 son:  arr[%d] = %d y  arr[%d] = %d  " ,  i, arreglo[i] ,  j, arreglo[j]);
					b=true;}
			}
		}
		if(b==false){
	            printf("\n no se detectaron pares que sumen 50");};
}


