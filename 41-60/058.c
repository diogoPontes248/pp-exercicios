/*
Objetivo: Crie um programa C que receba três strings e as imprima em ordem alfabética.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[300], s2[300], s3[300];
    char temp[300];
    
    printf("Digite a primeira string: ");
    fgets(s1, 300, stdin);
    
    printf("Digite a segunda string: ");
    fgets(s2, 300, stdin);
    
    printf("Digite a terceira string: ");
    fgets(s3, 300, stdin);
    
    int i = 0;
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
    i = 0;
    while (s3[i] != '\0') {
        if (s3[i] == '\n') {
            s3[i] = '\0';
            break;
        }
        i++;
    }
    
    if(strcmp(s1, s2) > 0){
        strcpy(temp, s1);
        strcpy(s1, s2);
        strcpy(s2, temp);
    }
    if(strcmp(s1, s3) > 0){
        strcpy(temp, s1);
        strcpy(s1, s3);
        strcpy(s3, temp);
    }
    if(strcmp(s2, s3) > 0){
        strcpy(temp, s2);
        strcpy(s2, s3);
        strcpy(s3, temp);
    }
    
    printf("\nStrings em ordem alfabetica:\n");
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

    return 0;
}