#include"tabla.h"

void registrar_producto(struct Productos inventario[],int elementos_inv){
	struct Productos *nuevo_producto=crear_producto(datos());
	int indice= generar_indice(*nuevo_producto,elementos_inv);
	if(colision(inventario,indice)==1){//1=hay colision, 0=todo en orden
		
		inventario[indice]=agregar_en_lista(inventario,indice,*nuevo_producto);
	}else{
		inventario[indice]=agregar_en_tabla(inventario,indice,*nuevo_producto);
	}
	return;
}

struct Datos datos(){
	struct Datos nuevos;
	int i;
	for(i=0;i<40;i++){
		nuevos.nombre_producto[i]=0;
	}
	printf("Nombre de producto: ");
	scanf("%*c%[^\n]",nuevos.nombre_producto);
	printf("\nPrecio de compra: ");
	scanf("%d",&nuevos.precio_compra);
	printf("\nPrecio de venta: ");
	scanf("%d",&nuevos.precio_venta);
	printf("\nExistencias: ");
	scanf("%d",&nuevos.existencias);
	return nuevos;
}

struct Productos *crear_producto(struct Datos nuevos_datos){
	struct Productos *nuevo=NULL;
	nuevo=(struct Productos*)malloc(sizeof(struct Productos));
	if(nuevo==NULL){
		return NULL;
	}
	else{
		nuevo->contenido=nuevos_datos;
		nuevo->siguiente_producto=NULL;
	}
	return nuevo;
}

int generar_indice(struct Productos nuevo_producto,int elementos_inv){
	int funcion_hash=0,i;
	for(i=0;i<40;i++){
		funcion_hash=funcion_hash+nuevo_producto.contenido.nombre_producto[i];
	}
	funcion_hash=funcion_hash%elementos_inv;
	return funcion_hash;
}

struct Productos agregar_en_tabla(struct Productos inventario[],int indice_hash,struct Productos producto_nuevo){
	inventario[indice_hash]=producto_nuevo;
	return inventario[indice_hash];
}
int colision(struct Productos inventario[],int indice){
	if(inventario[indice].contenido.nombre_producto[0]!=0){
		return 1;
	}
	else{
		return 0;
	}
}

struct Productos agregar_en_lista(struct Productos inventario[],int indice_hash,struct Productos producto_nuevo){
	producto_nuevo.siguiente_producto=&inventario[indice_hash];
	return producto_nuevo;
}
