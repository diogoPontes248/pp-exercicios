/*
Objetivo: Crie um programa que implemente um array de tamanho dinâmico com calloc() para receber as notas
dos alunos de uma turma. Repasse esse array para uma função media, conforme protótipo abaixo, que
calcule o valor médio das notas e retorne esse valor para função principal. Imprima a nota final da
turma e a nota dos alunos.

    float media(float *lista, int tamanho);
*/

#include <stdio.h>
#include <stdlib.h>

float media(float *lista, int tamanho){
    float media = 0;
    
    for(int i = 0; i < tamanho; i++){
        media += lista[i];
    }
    
    media = media / tamanho;
    
    return media;
}

int main()
{
    float *p;
    int tamanho;
    float m;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    p = (float *) calloc(tamanho, sizeof(float));
    
    for(int i = 0; i < tamanho; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &p[i]);
    }
    printf("\n");
    
    m = media(p, tamanho);
    
    printf("Media da turma: %f\n\n", m);
    
    for(int i = 0; i < tamanho; i++){
        printf("Nota do aluno %d: %f\n", i + 1, p[i]);
    }
    
    return 0;
}


