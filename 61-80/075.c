/*
Objetivo: Escreva um programa com novos tipos de dados abaixo. Em seguida, crie uma instância (i.e., uma
variável) de um compromisso.
- Horário: composto de hora e minuto.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreva o compromisso.
*/

#include <stdio.h>
#include <string.h>

struct horario{
    int hora;
    int minuto;
};
typedef struct horario Horario;

struct data{
    int dia;
    int mes;
    int ano;
};
typedef struct data Data;

struct compromisso{
    Horario horario;
    Data data;
    char descricao[300];
};
typedef struct compromisso Compromisso;

int main()
{
    Compromisso c;
    
    c.horario.hora = 13;
    c.horario.minuto = 30;
    c.data.dia = 24;
    c.data.mes = 7;
    c.data.ano = 2026;
    strcpy(c.descricao, "Aniverário de alguem :D");
    
    printf("Horário: %d:%d\n", c.horario.hora, c.horario.minuto);
    printf("Dia: %d/%d/%d\n", c.data.dia, c.data.mes, c.data.ano);
    printf("Descricao: %s\n", c.descricao);

    return 0;
}
