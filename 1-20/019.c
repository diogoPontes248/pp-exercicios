/*
Objetivo: Dados três valores, A, B e C, verificar se eles podem ser valores dos lados de um triângulo e, se forem,
qual é o tipo do triângulo (equilátero, isósceles ou escaleno), considerando os seguintes conceitos:
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
- Chama-se equilátero o triângulo que tem três lados iguais.
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/

#include <stdio.h>

int main()
{
    double A, B, C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if(A < B + C && B < A + C && C < A + B){
        if(A == B && B == C){
            printf("Equilatero");
        }
        else if(A == B || A == C || C == B){
            printf("Isosceles");
        }
        else{
            printf("Escaleno");
        }
    }
    else{
        printf("Não eh triangulo");
    }

    return 0;
}
