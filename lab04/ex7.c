#include <stdio.h>
#include <stdlib.h>

float temperatura (float t) {
    return t * (9.0/5.0) + 32.0;
}
    
int main (){
    float t, conversao;
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &t);

    conversao = temperatura(t);
    printf("A temperatura em graus fahrenheit eh: %f", conversao);
    return 0;
}

