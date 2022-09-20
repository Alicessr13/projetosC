#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas=0, colunas=0, maior =0;

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

    printf("Maior elemento de cada linha: \n");
    for(int i=0; i<linhas; i++){
        maior =0;
        for(int j=0; j<colunas; j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
        printf("%d\n",maior);
    }
    return 0;
}
