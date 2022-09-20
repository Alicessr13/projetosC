#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float coeA, coeB, coeC, delta, x, x1, x2;

    printf("Coeficiente A: ");
    scanf("%f",&coeA);

    printf("Coeficiente B: ");
    scanf("%f",&coeB);

    printf("Coeficiente C: ");
    scanf("%f",&coeC);

    delta = pow(coeB,2)-4*coeA*coeC;

    x = sqrt(delta);

    x1 = (-coeB+x)/(2*coeA);

    x2 = (-coeB-x)/(2*coeA);


    if(x1!=(double)x1 || x2!=(double)x2){
        printf("Essa equacao nao possui raizes reais");
    }
    else{
        printf("X1: %.4f\n",x1);
        printf("X2: %.4f\n",x2);
    }

    return 0;
}
