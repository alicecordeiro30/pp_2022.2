#include <stdio.h>

int maior(int x, int y){
    if(x>y)
    printf("%d eh maior que %d", x, y);

    else
    printf("%d eh maior que %d", y, x);

    return 0;
}

int main(){
    int x, y;
    printf("Digite dois numeros distintos: ");
    scanf("%d%d", &x, &y);

    maior(x, y);

    return 0;
}