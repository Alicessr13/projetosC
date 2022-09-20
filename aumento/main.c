#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, porcen, sal_atual;

    printf("Digite o salario da pessoa: ");
    scanf("%f",&salario);

    if(salario<=1000){
        porcen = salario * 0.2;
        sal_atual = porcen + salario;
        printf("Novo salario: %.2f\n",sal_atual);
        printf("Aumento: %.2f\n",porcen);
        printf("Porcentagem: 20");
    }
    if(salario>1000 && salario<=3000){
        porcen = salario * 0.15;
        sal_atual = porcen + salario;
        printf("Novo salario: %.2f\n",sal_atual);
        printf("Aumento: %.2f\n",porcen);
        printf("Porcentagem: 15");
    }
    if(salario>3000 && salario<=8000){
        porcen = salario * 0.10;
        sal_atual = porcen + salario;
        printf("Novo salario: %.2f\n",sal_atual);
        printf("Aumento: %.2f\n",porcen);
        printf("Porcentagem: 10");
    }
    if(salario>8000){
        porcen = salario * 0.05;
        sal_atual = porcen + salario;
        printf("Novo salario: %.2f\n",sal_atual);
        printf("Aumento: %.2f\n",porcen);
        printf("Porcentagem: 5");
    }
    return 0;
}
