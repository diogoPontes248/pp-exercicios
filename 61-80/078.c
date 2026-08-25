/*
Objetivo: Crie um programa que leia um vetor com dados de 5 livros: título (máximo de 30 letras), autor (máximo
de 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título deseja buscar.
Mostre os dados de todos os livros encontrados.
*/

#include <stdio.h>
#include <string.h>

struct livro{
    char titulo[31];
    char autor[16];
    int ano;
};
typedef struct livro Livro;

int main()
{
    Livro livros[5];
    char titulo[31];
    
    for(int i = 0; i < 5; i++){
        printf("Digite o titulo do %d° livro: ", i + 1);
        scanf(" %30[^\n]", livros[i].titulo);
        
        printf("Digite o autor do %d° livro: ", i + 1);
        scanf(" %15[^\n]", livros[i].autor);
        
        printf("Digite o ano do %d° livro: ", i + 1);
        scanf(" %d", &livros[i].ano);
    }
    printf("\n");
    
    printf("Qual livro deseja buscar: ");
    scanf(" %30[^\n]", titulo);
    printf("\n");
    
    
    for(int i = 0; i < 5; i++){
        if(strcmp(titulo, livros[i].titulo) == 0){
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            printf("\n");
        }
    }
    

    return 0;
}
