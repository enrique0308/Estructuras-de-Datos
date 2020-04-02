#include"cola.h"

int main(void){
	NODO *cola1=NULL;
	insertar_al_final(&cola1,dato());
	insertar_al_final(&cola1,dato());
	insertar_al_final(&cola1,dato());
	insertar_al_final(&cola1,dato());
	insertar_al_final(&cola1,dato());
	imprimir_cola(cola1);
	return 0;
}


