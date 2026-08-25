/*
Objetivo: Escreva uma função que calcule a Sequência de Fibonacci, F, para um parâmetro n fornecido pelo
usuário:
0: se n = 0
1: se n = 1
f(n-1) + f(n-2): se n > 1
*/

#include <stdio.h>

int F(int n){
    if(n < 0){
        return -1;
    }
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return F(n - 1) + F(n - 2);
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    printf("Fibonacci: %d\n", F(n));

    return 0;
}
