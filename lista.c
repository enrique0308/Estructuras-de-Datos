#include "lista.h"

int dato(void){
	int datos;
	printf("Ingresa un dato para agregar a la lista");
	scanf("%d",&datos);
	return datos;
}


struct Lista *crear_nodo(int datos){
	struct Lista *nodo_nuevo=NULL;
	nodo_nuevo=(struct Lista*) malloc(sizeof(struct Lista));
	if(nodo_nuevo==NULL){
		return NULL;
	}
	nodo_nuevo->dato=datos;
	nodo_nuevo->nodo_siguiente=NULL;
	return nodo_nuevo;
}


struct Lista *agregar_nodo(struct Lista *nodo_anterior,int datos){
	struct Lista *nuevo_nodo=crear_nodo(datos);
	if(nuevo_nodo==NULL)
	return NULL;
	nuevo_nodo->nodo_siguiente=nodo_anterior;
	return nuevo_nodo;
}


void mostrar_lista(struct Lista *lista1){
	while(lista1!=NULL){
	printf("%d ,",lista1->dato);
	lista1=lista1->nodo_siguiente;
	}
	return;
}
