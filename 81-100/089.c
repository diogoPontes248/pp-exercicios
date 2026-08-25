/*
Objetivo: O número de controle de um CPF (seus 2 últimos dígitos verificadores, DV1 e DV2), são calculados da
seguinte forma (considerando os primeiros 9 dígitos do CPF):
    a. Etapa 1: cálculo de DV1
        i. Soma1: soma dos produtos de cada dígito por um peso de 2 a 10, na ordem inversa
            (do nono para o primeiro dígito).
        ii. Multiplique a Soma1 por 10 e calcule o resto da divisão do resultado por 11. Se der
            10, DV1 é zero; caso contrário, o DV1 é o próprio resto.
    b. Etapa 2: cálculo de DV2
        i. Soma2: soma dos produtos de cada dígito por um peso de 3 a 11, também na ordem
            inversa.
        ii. Adicione a Soma2 ao dobro do DV1, multiplique por 10 e calcule o resto da divisão
            do resultado por 11. Se der 10, DV2, é zero; caso contrário o DV2 é o próprio resto.
    c. Etapa 3: Multiplique DV1 por 10, some com DV2 e você terá o número de controle do CPF.

Exemplo: para o CPF 398.136.146, temos:
Etapa 1: 2 * 6 + 3 * 4 + 4 * 1 + 5 * 6 + 6 * 3 + 7 * 1 + 8 * 8 + 9 * 9 + 10 * 3 = 258
    o 2580 mod 11 = 6, portanto, DV1 = 6
Etapa 2: 3 * 6 + 4 * 4 + 5 * 1 + 6 * 6 + 7 * 3 + 8 * 1 + 9 * 8 + 10 * 9 + 11 * 3 = 299
    o (299 + 6 * 2) * 10 mod 11 = 3150 mod 11 = 8, portanto DV2 = 8.
Etapa 3: 6*10 + 8 = 68. Logo o número de CPF completo é 398.136.146-68
*/

#include <stdio.h>

int dv1(int *cpf){
    int soma = 0;
    int acumulador = 2;
    int dv1;
    for(int i = 8; i >= 0; i--){
        soma += cpf[i] * acumulador;
        acumulador++;
    }
    
    soma = soma * 10;
    dv1 = soma % 11;
    
    if(dv1 == 10){
        dv1 = 0;
    }
    
    return dv1;
}

int dv2(int *cpf){
    int soma = 0;
    int acumulador = 3;
    int dv2;
    for(int i = 8; i >= 0; i--){
        soma += cpf[i] * acumulador;
        acumulador++;
    }
    
    soma += 2 * dv1(cpf);
    soma *= 10;
    dv2 = soma % 11;
    
    if(dv2 == 10){
        dv2 = 0;
    }
    
    return dv2;
}

int numeroControleCPF(int *cpf){
    return dv1(cpf) * 10 + dv2(cpf);
}

int main()
{
    int cpf[11];
    int nccpf;
    
    for(int i = 0; i < 11; i++){
        scanf("%d", &cpf[i]);
    }
    
    nccpf = numeroControleCPF(cpf);
    
    if(nccpf == (cpf[9]*10 + cpf[10])){
        printf("cpf validado");
    }
    else{
        printf("cpf errado");
    }

    return 0;
}
