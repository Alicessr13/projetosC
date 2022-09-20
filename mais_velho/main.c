#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior, posicao;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d",&n);

    typedef struct{
        char nome[40];
        int idade;
    }pessoas;
    pessoas vetor[n];

    /*for(int i=0; i<n; i++) {
        strcpy(vetor[i].nome, "NULL");
        vetor[i].idade = 0;
    }*/

    for(int i=0; i<n; i++){

        printf("Dados da %d pessoa: \n",i+1);
        printf("Nome: ");
        scanf("%s",&vetor[i].nome);
        printf("Idade: ");
        scanf("%d",&vetor[i].idade);

        if(vetor[i].idade>maior){
            maior = vetor[i].idade;
        }
        if(vetor[i].idade==maior){
            posicao = i;
        }
    }

    printf("\nPessoa mais velha: %s",vetor[posicao].nome);


    return 0;
}
