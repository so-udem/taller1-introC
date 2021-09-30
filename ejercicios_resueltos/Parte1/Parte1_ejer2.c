#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Programa para imprimir los nuemeros en notacion cientifica.\n");
    printf("Escriba el número que desea convertir: ");
    scanf("%f", &x);
    
    printf("El valor de %f en notación cientifica es %E \n", x,x);

    return 0; 
}