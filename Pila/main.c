#include "pila.h"

int main(void){
	NODO *pila1=NULL;
	insertar_al_inicio(&pila1,dato());
	insertar_al_inicio(&pila1,dato());
	insertar_al_inicio(&pila1,dato());
	insertar_al_inicio(&pila1,dato());
	insertar_al_inicio(&pila1,dato());
	imprimir_pila(pila1);
	return 0;
}


