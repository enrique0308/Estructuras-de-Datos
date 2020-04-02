#ifndef __PILA_H__
#define __PILA_H__

#include<stdio.h>
#include<stdlib.h>
typedef struct Pila{
	int dato;
	struct Pila *nodo_siguiente;
}NODO;

int dato(void);
NODO *crear_nodo(int);
void insertar_al_inicio(NODO**,int);
void imprimir_pila(NODO *);
#endif
