#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hInicial;
    int hFinal;
    int horajogo;

    printf("Hora inicial: ");
    scanf("%i",&hInicial);

    printf("Hora final: ");
    scanf("%i",&hFinal);

    if (hInicial > hFinal) {
            horajogo = 24 - (hInicial - hFinal);
	printf("O JOGO DUROU %i HORA(S)",horajogo);
} else if (hFinal > hInicial) {
    horajogo = (hFinal - hInicial);
	printf("O JOGO DUROU %i HORA(S)",horajogo);
} else {
	printf("O JOGO DUROU 24 HORA(S)");
}

    return 0;
}
