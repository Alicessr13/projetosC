#include <stdio.h>
#include <stdlib.h>
//include <string.h>

int main()
{
    int numero, menos16, posicao;

    printf("Quantas pessoas serao digitadas: ");
    scanf("%d",&numero);

    typedef struct{
        char nome[40];
        int idade;
        double altura;
    }pessoas;
    pessoas vetor[numero];

    double soma =0, media, porcentagem;

    for(int i =0; i<numero; i++){
        strcpy(vetor[i].nome, "Null");
        vetor[i].idade = 0;
        vetor[i].altura = 0.0;
    }

    for(int i=0; i<numero; i++){
        printf("Dados da %da pessoa:\n", i + 1);

        printf("Nome: ");
        scanf("%s%*c",&vetor[i].nome);

        printf("Idade: ");
        scanf("%d%*c",&vetor[i].idade);

        printf("Altura: ");
        scanf("%lf%*c",&vetor[i].altura);


    }

    for(int i = 0; i<numero; i++){

        soma = soma +vetor[i].altura;

        if(vetor[i].idade<16){
            menos16 = menos16+1;
        }
    }

    media = soma /numero;
    printf("Media das alturas: %.2lf\n",media);

    porcentagem = (menos16*100)/numero;
    printf("Pessoas com menos de 16: %.2lf\n",porcentagem);

    for(int i =0; i<numero; i++){
        if(vetor[i].idade<16){
            posicao = i;
            printf("%s\n",vetor[posicao].nome);
        }

    }

    return 0;
}
