/*
Objetivo: Escreva uma função que receba um número inteiro positivo, n, e calcule o somatório de 1 até n.
*/

#include <stdio.h>

int somatorio(int n){
    int soma = 0;
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    
    return soma;
}

int somatoriaF(int n){
    return n * (n + 1) / 2;
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    printf("Sem fórmula: %d\n", somatorio(n));
    printf("Com fórmula: %d\n", somatoriaF(n));

    return 0;
}
