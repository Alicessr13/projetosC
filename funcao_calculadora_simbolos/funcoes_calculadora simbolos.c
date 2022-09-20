#include "helper_calculadora_simbolos.h"

double calc_simbolos(double valor1, double valor2, char simbolo){
    if(simbolo =='+'){
        return valor1+valor2;
    }
    else if(simbolo=='-'){
        return valor1-valor2;
    }
    else if(simbolo=='/'){
        return valor1/valor2;
    }
    else if(simbolo=='*'){
        return valor1*valor2;
    }
}
