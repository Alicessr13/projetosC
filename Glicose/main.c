#include <stdio.h>
#include <stdlib.h>

int main()
{
    float glicose;

    printf("Digite a medida da glicose: ");
    scanf("%f",&glicose);

    if(glicose<=100){
        printf("Classificacao: normal");
    }
    if(glicose>100 && glicose <=140){
        printf("Classificacao: elevado");
    }
    if(glicose>140){
        printf("Classificacao: diabetes");
    }

    return 0;
}
