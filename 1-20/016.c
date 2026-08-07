/*
Objetivo: Determine se um determinado ano lido é bissexto. Um ano é bissexto se for divisível por 400, ou se for
divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996.
*/
#include <stdio.h>

int main()
{
    int ano;
    
    scanf("%d", &ano);
    
    if((ano % 400 == 0) || (ano % 4 == 0 && !(ano % 100 == 0))){
        printf("%d é bissexto", ano);
    }
    else{
        printf("%d não é bissexto", ano);
    }
    
    
    
    return 0;
}
