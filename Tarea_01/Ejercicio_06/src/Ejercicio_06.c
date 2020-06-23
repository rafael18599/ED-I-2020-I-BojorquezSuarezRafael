/*
 ============================================================================
 Name        : Ejercicio_06.c
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
	int i,j,n;
	printf("Ingrese el tamaño del cuadrado: ");
    scanf("%d",&n);
    for(i=0; i<n ; i++){

        for(j=0; j<n; j++){

            printf("*");
        	printf("\t");}printf("\n\n\n");}

    return 0;}



