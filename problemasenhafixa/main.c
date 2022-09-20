#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha, senhav = 2002;

    printf("Digite a senha: ");
    scanf("%d",&senha);

    while(senha != senhav){
        printf("Senha invalida! tente novamente: ");
        scanf("%d",&senha);
    }


    printf("Acesso permitido!");
    return 0;
}
