#include <stdio.h>

int arvore (int x){
    int i, j = 0, k = 0;
    
    for (i = 1; i <= x; ++i, k = 0) {
      for (j = 1; j <= x - i; ++j) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

int main(){
    
    int x;
    
    printf("Escreva o numero de linhas:\n");
    scanf("%d", &x);
    
    arvore (x);
    
    return 0;
}