/*
Objetivo: Efetue a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores
lidos.
*/

#include <stdio.h>

int main()
{
    double num1, num2, num3;
    double resultado;
    
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    
    resultado = num1*num1 + num2*num2 + num3*num3;
    
    printf("%lf", resultado);

    return 0;
}
