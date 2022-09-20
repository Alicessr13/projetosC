#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;

    printf("Digite o valor de X: ");
    scanf("%f",&x);

    printf("Digite o valor de Y: ");
    scanf("%f",&y);

    while(x!=0 && y!= 0){
        if(x>0 && y>0){
        printf("Primeiro quadrante!\n");
        }
        if(x<0 && y>0){
        printf("Segundo quadrante!\n");
        }
        if(x<0 && y<0){
        printf("Terceiro quadrante!\n");
        }
        if(x>0 && y<0){
        printf("Quarto quadrante!\n");
        }

        printf("Digite o valor de X: ");
    scanf("%f",&x);

    printf("Digite o valor de Y: ");
    scanf("%f",&y);

    }

    return 0;
}
