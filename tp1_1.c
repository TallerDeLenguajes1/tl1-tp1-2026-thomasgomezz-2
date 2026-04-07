#include <stdio.h>

int main(){
    printf("Hola mundo.\n");

    int numero = 40; //1)Variable del tipo int 
    int *puntero = &numero; // 2)Puntero que apunta a la variable

//1) El contenido del puntero 
    printf("Contenido del puntero (Direccion almacenada): %p\n ", (void*)puntero );

    //2) Direccion de memoria almacenada por el puntero (igual que 1)
    printf("Direccion de memoria almacenada por el puntero: %p\n", (void*)puntero);

//3)Direccion de memoria de la variable
    printf("Direccion de memoria de la variable 'numero': %p\n", (void*)&numero);

    //4) Direccion de memoria del puntero
    printf("Direcion de memoria del puntero 'puntero': %p\n", (void*)&puntero);

    //5)Tamaño de memroria utilizada por la variable
    printf("Tamanio de memoria de 'numero' con sizeof(): %zu bytes\n", sizeof(numero));


    return 0;
}