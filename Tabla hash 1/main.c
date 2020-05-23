#include"tabla.h"
int main(){
	int n_elementos=100;
	int tabla_hash[n_elementos];
	int opcion=0;
	while(1){
		printf("--Tabla hash de 100 elementos--\n");
		printf("1.- Insertar dato\n");
		printf("2.- Buscar dato\n");
		printf("3.- Salir\n");
		printf("Ingrese una opcion");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				insertar_dato(tabla_hash,n_elementos);
			break;
			case 2:
				imprimir_datos(tabla_hash,n_elementos);
			break;
			case 3:
			return;
			Defualt:
				printf("Accion no reconocida");
			break;
		}
	}
	return 0;
}
