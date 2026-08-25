/*
Objetivo: Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do
seu bilhete. O programa então compara quantos números o jogador acertou. Em seguida, ele aloca
espaço para um vetor de tamanho igual à quantidade de números corretos e guarda os números
corretos nesse vetor. Finalmente, o programa exibe os números sorteados e os seus números
corretos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int loteria[6];
    int bilhete[6];
    int corretos = 0;
    int *vetor;
    
    printf("Digite os numeros gerados pela loteria: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &loteria[i]);
    }
    
    printf("Digite os numeros do seu bilhete: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &bilhete[i]);
    }
    
    for(int i = 0; i < 6; i++){
        if(loteria[i] == bilhete[i]){
            corretos++;
        }
    }
    
    vetor = (int *) malloc(corretos * sizeof(int));
    
    int j = 0;
    for(int i = 0; i < 6; i++){
        if(loteria[i] == bilhete[i]){
            vetor[j] = bilhete[i];
            j++;
        }
    }
    
    printf("\nNumeros sorteados: ");
    
    for(int i = 0; i < 6; i++){
        printf("%d ", loteria[i]);
    }
    
    printf("\n\nSeus numeros corretos: ");
    
    for(int i = 0; i < corretos; i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}


