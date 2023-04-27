#include <stdio.h>

int dobro (int n){
    return n*2;
}

int main (){
    int n, n2;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    n2 = dobro(n);

    printf("O dobro do numero informado eh: %d", n2);

    return 0;

    
}
