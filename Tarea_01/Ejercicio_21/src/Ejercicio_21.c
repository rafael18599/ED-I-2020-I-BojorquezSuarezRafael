/*
 ============================================================================
 Name        : Ejercicio_21.c
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
		int i,j,n,m,x,y,arr[100][100],arr2[100][100],arr3[100][100];
		x=2;
		y=3;

		printf("\n ingrese el tamañano de la matriz cuadrada: " );
			scanf("%d",&n);
			srand (time(NULL));
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){

				arr[i][j]=(rand()%5)+1;
			}
		}

		printf("\n los elementos de la matriz A son: ");
			for(i=0;i<n;i++){
					printf("\n");
						for(j=0;j<n;j++){
								printf("\t%d",arr[i][j]);
						}
			}
		m=n;

		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
							arr2[k][l]=(rand()%5)+1;
			}
		}

		printf("\n los elementos de la matriz B son: ");
			for(int k=0;k<n;k++){
					printf("\n");
						for(int l=0;l<n;l++){
								printf("\t%d",arr2[k][l]);
									}
						}

		for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						arr3[i][j]=2*arr[i][j]+3*arr2[i][j];
					}
				}

		printf("\n los elementos de la matriz XA+BY son: ");
					for(i=0;i<n;i++){
					printf("\n");
							for(j=0;j<n;j++){
								printf("\t%d",arr3[i][j]);
							}
					}

}
