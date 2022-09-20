#include <stdio.h>
#include <stdlib.h>

int paraSegundos(int horas, int minutos, int segundos);

int main()
{
    int horas, minutos, segundos;
    printf("Digite as horas, os minutos e os segundos: \n");
    scanf("%d%d%d",&horas,&minutos,&segundos);

    printf("Conversao para segundos = %d",paraSegundos(horas,minutos,segundos));
    return 0;
}

int paraSegundos(int horas, int minutos, int segundos){
    int segun;
    segun = (horas*3600)+(minutos*60)+segundos;
    return segun;
}
