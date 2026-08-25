/*
Objetivo: Escreva um programa que armazene em um registro de dados (estrutura composta) os dados de um
funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento,
Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres) e Salário. Os
dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.
*/

#include <stdio.h>
#include <string.h>

struct funcionario {
    char nome[100];
    int idade;
    char sexo;
    char cpf[15];
    char dataNascimento[11];
    int codigoSetor;
    char cargo[31];
    double salario;
};
typedef struct funcionario Funcionario;

int main() {
    Funcionario f;

    printf("Digite o nome: ");
    fgets(f.nome, 100, stdin);
    f.nome[strcspn(f.nome, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &f.idade);

    printf("Digite o sexo: ");
    scanf(" %c", &f.sexo);

    printf("Digite o CPF: ");
    scanf(" %14[^\n]", f.cpf);

    printf("Digite a data de Nascimento: ");
    scanf(" %10[^\n]", f.dataNascimento);

    printf("Digite o codigo do Setor: ");
    scanf(" %d", &f.codigoSetor);

    printf("Digite o cargo: ");
    scanf(" %30[^\n]", f.cargo);

    printf("Salario: ");
    scanf(" %lf", &f.salario);

    printf("Nome: %s\n", f.nome);
    printf("Idade: %d anos\n", f.idade);
    printf("Sexo: %c\n", f.sexo);
    printf("CPF: %s\n", f.cpf);
    printf("Data de Nascimento: %s\n", f.dataNascimento);
    printf("Codigo do Setor: %d\n", f.codigoSetor);
    printf("Cargo: %s\n", f.cargo);
    printf("Salario: R$ %.2lf\n", f.salario);

    return 0;
}
