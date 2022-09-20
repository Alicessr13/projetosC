#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma;

    printf("digite um numero inteiro: ");
    scanf("%d",&numero);
    soma = 0;

    while(numero!=0)
    {
        if(numero%2 == 0)
        {

            for(int i = 0; i <=4; i++)
            {
                soma = soma + numero;
                numero = numero + 2;
            }
        }
        else
        {
            numero = numero + 1;

            for(int i = 0; i <=4; i++)
            {
                soma = soma + numero;
                numero = numero + 2;
            }
        }

        printf("%d\n",soma);

        soma = 0;

        printf("digite um numero inteiro: ");
        scanf("%d",&numero);
    }
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Problema "pares_consecutivos"

    int x, soma;

    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%i", &x);

        if(x != 0 && x % 2 == 0)
        {
            soma = x + (x + 2) + (x + 4) + (x + 6) + (x + 8);
            printf("SOMA = %i\n", soma);
        }
        else if(x != 0 && x % 2 == 1)
        {
            soma = (x + 1) + (x + 3) + (x + 5) + (x + 7) + (x + 9);
            printf("SOMA = %i\n", soma);
        }
    } while (x != 0);

    return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Problema "pares_consecutivos"

    int x, soma;

    do
    {
        soma = 0;

        printf("Digite um numero inteiro: ");
        scanf("%i", &x);

        if(x != 0 && x % 2 == 0)
        {
            for (int i = x; i < x + 10; i += 2)
            {
                soma += i;
            }
            printf("SOMA = %i\n", soma);
        }
        else if(x != 0 && x % 2 == 1)
        {
            for (int i = x + 1; i < x + 10; i += 2)
            {
                soma += i;
            }
            printf("SOMA = %i\n", soma);
        }
    } while (x != 0);

    return 0;
}
*/
