#include <stdio.h>
#include <stdlib.h>

float volume (float altura, float raio){
    float pi = 3.141592;
    return pi*raio*raio*altura;
}

int main () {
    float altura, raio;
    printf("Digite o valor da altura e do raio: ");
    scanf("%f%f", &altura, &raio);

    printf("O volume do cilindro eh: %f", volume(altura,raio));
    return 0;
}