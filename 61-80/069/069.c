/*
Objetivo: Faça um programa que crie e imprima uma matriz identidade 4x4 em um arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("matriz.txt", "w");
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                fprintf(arquivo, "1 ");
            }
            else{
                fprintf(arquivo, "0 ");
            }
        }
        fprintf(arquivo, "\n");
    }
    
    fclose(arquivo);

    return 0;
}