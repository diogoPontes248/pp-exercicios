/*
Objetivo: Crie uma função que receba uma string como parâmetro (de tamanho desconhecido) e retorne uma
cópia da mesma. A assinatura da função deve ser:
    char *strcopy(char *str);
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strcopy(char *str){
    char *copia;
    int tamanho = strlen(str) + 1;
    copia = (char *) calloc(tamanho, sizeof(char));
    
    for(int i = 0; i < tamanho; i++){
        copia[i] = str[i];
    }
    
    return copia;
}

int main()
{
    char texto[100] = "olá mundo!";
    char *copia;
    
    copia = strcopy(texto);
    
    printf("%s", copia);
    
    return 0;
}


