#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;

    printf("Digite o valor de X: ");
    scanf("%f",&x);

    printf("Digite o valor de Y: ");
    scanf("%f",&y);

    if(x>0 && y>0){
        printf("Primeiro quadrante!");
    }
    if(x<0 && y>0){
        printf("Segundo quadrante!");
    }
    if(x<0 && y<0){
        printf("Terceiro quadrante!");
    }
    if(x>0 && y<0){
        printf("Quarto quadrante!");
    }
    if(x==0 && y==0){
        printf("Origem");
    }
    if(y==0 && x<0 || x>0){
        printf("EIXO X");
    }
    if(x==0 && y<0 || y>0){
        printf("EIXO Y");
    }
    return 0;
}
