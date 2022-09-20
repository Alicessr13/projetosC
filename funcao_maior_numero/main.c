#include <stdio.h>
#include <stdlib.h>

int maiornumero(int num1, int num2);

int main()
{
    int num1, num2;
    printf("Digite 2 numeros: \n");
    scanf("%d%d",&num1,&num2);
    printf("O maior numero e: %d",maiornumero(num1,num2));
    return 0;
}

int maiornumero(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else if(num2>num1){
        return num2;
    }
}
