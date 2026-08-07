/*
Objetivo: Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir de sua idade
e do ano atual.
*/
#include <stdio.h>

int main()
{
    int idade;
    int anoAtual;
    int anoNascimento;
    
    scanf("%d %d", &idade, &anoAtual);
    
    anoNascimento = anoAtual - idade;
    
    printf("Ano de nascimento: %d", anoNascimento);
    
    return 0;
}
