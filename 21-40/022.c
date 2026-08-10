/*
Objetivo: Escreva o menu de opções, como no exemplo abaixo. Leia a opção do usuário, em seguida leia 2
números reais e execute a operação escolhida sobre eles. (Escreva uma mensagem de erro se a
opção for inválida.)
        Escolha a opcao:
        1- Soma de 2 numeros.
        2- Diferenca entre 2 numeros.
        3- Produto entre 2 numeros.
        4- Divisao entre 2 numeros (detalhe: o denominador não pode ser zero).
        Opcao: 2
        Digite o primeiro número: 7
        Digite o segundo número: 4
        Resultado: 3
*/

#include <stdio.h>

int main()
{
    int escolha;
    double num1, num2, resultado;
    
    printf("Escolha a opcao:\n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros.\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisao entre 2 numeros.\n");
    printf("Opcao: ");
    
    scanf("%d", &escolha);
    
    switch(escolha){
        case 1:
            
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);
            printf("Digite o segundo número: ");
            scanf("%lf", &num2);
            printf("Resultado: %lf", num1 + num2);
            
            break;
            
        case 2:
            
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);
            printf("Digite o segundo número: ");
            scanf("%lf", &num2);
            printf("Resultado: %lf", num1 - num2);
            
            break;
            
        case 3:
            
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);
            printf("Digite o segundo número: ");
            scanf("%lf", &num2);
            printf("Resultado: %lf", num1 * num2);
            
            break;
            
        case 4:
            
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);
            printf("Digite o segundo número: ");
            scanf("%lf", &num2);
            if(num2 != 0){
                printf("Resultado: %lf", num1 / num2);
            }
            else{
                printf("Erro: nao eh possivel dividir por 0.");
            }
            
            break;
            
        default:
            printf("Valor invalido.");
            break;
    }

    return 0;
}