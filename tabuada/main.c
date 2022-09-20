#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor, numero = 0, multiplicacao;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d",&valor);

    for(int i = 0; i<10; i++){
        numero = numero +1;
        multiplicacao = valor * numero;
        printf("%d x %d = %d\n",valor,numero,multiplicacao);
    }

}
