#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dardo1, dardo2, dardo3;

    printf("Digite as 3 distancias: \n");
    scanf("%f",&dardo1);
    scanf("%f",&dardo2);
    scanf("%f",&dardo3);

    if(dardo1>dardo2 && dardo1>dardo3){
        printf("MAIOR DISTANCIA: %.2f",dardo1);
    }
    if(dardo2>dardo1 && dardo2>dardo3){
        printf("MAIOR DISTANCIA: %.2f",dardo2);
    }
    if(dardo3>dardo1 && dardo3>dardo2){
        printf("MAIOR DISTANCIA: %.2f",dardo3);
    }

    return 0;
}
