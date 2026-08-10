/*
Objetivo: Faça um programa para verificar se um determinado número inteiro é divisível por 3 ou 5, mas não
simultaneamente pelos dois.
*/

#include <stdio.h>

int main()
{
    int numero;
    
    scanf("%d", &numero);
    
    if(numero % 3 == 0 && numero % 5 == 0){
        printf("Divisivel simultaneamento por 3 e 5.");
    }
    else if(numero % 3 == 0){
        printf("Divisivel por 3.");
    }
    else if(numero % 5 == 0){
        printf("Divisivel por 5.");
    }
    else{
        printf("Nao e divisivel nem por 3 e nem por 5.");
    }

    return 0;
}