#include <stdio.h>
#include <stdlib.h>

int main(){
    int variable_de_algun_tipo=11;
    int *puntero = &variable_de_algun_tipo;
    printf("contenido del puntero: %d  ", *puntero);
    printf("direccion de memoria almacenada por el puntero: %p  ", puntero);
    printf("direccion de memoria de la variable: %p  ", &variable_de_algun_tipo);
    printf("direccion de memoria del puntero: %p  ", &puntero);
    printf("tamaño de memoria utilizado por la variable: %d  ", sizeof(variable_de_algun_tipo));
    return 0;
}