#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas;

    printf("Quantidade de linhas da matriz? ");
    scanf("%d",&linhas);

    printf("Quantidade de colunas da matriz? ");
    scanf("%d",&colunas);

    double matriz[linhas][colunas], soma;

    for(int i=0; i<linhas; i++){
        printf("Digite os elementos da %da. linha:\n",i+1);
        for(int j=0; j<colunas; j++){
            scanf("%lf",&matriz[i][j]);
        }
    }

    printf("VETOR GERADO: \n");
    for(int i=0; i<linhas; i++){
        soma=0;
        for(int j=0; j<colunas; j++){
            soma = soma+matriz[i][j];

        }
        printf("%.1lf\n",soma);
    }


    return 0;
}
