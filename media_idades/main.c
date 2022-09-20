#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, numerop;
    double soma, media;

    printf("Digite as idade: \n");
    scanf("%d",&idade);

    if(idade<0){
        printf("Impossivel calcular!");
    }
    else{
        soma = 0;
        media = 0;
        numerop = 0;

        while(idade >= 0){
            soma = soma + idade;
            numerop = numerop + 1;

            scanf("%d",&idade);
        }
        media = soma / numerop;
        printf("Media: %.2lf\n",media);
            }
    return 0;
}
