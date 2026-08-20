/*
Objetivo: Crie um programa C que calcule o comprimento de uma string sem utilizar a função strlen().
*/

#include <stdio.h>

int main()
{
    char s[300];
    int i = 0;
    
    fgets(s, 300, stdin);
    
    //remove o \n gerado pela função fgets.
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
    
    i = 0;
    
    while(s[i] != '\0'){
        i++;
    }
    
    printf("Comprimento da string: %d", i);

    return 0;
}