#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, horas, minutos, segundos2, resto;

    printf("Digite a duração em segundos: ");
    scanf("%d",&segundos);

    horas = segundos/3600;
    resto = segundos%3600;
    minutos = resto /60;
    segundos2 = resto%60;

    printf("%d:%d:%d",horas,minutos,segundos2);

    return 0;
}
