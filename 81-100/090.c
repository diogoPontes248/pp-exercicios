/*
Objetivo: Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
Associe variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros.
Imprima os valores das variáveis antes e após a modificação.
*/

#include <stdio.h>

int main()
{
    int inteiro = 10;
    double real = 3.14;
    char caractere = 'B';
    
    int *pInt;
    double *pDouble;
    char *pChar;
    
    pInt = &inteiro;
    pDouble = &real;
    pChar = &caractere;
    
    printf("inteiro: %d\n", inteiro);
    printf("real: %lf\n", real);
    printf("caractere: %c\n", caractere);
    printf("\n");
    
    *pInt = 2;
    *pDouble = 2.78;
    *pChar = 'U';
    
    printf("Após modificação: \n\n");
    
    printf("inteiro: %d\n", inteiro);
    printf("real: %lf\n", real);
    printf("caractere: %c\n", caractere);

    return 0;
}