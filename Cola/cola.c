#include"cola.h"
int dato(void){
	int dato;
	printf("Ingresa un dato para agregar a la cola: ");
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

void insertar_al_final(NODO **nodo_anterior,int dato){
	NODO *aux=*nodo_anterior, *nuevo_nodo=crear_nodo(dato);
        if(nuevo_nodo==NULL)
        return;
	while(aux->nodo_siguiente!=NULL){
		aux=aux->nodo_siguiente;
	}
	aux->nodo_siguiente=nuevo_nodo;
	return;
	
}


void imprimir_cola(NODO *cola){
	while(cola!=NULL){
		printf("%d ,",cola->dato);

		cola=cola->nodo_siguiente;
	}
	return;
}
