/*
 ============================================================================
 Name        : Ejercicio_09.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int i,j,M,p=1,arr[100][100];
	printf("\n ingrese el tamañano de la matriz cuadrada: " );
	scanf("%d",&M);
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			arr[i][j]=(rand()%5)+1;
		}
	}
	printf("\n los elementos de la matriz cuadrada son: ");
		for(i=0;i<M;i++){
				printf("\n");
					for(j=0;j<M;j++){
							printf("\t%d",arr[i][j]);
					}
		}
	printf("\n la digonal es: ");{
		for(i=0;i<M;i++){
				for(j=0;j<M;j++){
					if(arr[i]==arr[j]){
						printf("\t %d",arr[i][j]);
					}
				}
		}
	}

	printf("\n la diagonal siguiente es: ");{
		for(i=0;i<M;i++){
						for(j=0;j<M;j++){
							if(arr[i+1] ==arr[j]){
								printf("\t %d",arr[i][j]);
								p=p*arr[i][j];
							}
						}
				}
	printf("\n elproducto de la siguiente diagonal es: %d ",p);

}}
