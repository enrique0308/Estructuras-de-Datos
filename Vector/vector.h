#ifndef __VECTOR_H__
#define __VECTOR_H__

#include<stdio.h>
#include<stdlib.h>
typedef struct vector{
        int datos_llenados;
        int *dato;
        int casillas_disponibles;
        int ultimo_dato_guardado;
}VECTOR;
void crear_vector(VECTOR*);
void aumentar_vector(VECTOR *);
int pedir_numero();
void llenar_vector(VECTOR *,int);
int validar_espacio(VECTOR*);
void imprimir(VECTOR*);
#endif
