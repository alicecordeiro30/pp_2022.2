#include <stdio.h>
#include <stdlib.h>

int inteiros (int n1, int n2) {
    int i, z, soma = 0;
    z = n1-n2;

    if(z<0) {
        for (i=1; z<=0; i++) {
            soma = z+soma;
            z = z+1;
        }
    }

    if(z<0) {
        for(i=1; z>=0; i++){
            soma = z+soma;
            z = z-1;
        }
    }
    return soma;
}
int main () {
    int n1, n2, funcao;
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d%d", &n1, &n2);


    printf("O valor da soma dos numeros entre os numeros digitados eh: %d", inteiros(n1,n2));

    return 0;
}