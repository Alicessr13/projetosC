#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantnum;
    double numerador, denominador, divisao;
    printf("Quantos casos vc vai digitar? ");
    scanf("%d",&quantnum);

    for(int i = 0; i < quantnum; i++){
        printf("Entre com o numerador: ");
        scanf("%lf",&numerador);
        printf("Entre com o denominador: ");
        scanf("%lf",&denominador);
        divisao = numerador/denominador;

        if(denominador==0){
            printf("Divisao impossivel\n");
        }
        else{
            printf("Divisao = %.2lf\n",divisao);
        }

    }
    return 0;
}
