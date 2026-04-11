#include <stdio.h>

int num;

//funcion que devuelve el cuadrado de un numero
int cuadrado(int num){
    return num * num;
}

//funcion void q calcula el cuadrado de un num y muestra su direccion y contenido

void cuadrado_void (int *num) {
    printf("Direccion de la variable dentro de la funcion: %p\n", (void*)num);

    //Valor de la variable
    *num = (*num)*(*num);
    printf("Contenido de la variable dspues del cuadrado: %d\n", *num);
}

int main(){
    int numero;
    printf("Ingrese el numero: ");
    scanf("%d", &numero);

    /*
    int resultado = cuadrado(numero);

    printf("El resultado de %d es %d\n", numero, resultado);
*/
    printf("Direccion de la variable antes de llamar a la funcion: %p\n",(void*)&numero);
    printf("Contenido de la variable en main antes: %d\n", numero);

    //Llamamos a la funcion pasando la direccion de la variable

    cuadrado_void(&numero);

    printf("Contenido de la variable en main despues de la funcion: %d\n", numero);


    return 0;
}