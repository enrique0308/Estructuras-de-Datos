#include "tabla.h"
int main(){
	int elementos_inv=50,opcion,i,j;
	struct Productos inventario[elementos_inv];
	for(i=0;i<elementos_inv;i++){
		for(j=0;j<40;j++){
			inventario[i].contenido.nombre_producto[j]=0;
		}
	}
	while(1){
		printf("--Inventario de tienda--\n");
		printf("1.- Registrar producto\n");
		printf("2.- Buscar Producto en inventario\n");
		printf("3.- Eliminar producto\n");
		printf("4.- Salir\n");
		printf("Elija una opcion: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				registrar_producto(inventario,elementos_inv);
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			return 0;
			Default:
				printf("Opcion no valida...");
			break;
		}
	} 
	return 0;
}
