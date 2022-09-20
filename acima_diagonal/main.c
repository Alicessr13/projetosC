#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas=0, colunas=0, soma=0;

    printf("Qual a ordem da matriz? ");
    scanf("%d",&linhas);
    colunas = linhas;

    int matriz[linhas][colunas];

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            if(j>i){
                soma = soma+matriz[i][j];
            }
        }
    }

    printf("Soma dos elementos da diagonal principal = %d\n",soma);
    return 0;
}
