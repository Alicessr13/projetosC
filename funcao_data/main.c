#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dataextenso(int dia, int mes, int ano);

int main()
{
    int dia,mes, ano;

    printf("Digite o dia, mes e ano: \n");
    scanf("%d",&dia);
    scanf("%d",&mes);
    scanf("%d",&ano);

    dataextenso(dia,mes,ano);

    return 0;
}

void dataextenso(int dia, int mes, int ano){
    char mes2[20];
    switch(mes){
    case 1:
        strcpy(mes2, "janeiro");
        break;

    case 2:
        strcpy(mes2, "fevereiro");
        break;

    case 3:
        strcpy(mes2, "março");
        break;

    case 4:
        strcpy(mes2, "abril");
        break;

    case 5:
        strcpy(mes2, "maio");
        break;

    case 6:
        strcpy(mes2, "junho");
        break;

    case 7:
        strcpy(mes2, "julho");
        break;

    case 8:
        strcpy(mes2, "agosto");
        break;

    case 9:
        strcpy(mes2, "setembro");
        break;

    case 10:
        strcpy(mes2, "outubro");
        break;

    case 11:
        strcpy(mes2, "novembro");
        break;

    case 12:
        strcpy(mes2, "dezembro");
        break;
    }

    printf("%d de %s de %d",dia,mes2,ano);
}
