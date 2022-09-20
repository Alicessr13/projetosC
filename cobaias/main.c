#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantcaso, tipocobaia;
    double quantcobai, coelho, sapo, rato, total, percoelho, persapo, perrato;
    char cobaias;

    printf("Quantos casos serao digitados: ");
    scanf("%d",&quantcaso);

    for(int i = 1; i<=quantcaso; i++){
            quantcobai = 0;
        printf("quantidade de cobaias: ");
        scanf("%lf",&quantcobai);



        printf("Tipo de cobaia: ");
        scanf("%s",&cobaias);

        /*printf("Tipo de cobaia: ");
        scanf("%d",&tipocobaia);*/

        total = total + quantcobai;

        if(cobaias == 'c'){
            coelho = coelho + quantcobai;
        }
        if(cobaias == 's'){
            sapo = sapo + quantcobai;
        }
        if(cobaias == 'r'){
            rato = rato + quantcobai;
        }

    }
    printf("RELATORIO FINAL\n");
    printf("Total: %.2lf\n",total);
    printf("Total de coelhos: %.2lf\n",coelho);
    printf("Total de sapos: %.2lf\n",sapo);
    printf("Total de ratos: %.2lf\n",rato);

    percoelho = (coelho*100)/total;
    persapo = (sapo*100)/total;
    perrato = (rato*100)/total;

    printf("Porcentagem de coelhos: %.2lf\n",percoelho);
    printf("Porcentagem de sapos: %.2lf\n",persapo);
    printf("Porcentagem de ratos: %.2lf\n",perrato);

    return 0;
}
