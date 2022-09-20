#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, quantnum;
    printf("Quando numeros vc vai digitar: ");
    scanf("%d",&quantnum);

    for(int i = 1; i<=quantnum; i++){
        printf("Digite um numero: ");
        scanf("%d",&num);
        if(num%2 == 0 && num!=0){
            printf("PAR ");
        }
        if(num%2 != 0 && num!=0){
            printf("IMPAR ");
        }
        if(num == 0){
            printf("NULO\n");
        }
        if(num <0){
            printf("NEGATIVO\n");
        }
        if(num >0){
            printf("POSITIVO\n");
        }
    }

    return 0;
}
