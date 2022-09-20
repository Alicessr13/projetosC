#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d",&n);

    typedef struct{
        char nome[40];
        double nota1;
        double nota2;
    }alunos;
    alunos vetor[n];



    for(int i=0; i<n; i++){
        printf("Digite nome, primeira e segunda nota do %da aluno: \n",i+1);
        fflush(stdin);
        scanf("%[^\n]",&vetor[i].nome);
        scanf("%lf",&vetor[i].nota1);
        scanf("%lf",&vetor[i].nota2);
    }

    printf("Alunos aprovados: \n");
    for(int i=0; i<n; i++){
        media = (vetor[i].nota1 + vetor[i].nota2) /2;

        if(media>=6){
            printf("%s\n",vetor[i].nome);
        }
    }
    return 0;
}
