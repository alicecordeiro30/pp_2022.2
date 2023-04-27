#include <stdio.h>

int numero(n){
    if(n>0)
    printf("1");

    else if(n==0)
    printf("0");

    else
    printf("-1");
    }

int main (){
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    numero(n);

    return 0;

    }
