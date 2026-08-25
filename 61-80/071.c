/*
Objetivo: Utilizando uma estrutura, fazer um programa que permita a entrada de nome, idade e endereço de 5
pessoas e os imprima.
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
    Pessoa p[5];
    
    for(int i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("Digite o nome: ");
        fgets(p[i].nome, 100, stdin);
    
        setbuf(stdin, NULL);
        printf("Digite a idade: ");
        scanf("%d", &p[i].idade);
    
        setbuf(stdin, NULL);
        printf("Digite o endereço: ");
        fgets(p[i].endereco, 300, stdin);
    }
    printf("\n");
    
    for(int i = 0; i < 5; i++){
        printf("nome: %s", p[i].nome);
        printf("idade: %d\n", p[i].idade);
        printf("endereço: %s", p[i].endereco);
        printf("\n");
    }
    
    return 0;
}