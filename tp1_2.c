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
    printf("Contenido de la variable despues del cuadrado: %d\n", *num);
}

//Funcion para invertir dos valores
    void invertirValores (int *a, int *b){
        int aux; 

        aux = *a;
        *a = *b;
        *b = aux;
    }

    //Funcion void para devolver en "a" el valor mas chico y en "b" el mas grande
    void orden(int *a,int *b){ 
        if (*a > *b)
        {
             int aux = *a;
             *a = *b;
             *b = aux;
        }
        

    }

int main(){
    int numero;
    printf("Ingrese el numero: ");
    scanf("%d", &numero);

    
    int resultado = cuadrado(numero);

    printf("El resultado del cuadrado de  %d es %d\n", numero, resultado);

    printf("Direccion de la variable antes de llamar a la funcion: %p\n",(void*)&numero);
    printf("Contenido de la variable en main antes: %d\n", numero);

    //Llamamos a la funcion pasando la direccion de la variable

    cuadrado_void(&numero);

    printf("Contenido de la variable en main despues de la funcion: %d\n", numero);

    //Numeros para usar funcion invertir
    int a, b;
   /* a = 10;
    b = 4;
*/
    printf("Escriba dos numeros para invertir:\n");
    scanf("%d %d", &a, &b);

    //funcion de cambiar numero
    printf("Valor orginal de a = %d y b = %d\n", a, b);
    invertirValores(&a, &b);
    printf("El valor cambiado de a = %d y b = %d\n", a,b);

    //Numeros para usar funcion de ordernar
    int c,d;
    /*c = 8;
    d = 6;
*/
    printf("Escriba dos numeros ordernar de menor a mayor:\n");
    scanf("%d %d", &c, &d);

    
    printf("Valor original de c = %d y c = %d\n", c,d);

    orden(&c, &d);

    printf("El valor ordernado de c = %d y d = %d\n", c,d);


    return 0;
}