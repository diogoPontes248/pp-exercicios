/*
Objetivo: Escreva um programa C que leia uma string e converta todos os caracteres para minúscula. Dica:
some 32 aos caracteres cujo código ASCII esteja entre 65 e 90.
*/

#include <stdio.h>

int main()
{
    char s[300];
    
    printf("Digite a string: ");
    fgets(s, 300, stdin);
    
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        else if(s[i] > 64 && s[i] < 91){
            s[i] += 32;
        }
        i++;
    }
    
    printf("String modificada: %s\n", s);

    return 0;
}