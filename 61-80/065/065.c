/*
Objetivo: Escreva um programa C que:
a. Crie um arquivo texto de nome “arq.txt”.
b. Permita que o usuário entre com diversos caracteres nesse arquivo, até que seja digitado
ENTER.
c. Feche o arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("arq.txt", "w");
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }
    
    char s[300];
    
    printf("Digite a string a ser inserida no arquivo: ");
    fgets(s, 300, stdin);
    
    int i = 0;
    
    fputs(s, arquivo);
    
    fclose(arquivo);

    return 0;
}