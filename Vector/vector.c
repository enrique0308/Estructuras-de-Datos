#include "vector.h"
void crear_vector(VECTOR *nuevo){
        nuevo->casillas_disponibles=2*nuevo->casillas_disponibles;
        nuevo->dato=(int *)malloc(nuevo->casillas_disponibles*sizeof(int));
        if(nuevo->dato==NULL){
                printf("No se pudo aumentar el vector");
                return;
        }
}

void aumentar_vector(VECTOR *nuevo){
        int i;
        int *datos=(int *)malloc(nuevo->ultimo_dato_guardado*sizeof(int));
        nuevo->casillas_disponibles=2*nuevo->casillas_disponibles;
        for(i=0;i<nuevo->ultimo_dato_guardado;i++){
                datos[i]=nuevo->dato[i];
        }
        nuevo->dato=(int *)malloc(nuevo->casillas_disponibles*sizeof(int));
        if(nuevo->dato==NULL){
                printf("No se pudo aumentar el vector");
                return;
        }
        for(i=0;i<nuevo->ultimo_dato_guardado;i++){
                nuevo->dato[i]=datos[i];
        }
        return;
}

int pedir_numero(){
        int numero;
        printf("Ingrese cualquier numero entero y enseguida aparecera un triangulo empezando por el numero 1, hasta el numero ingresado: ");
        scanf("%d",&numero);
        return numero;
}

void llenar_vector(VECTOR *vector, int numero_final){

        while(vector->ultimo_dato_guardado<numero_final){
                if(validar_espacio(vector)==1){
                        while(vector->casillas_disponibles>vector->datos_llenados && vector->ultimo_dato_guardado<numero_final){
                        vector->dato[vector->datos_llenados]=vector->ultimo_dato_guardado+1;
                        vector->datos_llenados=vector->datos_llenados+1;
                        vector->ultimo_dato_guardado=vector->ultimo_dato_guardado+1;
                        imprimir(vector);
                        }
                }
                else{

                        aumentar_vector(vector);
                        llenar_vector(vector,numero_final);
                }
        }
        return;
}


int validar_espacio(VECTOR *validar){
        if(validar->casillas_disponibles>validar->datos_llenados){
                return 1;
        }
        return 0;
}

void imprimir(VECTOR *imprimir){
        int i;
        for(i=0;i<imprimir->ultimo_dato_guardado;i++){
                printf("%d ",imprimir->dato[i]);
        }
        printf("\n");
}

