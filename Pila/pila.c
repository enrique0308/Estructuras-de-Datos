#include "pila.h"
int dato(void){
	int dato;
	printf("Ingresa un dato para agregar a la pila: ");
	scanf("%d",&dato);
	return dato;
}

NODO *crear_nodo(int dato){
	NODO *nuevo_nodo=NULL;
	nuevo_nodo=(NODO *) malloc(sizeof(NODO));
	if(nuevo_nodo==NULL)
	return NULL;
	nuevo_nodo->dato=dato;
	nuevo_nodo->nodo_siguiente=NULL;
	return nuevo_nodo;
}

void insertar_al_inicio(NODO **nodo_anterior,int dato){
	NODO *nuevo_nodo=crear_nodo(dato);
	if(nuevo_nodo==NULL)
	return ;
	nuevo_nodo->nodo_siguiente=*nodo_anterior;
	*nodo_anterior=nuevo_nodo;
	return ;
}


void imprimir_pila(NODO *pila){
	while(pila!=NULL){
		printf("%d ,",pila->dato);

		pila=pila->nodo_siguiente;
	}
	return;
}
