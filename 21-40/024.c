/*
Objetivo: Escreva um programa que leia o código do produto escolhido no cardápio de uma lanchonete e sua
quantidade. Assim, o programa deve calcular o valor a ser pago por aquele lanche. Considere que a
cada execução somente será calculado um pedido. O cardápio da lanchonete segue a tabela a seguir:

Especificação   Código   Preço
Cachorro quente 100      1.20
Bauru simples   101      1.30
Bauru com ovo   102      1.50
Hamburguer      103      1.20
Cheeseburger    104      1.70
Suco            105      2.20
Refrigerante    106      1.00
*/

#include <stdio.h>

int main()
{
    int codigo;
    int quant;
    
    printf("Especificação   Código   Preço\n");
    printf("Cachorro quente 100      1.20\n");
    printf("Bauru simples   101      1.30\n");
    printf("Bauru com ovo   102      1.50\n");
    printf("Hamburguer      103      1.20\n");
    printf("Cheeseburger    104      1.70\n");
    printf("Suco            105      2.20\n");
    printf("Refrigerante    106      1.00\n\n");
    
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    
    codigo -= 100;
        
    printf("Digite a quantidade: \n");
    scanf("%d", &quant);
    
    switch(codigo){
        
        case 0:
            printf("Preço final: R$%.2lf", quant*1.20);
            break;
            
        case 1:
            printf("Preço final: R$%.2lf", quant*1.30);
            break;
            
        case 2:
            printf("Preço final: R$%.2lf", quant*1.50);
            break;
            
        case 3:
            printf("Preço final: R$%.2lf", quant*1.20);
            break;
            
        case 4:
            printf("Preço final: R$%.2lf", quant*1.70);
            break;
            
        case 5:
            printf("Preço final: R$%.2lf", quant*2.20);
            break;
            
        case 6:
            printf("Preço final: R$%.2lf", quant*1.00);
            break;
            
        default:
            printf("Erro: Produto não existe.");
            break;
    }
    

    return 0;
}