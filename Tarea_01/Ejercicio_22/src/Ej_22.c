#include <stdio.h>
#include <conio.h>

int main(){
	setbuf(stdout,NULL);
	int i,j,f,c;
	int arr[100][100];//"arr" será el nombre de nuestro arreglo bidimensional
	int (*parr)[100]= arr;/*esto es un arreglo puntero de 100 espacios ;
	acá indicamos que hay un puntero que apunta a nuestro arreglo bidimensional,tal y como
	lo hace un punturo, apuntará a la direccion de nuestra matriz tanto de sus filas y columnas*/
	srand (time(NULL));
	printf("\n ingrese el numero de filas de la matriz: " );
		scanf("%d",&f);
	printf("\n ingrese el numero de columnas de la matriz: " );
		scanf("%d",&c);
		for(i=0;i<f;i++){
			for(j=0;j<c;j++){
				arr[i][j]=(rand()%5)+1;//se rellena la matriz con numeros aleatorios entre el 0-5
			}
		}

		printf("\n los elementos de la matriz son: ");
			for(i = 0; i < f; i++)
			{	printf("\n");
				for(j = 0; j < c; j++)
				{
						printf("\t%d", *(*(parr+i)+j));
						/*  con "*(*(parr+i)+j))" de podria decir que hay un puntero que apunta a otro
						puntero de nuestro arreglo "arr" siguiendo la regla de oro para acceder a un
						elemento de un array 2D:
						arr[i][j] = (*(arr+i))[j] = *((*arr+i))+j) = *(arr[i]+j)*/
				}
			}
return 0;
}
