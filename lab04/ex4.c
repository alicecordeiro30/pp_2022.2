#include <stdio.h>
#include <math.h>

int verifica (int n){
    int raiz;

    raiz = sqrt (n);

    if(raiz*raiz == n){
        printf("Quadrado perfeito");
    }
    else if(n<=0){
        printf("Nao eh quadrado perfeito");
    }
    else
        printf("Nao eh quadrado perfeito");

    return 0;
}

int main(){
    int numero;

    printf("Digite um numero:");
    scanf("%d", &numero);

    verifica(numero);

    return 0;
}