/*
Objetivo: Leia o salário de um funcionário, calcule e imprima o valor do novo salário sabendo que ele recebeu
um aumento de 25%.
*/

#include <stdio.h>

int main()
{
    double salario;
    double novoSalario;
    
    scanf("%lf", &salario);
    
    novoSalario = salario*1.25;
    
    printf("%lf", novoSalario);

    return 0;
}
