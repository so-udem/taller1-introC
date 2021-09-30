#include <stdio.h>

int main()
{
    char nom[30];
	
    printf("Ingrese su nombre \n");
    fgets(nom,30,stdin);
    printf(" El nombre ingreado fue:'%s' \n",nom);
    printf("\n El nombre desplegado a la derecha  es:%20s\n",nom);
    printf("\n El nombre desplegado a la izquierda es:%-20s\n",nom);
    printf("\n El nombre ingreado 3 caracteres mas amplio:%11s\n",nom);
    
    return 0;
}