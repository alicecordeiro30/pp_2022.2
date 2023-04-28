#include <stdio.h>
#include <stdlib.h>

int ehTriangulo (float a, float b, float c) {
    if (a<b+c && b<a+c && c<a+b)
    return 1;
    else
    return 0; 
}

void tipo (float a, float b, float c) {
    if (a==b && b==c)
    printf("Triangulo equilatero ");
    else if (a==b || b==c || a==c)
    printf("Triangulo isosceles ");
    else
    printf("Triangulo escaleno");
    
}

int main () {
    float a, b, c;
    printf("Digite os lados do triangulo: ");
    scanf("%f%f%f", &a, &b, &c);

    if (ehTriangulo(a,b,c))
    tipo(a,b,c);
    else 
    printf("Nao eh um triangulo");

    return 0;
}