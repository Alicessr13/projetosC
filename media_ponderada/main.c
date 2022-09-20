#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantnota;
    double nota1, nota2, nota3, media;

    printf("Quantos casos voce vai digitar: ");
    scanf("%d",&quantnota);

    for(int i = 0; i<quantnota; i++){
        printf("Digite tres notas:\n");
        scanf("%lf %lf %lf",&nota1, &nota2, &nota3);
        media = ((nota1*2)+(nota2*3)+(nota3*5))/10;
        printf("MEDIA = %.1lf\n",media);
    }
    return 0;
}
