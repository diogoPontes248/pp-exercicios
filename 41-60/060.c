/*
Objetivo: Crie um programa C que leia uma string e conte o número de vogais e de consoantes.
*/

#include <stdio.h>

int main()
{
    char s[300];
    int vogais = 0;
    int consoantes = 0;
    
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
            vogais++;
        }
        else if((s[i] > 64 && s[i] < 91) || (s[i] > 97 && s[i] < 123)){
            consoantes++;
        }
        i++;
    }
    
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}