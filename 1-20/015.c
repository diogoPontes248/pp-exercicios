/*
Objetivo: Leia um número real. Se o número lido for positivo, imprima a raiz quadrada; se for negativo, imprima o
número ao quadrado.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double numero;
    
    scanf("%lf", &numero);
    
    if(numero >= 0){
        numero = sqrt(numero);
    }
    else{
        numero = numero*numero;
    }
    
    printf("%lf", numero);
    
    return 0;
}
