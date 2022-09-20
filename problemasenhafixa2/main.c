#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;

    printf("Digite a senha: ");
    scanf("%d",&senha);

    do{
        printf("Senha invalida! \nTente novamente: ");
        scanf("%d",&senha);
    }while(senha != 2002);


    printf("Acesso permitido!");
    return 0;
}
