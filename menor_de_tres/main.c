#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;

    printf("Primeiro valor: ");
    scanf("%i",&valor1);

    printf("Segundo valor: ");
    scanf("%i",&valor2);

    printf("Terceiro valor: ");
    scanf("%i",&valor3);

    if(valor1<valor2 && valor1<valor3){
        printf("Menor: %i",valor1);
    }
    if(valor2<valor1 && valor2<valor3){
        printf("Menor: %i",valor2);
    }
    if(valor3<valor1 && valor3<valor2){
        printf("Menor: %i",valor3);
    }





    return 0;
}
