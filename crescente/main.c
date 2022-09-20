#include <stdio.h>
#include <stdlib.h>

void limpar_entrada(){
    char c;
    while((c = getchar()) != '\n'&& c!= EOF){}

}
int main()
{
    int numero1, numero2;

    printf("Digite 2 numeros: ");
    scanf("%d",&numero1);
    scanf("%d",&numero2);

    while(numero1!=numero2){
        if(numero1<numero2){
            printf("Crescente \n");
        }
        else{
            printf("Decrescente \n");
        }

        printf("Digite outros 2 numeros: ");
        scanf("%d",&numero1);
        scanf("%d",&numero2);
    }

    return 0;
}
