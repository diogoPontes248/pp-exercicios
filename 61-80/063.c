/*
Objetivo: Crie um programa C que leia uma string do teclado e diga se ela é palíndromo. Uma string é
palíndromo quando pode ser lida tanto de trás pra frente quanto de frente para trás e possui
exatamente a mesma sequência de caracteres. Exemplo: “ARARA”.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[300];
    int verificador = 1;
    
    printf("Digite a string: ");
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
    int j = strlen(s) - 1;
    
    while(i <= j){
        if(s[i] != s[j]){
            verificador = 0;
        }
        
        i++;
        j--;
    }
    
    if(verificador){
        printf("Eh palindromo");
    }
    else{
        printf("nao eh palindromo");
    }

    return 0;
}