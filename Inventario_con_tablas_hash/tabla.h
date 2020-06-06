#ifndef __TABLA_H__
#define __TABLA_H__

#include<stdio.h>
#include<stdlib.h>
struct Datos{
	char nombre_producto[40];
	int precio_compra;
	int precio_venta;
	int existencias;	
};

struct Productos{
	struct Datos contenido;
	struct Productos *siguiente_producto;
};

void registrar_producto(struct Productos[],int);
struct Datos datos();
struct Productos *crear_producto(struct Datos);
int generar_indice(struct Productos,int);
struct Productos agregar_en_tabla(struct Productos[],int,struct Productos);
int colision(struct Productos[],int);
struct Productos agregar_en_lista(struct Productos[],int,struct Productos);
#endif

