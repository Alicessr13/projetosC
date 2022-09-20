#include "helper_km_litros.h"

void consumo_km_litros(double km, double litros){
    double consumo=0;
    consumo+= km/litros;

    if(consumo<8){
        printf("Venda o carro!");
    }
    else if(consumo>=8 && consumo<=14){
        printf("Economico!");
    }
    else if(consumo>14){
        printf("Super economico!");
    }
}
