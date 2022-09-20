#include <stdio.h>
#include <stdlib.h>

int main()
{
    char couf;
    float celsius, fahren;
    printf("Voce vai digitar a temperatura em qual escala (c/f)? ");
    scanf("%c",&couf);

    if(couf == 'c'){
        printf("Digite a temperatura em celsius: ");
        scanf("%f",&celsius);
        fahren = celsius * 1.8 +32;
        printf("Temperatura equivalente em celsius: %.2f", fahren);

    }
    if(couf == 'f'){
        printf("Digite a temperatura em fahrenheit: ");
        scanf("%f",&fahren);
        celsius = (fahren - 32)/1.8;
        printf("Temperatura equivalente em celsius: %.2f", celsius);
    }

    return 0;
}
