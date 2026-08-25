/*
Objetivo: Abra e leia o arquivo criado no exercício anterior, caractere por caractere, e escreva na tela todos os
caracteres.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("arq.txt", "r");
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }
    
    char c;
    
    while((c = fgetc(arquivo)) != EOF){
        printf("%c", c);
    }
    
    fclose(arquivo);

    return 0;
}