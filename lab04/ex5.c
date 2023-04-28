#include <stdio.h>
#include <stdlib.h>

float volume(float raio){
    float pi = 3.1415;
    return (4/3)* pi * (raio*raio*raio);
}

int main(){
    float raio;
	
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
	
    printf("O volume da esfera eh: %f", volume(raio));
    return 0;
}