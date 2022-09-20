#include <stdio.h>
#include <stdlib.h>

int PosiNega(int num);

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    printf("%d",PosiNega(numero));
    return 0;
}

int PosiNega(int num){
    if(num<0){
        num = -1;
    }
    else if(num>0){
        num = 1;
    }
    else if(num==0){
        num = 0;
    }

    return num;
}
