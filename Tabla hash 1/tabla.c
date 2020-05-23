#include"tabla.h"
void insertar_dato(int *tabla_hash, int n_elementos){
	int dato=obtener_dato();
	int indice=funcion_hash(dato,n_elementos);
	tabla_hash[indice]=dato;
	return;
}

int obtener_dato(){
	int dato;
	printf("Por favor ingrese un numero para agregar a la tabla");
	scanf("%d",&dato);
	return dato;
}

int funcion_hash(int dato,int n_elementos){
	return dato%n_elementos;
}


void imprimir_datos(int *tabla_hash,int n_elementos){
	int numero,indice;
	printf("Que numero desea buscar");
	scanf("%d",&numero);
	indice=funcion_hash(numero,n_elementos);
	printf("El numero %d fue encontrado en la posicion %d ",numero,indice);
	return;
}
