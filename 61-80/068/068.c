/*
Objetivo: Escreva um programa C para gerar em um arquivo as tabuadas de 1 a 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("tabuada.txt", "w");
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }
    
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            fprintf(arquivo, "%d X %d = %d\n", i, j, i * j);
        }
    }
    
    fclose(arquivo);

    return 0;
}