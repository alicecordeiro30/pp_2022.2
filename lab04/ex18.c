#include <stdio.h>
#include <stdlib.h>

int inteiros(int n1, int n2){
    int i, resultado = n1;

    for(i=1; i<n2; i++) {
        resultado = resultado*n1;
    }
    return resultado;
}

int main() {
    int n1, n2;
    printf("Digite um valor inteiro e um expoente positivo: ");
    scanf("%d%d", &n1, &n2);

    printf("O resultado da exponenciacao eh: %d", inteiros(n1,n2));

return 0;
}