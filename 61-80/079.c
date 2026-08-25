/*
Objetivo: Crie um programa que controla o consumo de energia dos eletrodomésticos de uma casa:
- Cadastre 5 eletrodomésticos com nome (máximo 15 letras), potência (real, em kW) e tempo ativo
por dia (real, em horas).
- Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada
eletrodoméstico (consumo/consumo total) nesse período de tempo. Apresente este último dado em
porcentagem.
*/

#include <stdio.h>
#include <string.h>

struct eletrodomestico{
    char nome[16];
    double potencia;
    double tempoAtivo;
};
typedef struct eletrodomestico Eletro;

int main()
{
    Eletro eletros[5];
    int dias;
    double consumoTotal = 0.0;
    
    for(int i = 0; i < 5; i++){
        printf("Digite o nome do %d° eletrodomestico: ", i + 1);
        scanf(" %15[^\n]", eletros[i].nome);
        
        printf("Digite a potencia do %d° eletrodomestico: ", i + 1);
        scanf(" %lf", &eletros[i].potencia);
        
        printf("Digite o tempo ativo do %d° eletrodomestico: ", i + 1);
        scanf(" %lf", &eletros[i].tempoAtivo);
    }
    printf("\n");
    
    printf("Quantos dias serao analisados: ");
    scanf(" %d", &dias);
    printf("\n");
    
    for(int i = 0; i < 5; i++){
        consumoTotal += dias * eletros[i].potencia * eletros[i].tempoAtivo;
    }
    
    
    for(int i = 0; i < 5; i++){
        printf("Nome: %s\n", eletros[i].nome);
        printf("Custo: %lf\%\n", 100 * dias * eletros[i].potencia * eletros[i].tempoAtivo / consumoTotal);
        printf("\n");
    }
    

    return 0;
}
