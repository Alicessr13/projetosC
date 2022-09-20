#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas, soma=0;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d",&linhas);

    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d",&colunas);

    int matrizA[linhas][colunas];
    int matrizB[linhas][colunas];

    printf("Digite os valores da matriz A: \n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }

    printf("Digite os valores da matriz b: \n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Elemento: [%d,%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            soma= matrizA[i][j]+matrizB[i][j];
            printf("%d ",soma);
        }
        printf("\n");
            }
    return 0;
}
