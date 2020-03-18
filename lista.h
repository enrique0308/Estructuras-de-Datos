/**
 \file lista.h
 
 Definición del tipo de dato struct Contigua,
 así como las funciones.

 Contigua es una lista donde la memoria
 se reserva con malloc para que se puedan
 tener los datos de forma contigua,
 como un arreglos.

 El tamaño crece al doble cada que se llena 
 y se reduce a la mitad cuando está desocupado
 la mitad del espacio.

*/







#ifndef __LISTA_H__
#define __LISTA_H__

#include<stdio.h>
#include<stdlib.h>
struct Lista{
	int dato;
	struct Lista *nodo_siguiente;
};

int dato(void);
struct Lista *crear_nodo(int);
struct Lista *agregar_nodo(struct Lista *,int);
void mostrar_lista(struct Lista*);
#endif
