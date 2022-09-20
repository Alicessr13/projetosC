#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas, positivos=0, linha, coluna;
    printf("Qual a ordem da matriz? ");
    scanf("%d",&linhas);
    colunas = linhas;

    int matriz[linhas][colunas];

    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            printf("Elemento: [%d,%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            if(matriz[i][j]>0){
                positivos = positivos+matriz[i][j];
            }
        }
    }
    printf("\n");
    printf("Soma dos positivos: %d\n",positivos);
    printf("\n");

    printf("Escolha uma linha: ");
    scanf("%d",&linha);
    printf("Linha escolhida: ");
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            if(i==linha){
                printf(" %d",matriz[i][j]);
            }
        }
    }

    printf("\n");
    printf("\nEscolha uma coluna: ");
    scanf("%d",&coluna);
    printf("Coluna escolhida: ");
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            if(j==coluna){
                printf(" %d",matriz[i][j]);
            }
        }
    }

    printf("\n");
    printf("\nDiagonal principal: ");
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            if(i==j){
                printf(" %d",matriz[i][j]);
            }
        }
    }

    printf("\n");
    printf("\nMatriz alterada: \n");
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            if(matriz[i][j]<0){
                matriz[i][j]= abs((matriz[i][j]*matriz[i][j]));
            }
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
