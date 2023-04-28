#include <stdio.h>

int conversao (h, m, s){
    int hora, minuto, segundo;

    hora = h*3600;
    minuto = m*60;
    segundo = s;

    return hora+minuto+segundo;
}

int main(){
    int hora, minuto, segundo;

    printf("Informe as horas, minutos e segundos: ");
    scanf("%d%d%d", &hora, &minuto, &segundo);

    printf("A hora informada convertida em segundos eh: %d", conversao(hora, minuto, segundo));

    return 0;
}