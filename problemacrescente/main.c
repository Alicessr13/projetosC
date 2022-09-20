#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("digite o primeiro valor: ");
    scanf("%d", &x);

    printf("digite o segundo valor: ");
    scanf("%d", &y);

    while(y != x){
        if (x>y){
            printf("ordem decrescente! \n");
        }
        if (y>x){
            printf("ordem crescente! \n");
        }

        printf("digite o primeiro valor: ");
        scanf("%d", &x);

        printf("digite o segundo valor: ");
        scanf("%d", &y);
    }
    printf("os valores sao iguais ");

    return 0;
}
