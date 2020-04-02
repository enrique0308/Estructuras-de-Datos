#ifndef __COLA_H__
#define __COLA_H__

#include<stdio.h>
#include<stdlib.h>
typedef struct Cola{
	int dato;
	struct Cola *nodo_siguiente;
}NODO;

int dato(void);
NODO *crear_nodo(int);
void insertar_al_final(NODO**,int);
void imprimir_cola(NODO *);
#endif
