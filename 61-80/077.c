/*
Objetivo: Crie um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), ano e preço.
Leia um valor p e mostre as informações de todos os carros com preço menor que p. Repita este
processo até que seja lido um valor p = 0.
*/

#include <stdio.h>

struct carro{
    char marca[16];
    int ano;
    double preco;
};
typedef struct carro Carro;

int main()
{
    Carro carros[5];
    double p;
    
    for(int i = 0; i < 5; i++){
        printf("Digite a marca do %d° carro: ", i + 1);
        scanf(" %15[^\n]", carros[i].marca);
        
        printf("Digite o ano do %d° carro: ", i + 1);
        scanf(" %d", &carros[i].ano);
        
        printf("Digite o preco do %d° carro: ", i + 1);
        scanf(" %lf", &carros[i].preco);
    }
    printf("\n");
    
    printf("Digite o preço de filtro: ");
    scanf("%lf", &p);
    printf("\n");
    
    while(p != 0){
        for(int i = 0; i < 5; i++){
            if(carros[i].preco < p){
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preco: %lf\n", carros[i].preco);
                printf("\n");
            }
        }
        
        printf("Digite o preço de filtro: ");
        scanf("%lf", &p);
        printf("\n");
    }

    return 0;
}
