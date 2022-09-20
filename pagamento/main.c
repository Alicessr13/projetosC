#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    float valorhora, horas, salario;

    printf("NOME: ");
    gets(nome);

    printf("Valor por hora: ");
    scanf("%f",&valorhora);

    printf("Horas trabalhadas: ");
    scanf("%f",&horas);

    salario = valorhora*horas;

    printf("O pagamento de %s deve ser %.2f",nome,salario);

    return 0;
}
