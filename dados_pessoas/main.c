#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, homens;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d",&n);

    double maior, menor,soma, media, mulheres;

    typedef struct{
        char genero;
        double altura;
    }pessoas;
    pessoas vetor[n];

    for(int i=0; i<n; i++){
        printf("Altura da %da pessoa: ",i+1);
        scanf("%lf",&vetor[i].altura);
        printf("Genero da %da pessoa: ",i+1);
        scanf("%s",&vetor[i].genero);

        if(i==0 || vetor[i].altura<menor){
            menor = vetor[i].altura;
        }
        if(vetor[i].altura>maior){
            maior = vetor[i].altura;
        }
        if(vetor[i].genero == 'f'){
            soma = soma+vetor[i].altura;
            mulheres = mulheres+1;
        }
        if(vetor[i].genero == 'm'){
            homens = homens+1;
        }
    }
    media = soma/mulheres;
    printf("Menor altura: %.2lf\n",menor);
    printf("Maior altura: %.2lf\n",maior);
    printf("media das altura: %.2lf\n",media);
    printf("Numero de homens: %d\n",homens);

    return 0;
}
