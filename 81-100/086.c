/*
Objetivo: Reescreva o exercício 82 de forma recursiva.
*/

#include <stdio.h>

int somatorio(int n){
    if(n == 1){
        return 1;
    }
    
    return n + somatorio(n - 1);
}

int main()
{
    int a;
    
    scanf("%d", &a);
    
    printf("%d", somatorio(a));

    return 0;
}
