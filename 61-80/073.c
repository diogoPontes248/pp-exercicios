/*
Objetivo: Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação
de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[100];
    int numMatricula;
    char curso[100];
};
typedef struct aluno Aluno;

int main()
{
    Aluno alunos[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite o nome do %d° aluno: ", i + 1);
        scanf(" %99[^\n]", alunos[i].nome);
        
        printf("Digite o numero de matricula do %d° aluno: ", i + 1);
        scanf(" %d", &alunos[i].numMatricula);
        
        printf("Digite o nome do curso do %d° aluno: ", i + 1);
        scanf(" %99[^\n]", alunos[i].curso);
    }
    
    for(int i = 0; i < 5; i++){
        printf("Nome do %d° aluno: %s\n", i + 1, alunos[i].nome);
        
        printf("Numero de matricula do %d° aluno: %d\n", i + 1, alunos[i].numMatricula);
        
        printf("Nome do curso do %d° aluno: %s\n", i + 1, alunos[i].curso);
        
        printf("\n");
    }

    return 0;
}