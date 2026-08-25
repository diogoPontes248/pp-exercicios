/*
Objetivo: Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados
em uma estrutura.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[100];
    int idade;
    char endereco[300];
};
typedef struct pessoa Pessoa;

int main()
{
    Pessoa p;
    char nome[100];
    int idade;
    char endereco[300];
    
    setbuf(stdin, NULL);
    printf("Digite o nome: ");
    fgets(nome, 100, stdin);
    
    setbuf(stdin, NULL);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    setbuf(stdin, NULL);
    printf("Digite o endereço: ");
    fgets(endereco, 300, stdin);
    
    strcpy(p.nome, nome);
    p.idade = idade;
    strcpy(p.endereco, endereco);
    
    printf("nome: %s", p.nome);
    printf("idade: %d\n", p.idade);
    printf("endereço: %s\n", p.endereco);
    
    return 0;
}