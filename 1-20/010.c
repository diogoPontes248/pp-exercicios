/*
Objetivo: Leia um valor inteiro em segundos e imprima-o em horas, minutos e segundos.
*/
#include <stdio.h>

int main()
{
    int segundos;
    int minutos;
    int horas;
    
    scanf("%d", &segundos);
    
    minutos = segundos/60;
    segundos = segundos % 60;
    horas = minutos/60;
    minutos = minutos % 60;
    
    printf("%d:%d:%d", horas, minutos, segundos);
    
    return 0;
}
