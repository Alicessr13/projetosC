#include <stdio.h>
#include <stdlib.h>

double mediaAP(double nota1, double nota2, double nota3, char aoup);

int main()
{
    double nota1, nota2, nota3;
    char aoup;

    printf("Digite a primeira nota: ");
    scanf("%lf",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf",&nota2);

    printf("Digite a terceira nota:");
    scanf("%lf",&nota3);

    setbuf(stdin,NULL);
    printf("Media aritmetica ou ponderada [a ou p]? ");
    scanf("%[^\n]",&aoup);

    printf("A media e: %.2lf",mediaAP(nota1,nota2,nota3,aoup));
    return 0;
}

double mediaAP(double nota1, double nota2, double nota3, char aoup){
    double mediaA, mediaP;
    if(aoup == 'a'){
        mediaA = (nota1+nota2+nota3)/3;
        return mediaA;
    }
    else if(aoup == 'p'){
         mediaP = ((nota1*5)+(nota2*3)+(nota3*2))/10;
         return mediaP;
    }
}
