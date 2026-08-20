/*
Objetivo: Crie um programa C que receba uma palavra e calcule quantas vogais essa palavra possui.
*/

#include <stdio.h>

int main()
{
    char s[300];
    int contador = 0;
    
    printf("Digite a palavra: ");
    fgets(s, 300, stdin);
    
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
    
    i = 0;
    while(s[i] != '\0'){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
           s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            contador++;
        }
        i++;
    }
    
    printf("Quantidade de vogais: %d", contador);

    return 0;
}