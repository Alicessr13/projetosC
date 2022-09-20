#include <stdio.h>
#include <stdlib.h>
#include "helper_alice.h"
int main()
{
    int opcao =0, numero1=0, numero2=0;



    do{
        menu();
        printf("\nOpcao escolhida: \n");
        scanf("%d",&opcao);

        if(opcao!=5){
            printf("Digite o primeiro numero:\n");
            scanf("%d",&numero1);
            printf("Digite o segundo numero:\n");
            scanf("%d",&numero2);

            switch(opcao){
            case 1:
                printf("O resultado da soma entre %d e %d eh: %d\n",numero1,numero2,soma(numero1,numero2));
                break;

            case 2:
                printf("O resultado da subtracao entre %d e %d eh: %d\n",numero1,numero2,subtracao(numero1,numero2));
                break;

            case 3:
                if(numero2!=0){
                printf("O resultado da divisao entre %d e %d eh: %.1lf\n",numero1,numero2,divisao(numero1,numero2));
                }
                else{
                    printf("Numero invalido!\n");
                    printf("Na divisao o numero divisor nao pode ser 0\n");
                    printf("PROGRAMA REINICIADO\n\n");
                    system("pause");
                    return main();
                }
                break;

            case 4:
                printf("O resultado da multiplicacao entre %d e %d eh: %d\n",numero1,numero2,multiplicacao(numero1,numero2));
                break;
            }

            }
        else{
            printf("Voce escolheu sair");
        }
        printf("\n");
        system("pause");
    }while(opcao != 5);

    setbuf(stdin,NULL);
    printf("\nFIM PROGRAMA!\n");
    system("pause");

    return 0;
}
