#include <stdio.h>
#include <stdlib.h>

float media (float n1, float n2, float n3, char letra) {
    float m;
    if(letra=='a'){
        m = (n1+n2+n3)/3.0;
    }
    else if (letra=='b') {
      m = (n1*5+n2*3+n3*2)/6.0; 
    }
    return m;      
}

int main () {
    float n1,n2,n3;
    char letra;
    printf("Digite suas 3 notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    printf("Digite a opcao desejada: a = media aritmetica ou b = media ponderada ");
    scanf("%c", &letra);

    printf("A media das notas eh: %f", media(n1,n2,n3,letra));
   
return 0;
}