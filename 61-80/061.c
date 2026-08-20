/*
Objetivo: Escreva um programa C que leia uma string e converta todos os caracteres para maiúscula. Dica:
subtraia 32 dos caracteres cujo código ASCII esteja entre 97 e 122.
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
        else if(s[i] > 96 && s[i] < 123){
            s[i] -= 32;
        }
        i++;
    }
    
    printf("String modificada: %s\n", s);

    return 0;
}