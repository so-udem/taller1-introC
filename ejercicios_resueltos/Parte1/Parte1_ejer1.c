#include <stdio.h>

int main()
{
    char nom[20];
	
    printf("Ingrese su nombre \n");
    fgets(nom,20,stdin);
    printf("\n El nombre ingreado fue:  %s",nom);
    
    return 0;
}