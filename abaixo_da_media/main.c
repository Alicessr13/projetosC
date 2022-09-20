#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;

    printf("Quantos elementos vai ter o vetor: ");
    scanf("%d",&numeros);

    double vetor[numeros], soma, media;

    for(int i=0; i<numeros; i++){
        printf("Digite um numero: ");
        scanf("%lf",&vetor[i]);
        soma = soma + vetor[i];
    }

    /*for(int i=0; i<numeros; i++){
        soma = soma + vetor[i];
    }*/
    media = soma /numeros;
    printf("\nMedia do vetor: %.3lf\n",media);

    printf("\nElementos abaixo da media: \n");
    for(int i=0; i<numeros;i++){
        if(vetor[i]<media){
            printf("%.1lf\n",vetor[i]);
        }
    }
    return 0;
}
