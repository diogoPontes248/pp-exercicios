/*
Objetivo: Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa
diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que
o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do
produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido,
mostrar uma mensagem de erro.
*/

#include <stdio.h>

int main()
{
    int estado;
    double valor;
    
    printf("Digite o valor do produto: ");
    scanf("%lf", &valor);
        
    printf("Escolha o estado: \n");
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    scanf("%d", &estado);
    
    switch(estado){
        
        case 1:
            printf("Preço final: %lf", valor*1.07);
            break;
            
        case 2:
            printf("Preço final: %lf", valor*1.12);
            break;
            
        case 3:
            printf("Preço final: %lf", valor*1.15);
            break;
            
        case 4:
            printf("Preço final: %lf", valor*1.08);
            break;
            
        default:
            printf("Erro: Estado não encontrado.");
            break;
    }
    

    return 0;
}