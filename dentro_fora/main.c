#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, quantnum, dentro = 0, fora = 0;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &quantnum);

    for(int i = 0; i<quantnum; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero>=10 && numero<=20){
            dentro = dentro +1;
        }
        else{
            fora = fora +1;
        }
    }
    printf("%d DENTRO\n",dentro);
    printf("%d FORA\n",fora);
    return 0;
}
