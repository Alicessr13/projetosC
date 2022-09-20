#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, m=0, negativos=0;

    printf("Qual a ordem da matriz? ");
    scanf("%d",&n);
    m = n;

    int matriz[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Diaginal principal: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==j){
                printf("%d ",matriz[i][j]);
                }
            if(matriz[i][j]<0){
                negativos++;
            }
        }
    }
    printf("\n");
    printf("Quantidade de negativos = %d",negativos);
    return 0;
}
