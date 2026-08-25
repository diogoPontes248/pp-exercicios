/*
Objetivo: Escreva uma função que receba 2 argumentos e troque seus valores.
*/

#include <stdio.h>

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    troca(&a, &b);
    
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
