#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa (float a, float b){
    return sqrt(a*a + b*b);
}

int main (){
    float a, b, c;
    printf("Digite os valores dos catetos: ");
    scanf("%f%f", &a, &b);

    c = hipotenusa(a,b);

    printf("O valor da hipotenusa eh: %f", c);
    return 0;
}