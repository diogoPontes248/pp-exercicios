/*
Objetivo: Crie um programa C que receba uma palavra e imprima de trás para frente.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[300];
    int i = 0;
    
    printf("Digite a palavra: ");
    fgets(s, 300, stdin);
    
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
    
    for(i = strlen(s); i >= 0; i--){
        printf("%c", s[i]);
    }

    return 0;
}