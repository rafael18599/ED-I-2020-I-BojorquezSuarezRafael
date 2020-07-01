#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100
#define	ErrorLleno -1
#define	ErrorVacio -2
#define	ErrorPos -3

struct	Lista{
	int a[MAX];
	int	final;
};

struct Lista lista;

void IniciarLista();
bool ListaLlena();
bool ListaVacia();
int Add(int);
int AddEnLaLista(int ,int );
int EliminarFinal();
int EliminarPrimero();
int EliminarEnLaLista(int);
int ObtenerLista(int);
int ObtenerPrimero();
int ObtenerFinal();


int main(void) {
	setbuf(stdout,NULL);
	IniciarLista();

	printf("Añadir al final de la lista: \n\n");
	for(int i=0;i<8;i++){
		Add(i);
		printf("lista[%d]=%d \n",i,ObtenerLista(i));
	}

	printf("\nAñadir en la lista el elemento 6 en la posicion 4: \n\n");
	AddEnLaLista(6,4);
	for(int i=0;i<lista.final+1 ;i++){
			printf("lista[%d]=%d \n",i,ObtenerLista(i));
	}

	printf("\nEliminar en la lista la posicion 4: \n\n");
	EliminarEnLaLista(4);
	for(int i=0;i<lista.final+1 ;i++){
		printf("lista[%d]=%d \n",i,ObtenerLista(i));
	}

	printf("\nEliminar en la lista el primer elemento: \n\n");
	EliminarPrimero();
	for(int i=0;i<lista.final+1 ;i++){
		printf("lista[%d]=%d \n",i,ObtenerLista(i));
	}

	printf("\nEliminar en la lista el ultimo elemento: \n\n");
		EliminarFinal();
		for(int i=0;i<lista.final+1 ;i++){
			printf("lista[%d]=%d \n",i,ObtenerLista(i));
	}

	printf("\nObtener Primer Elemento de la lista: \n\n");

		printf("lista[0]:%d \n",ObtenerPrimero());

	printf("\nObtener Ultimo Elemento de la lista: \n\n");
		printf("lista[%d]:%d \n",lista.final,ObtenerFinal());

	return EXIT_SUCCESS;
}

void IniciarLista(){
	lista.final = -1;
}

bool ListaLlena(){
	if(lista.final == MAX - 1){
		return true;
	}
	else{
		return false;
	}
}

bool ListaVacia(){
	if(lista.final == -1){
			return true;
		}
		else{
			return false;
		}
}

int Add(int dato){
	if(ListaLlena()){
		return 	ErrorLleno;
	}else{
		lista.final++;
		lista.a[lista.final]=dato;
		return (dato);
	}
}

int AddEnLaLista(int dato,int destino ){
	int posicion;
	if(ListaLlena()){
			return 	(ErrorLleno);
		}
	else{
		if((destino>lista.final+1)||(destino<0)){
			return (ErrorPos);
		}
		lista.final = lista.final+1;
		posicion=lista.final;
		while(posicion>destino){
			lista.a[posicion]=lista.a[posicion-1];
			posicion --;
		}
		lista.a[destino]=dato;
		return dato;
	}
}
int EliminarEnLaLista(int f){
	int posicion,valor;
	if(f>lista.final||f<0){
		return ErrorPos;
	}
	else{
		if(ListaVacia()){
			return ErrorVacio;
		}
		else{
			lista.final--;
			valor=lista.a[f];
			posicion = f;
			while(posicion <= lista.final){
				lista.a[posicion]=lista.a[posicion+1];
				posicion ++;
			}
			return valor;
		}
	}

}

int EliminarPrimero(){
	int posicion,valor;
	if(ListaVacia()){
				return ErrorVacio;
			}
	else{
		lista.final--;
		valor=lista.a[0];
		posicion=0;
		while(posicion<=lista.final){
			lista.a[posicion]=lista.a[posicion+1];
			posicion ++;
		}
		return valor;
	}
}
int EliminarFinal(){

	if(ListaVacia()){
					return ErrorVacio;
				}
	else{
		lista.final=lista.final-1;
		return lista.a[lista.final+1];
		}
}

int ObtenerLista(int p){
	int valor;
		valor=lista.a[p];
		return valor;
}

int ObtenerPrimero(){
	return lista.a[0];
}

int ObtenerFinal(){
	return lista.a[lista.final];
}
