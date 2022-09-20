#include "helper_alice.h"

void menu(){
    system("cls");
    printf("Digite 1 para soma");
    printf("\n2 para subtracao");
    printf("\n3 para divisao");
    printf("\n4 para multiplicacao");
    printf("\ne 5 para sair");
    printf("\n");
}

int soma(int numero1, int numero2){
    return numero1 + numero2;
}

int subtracao(int numero1, int numero2){
    return numero1 - numero2;
}

double divisao(double numero1, double numero2){
    return numero1 / numero2;
}

int multiplicacao(int numero1, int numero2){
    return numero1 * numero2;
}
