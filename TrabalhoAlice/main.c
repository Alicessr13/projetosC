#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Aluna: Alice Stephanie Soares Ribeiro\n\n");
    int codigo, alcool = 0, gasolina=0, diesel=0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d",&codigo);

    while(codigo != 4){
        if(codigo == 1){
            alcool = alcool +1;
        }
        if(codigo == 2){
            gasolina = gasolina +1;
        }
        if(codigo == 3){
            diesel = diesel +1;
        }

        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d",&codigo);
    }

    printf("Muito obrigado!\n");
    printf("Alcool = %d\n",alcool);
    printf("Gasolina = %d\n",gasolina);
    printf("Diesel = %d\n",diesel);
    return 0;
}
