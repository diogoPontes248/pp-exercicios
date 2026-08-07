/*
Objetivo: Receba o valor do salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação
for maior que 30% do salário, imprima “Emprestimo nao concedido”. Caso contrário, imprima
“Emprestimo concedido”.
*/


#include <stdio.h>

int main()
{
    double salario, prestacao;
    
    scanf("%lf %lf", &salario, &prestacao);
    
    if(prestacao > salario * 0.30){
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo concedido");
    }

    return 0;
}
