/*
Objetivo: Faça um programa C que leia um arquivo texto e mostre na tela quantas letras são vogais e quantas
são consoantes.
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
    int vogais = 0, consoantes = 0;
    
    while((c = fgetc(arquivo)) != EOF){
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
           c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vogais++;
        }
        else if((c > 64 && c < 91) || (c > 96 && c < 123)){
            consoantes++;
        }
    }
    
    printf("quantidade de vogais: %d\n", vogais);
    printf("quantidade de consoantes: %d\n", consoantes);
    
    fclose(arquivo);

    return 0;
}