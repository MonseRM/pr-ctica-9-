#include <stdio.h>
#include <stdlib.h>

int main() {
    int base, exponente, resultado, i;
    i=1;
    resultado = 1;
    printf("Introduzca un numero de base: \n");
    scanf("%d", &base);
    printf("Introduzca un numero de exponente: \n");
    scanf("%d", &exponente);
    
     do{
        resultado = resultado * base;
        i++;
    }while(i<=exponente);

    printf("El resultado es: %d", resultado);

    return 0;
}

