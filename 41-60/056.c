/*
Objetivo: Crie um programa C que compara duas strings e informe se elas são iguais ou diferentes.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[300];
    char s2[300];
    int verificador = 1;
    int i = 0;
    
    printf("Digite a primeira string: ");
    fgets(s1, 300, stdin);
    
    printf("Digite a segunda string: ");
    fgets(s2, 300, stdin);
    
    //remove o \n gerado pela função fgets.
    while (s1[i] != '\0') {
        if (s1[i] == '\n') {
            s1[i] = '\0';
            break;
        }
        i++;
    }
    
    i = 0;
    
    while (s2[i] != '\0') {
        if (s2[i] == '\n') {
            s2[i] = '\0';
            break;
        }
        i++;
    }
    
    int testeTamanho = strlen(s1) != strlen(s2);
    
    i = 0;
    
    while(s1[i] != '\0'){
        if(testeTamanho || s1[i] != s2[i]){
            verificador = 0;
            break;
        }
        i++;
    }
    
    if(verificador){
        printf("As duas strings são identicas.");
    }
    else{
        printf("As duas strings são diferentes.");
    }

    return 0;
}