#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     float a,b,c,x1,x2,delta;
    printf("Digite o valor de A: ");
    scanf("%f",&a);
    printf("Digite o valor de B:");
    scanf("%f",&b);
    printf("Digite o valor de C:");
    scanf("%f",&c);
    delta = (b*b) - 4*(a*c);

    if(delta < 0){
        printf("impossivel nos reais");
        return 0;
    }

    if((2*a)==0){
        printf("impossivel nos reais");
        return 0;
    }

    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("Resultado de x1:%2f",x1);
    printf("Resultado de x2:%2f",x2);

    return 0;
}
