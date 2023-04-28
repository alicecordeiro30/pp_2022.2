#include <stdio.h>
#include <stdlib.h>

void operacao (float x, float y, char sinal){
    if (sinal == "+")
    return x+y;
    else if (sinal == "-")
    return x-y;
    else if (sinal == "*")
    return x*y;
    else if (sinal == "/")
    return x/y;
    
}

int main (){
    float x, y;
    char sinal;
    
    printf("Digite dois valores: ");
    scanf("%f%f", &x, &y);
    
    printf("Digite o sinal da operacao que deseja realizar: ");
    scanf("%c", &sinal);

    operacao(x, y, sinal);
    return 0;
    }
