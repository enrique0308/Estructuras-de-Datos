#include "lista.h"

int main(void){
	struct Lista *lista1=crear_nodo(dato());
	lista1=agregar_nodo(lista1,dato());
	lista1=agregar_nodo(lista1,dato());
	lista1=agregar_nodo(lista1,dato());
	lista1=agregar_nodo(lista1,dato());
	lista1=agregar_nodo(lista1,dato());
	lista1=agregar_nodo(lista1,dato());
	lista1=agregar_nodo(lista1,dato());
	mostrar_lista(lista1);
	return 0;
}
