#include <stdio.h>
#include <stdlib.h>

float consumo (float km, float l){
    if (km/l<8)
    printf("Venda o carro!");
    
    else if (km/l>=8 && km/l<14)
        printf("Economico!");

    else 
    printf("Super economico!");
    
    return 0;
}

int main () {
    float km, l;
    printf("Digite a distancia em km e a gasolina em litros: ");
    scanf("%f%f", &km, &l);

    consumo(km, l);
    return 0;
}
