#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;

    printf("Digite 2 numeros inteiros: \n");
    scanf("%i",&numero1);
    scanf("%i",&numero2);

    if(numero1%numero2==0 || numero2%numero1==0){
        printf("Sao multiplos");
    }
    else{
        printf("Nao sao multiplos");
    }
    return 0;
}
