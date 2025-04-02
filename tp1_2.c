#include <stdio.h>
#include <stdlib.h>
//4a
int cuadrado_de_un_numero(int x){
    return x*x;
}
//4b
void cuadrado_pero_void(int x){
    x=x*x;
    printf("%d ", x);
    return;

}
//4c
void direccion_y_contenido(int *x){
    printf("direccion: %p \n", x);
    printf("contenido: %d \n", *x);
    return;
}

void invertir(int *a, int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
    return;
}
int main(){
    int x = 3;
    x = cuadrado_de_un_numero(x);
    printf("%d \n", x);
    cuadrado_pero_void(x);
    direccion_y_contenido(&x);

    int a=2, b=3;
    printf("previo inversion: a=%d, b=%d \n",a,b);
    invertir(&a,&b);
    printf("post inversion: a=%d, b=%d \n",a,b);
    return 0;
}