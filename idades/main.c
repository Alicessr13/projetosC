#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float idade1, idade2, media;
    char pessoa1[20], pessoa[20];

    printf("Digite os dados da primeira pessoa: \n");
    printf("Nome: ");
    fflush(stdin);
    gets(pessoa1);
    printf("Idade: ");
    scanf("%f",&idade1);

    printf("Digite os dados da segunda pessoa: \n");
    printf("Nome: ");
        fflush(stdin);
    gets(pessoa);
    printf("Idade: ");
    scanf("%f",&idade2);

    media = (idade1+idade2)/2;
    printf("A idade media de %s e %s e de %.1f",pessoa1, pessoa , media);

    return 0;
}
