#include "vector.h"
int main(){
	int numero_final;
	VECTOR vector_nuevo;
	vector_nuevo.ultimo_dato_guardado=0;
	vector_nuevo.casillas_disponibles=1;
	vector_nuevo.datos_llenados=0;
	numero_final=pedir_numero();	
	crear_vector(&vector_nuevo);
	llenar_vector(&vector_nuevo,numero_final);
	return 0;
}


