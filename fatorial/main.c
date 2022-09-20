#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d",&num);

    for(int i = num; i>0; i--){
        fatorial = fatorial * num ;
        num = num -1;
    }
    printf("FATORIAL = %d",fatorial);
    return 0;
}
