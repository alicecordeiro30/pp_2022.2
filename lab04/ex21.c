#include <stdio.h>
#include <stdlib.h>

int esc(int n){
    int i, j;

    for(i=1; i<=n; n++) {
        for(j=0; j<i; j++){
            printf("!");
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int n;
    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    esc(n);

return 0;
}