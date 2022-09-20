#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf("Digite o valor de x: ");
    scanf("%d",&valor);

    for(int i = 1; i<=valor; i++){
        if(i%2 != 0){
            printf("%d\n",i);
        }
    }

    return 0;
}
