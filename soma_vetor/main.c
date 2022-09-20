#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;
    double soma=0, media;

    printf("Quantos numeros vc vai digitar: ");
    scanf("%d",&numeros);

    double vetor[numeros];

    for(int i=0; i<numeros; i++){
        printf("Digite um numero: ");
        scanf("%lf",&vetor[i]);
    }

    printf("VALORES = ");
    for(int i=0; i<numeros; i++){
        printf("%.1lf ",vetor[i]);
    }

    for(int i=0; i<numeros; i++){
        soma = soma + vetor[i];
    }
    printf("\nSOMA = %.1lf\n",soma);

    media = soma / numeros;
    printf("MEDIA: %.1lf\n",media);


    return 0;
}
