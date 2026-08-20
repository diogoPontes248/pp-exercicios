/*
Objetivo: O código de César é uma das mais simples e conhecidas técnicas de criptografia. Trata-se de um tipo
de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto acima
dela um certo número de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por
‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de
César (3 posições), entre com uma string e retorne a string codificada.
*/

#include <stdio.h>

int main()
{	
    char s[300];
	
	printf("Digite a string: ");
    fgets(s, 300, stdin);
    
    int i = 0;
    while(s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
    
    i = 0;
    while(s[i] != '\0'){
        if((s[i] >= 65 && s[i] <= 87) || (s[i] >= 97 && s[i] <= 119)){
			s[i] = s[i] + 3;
		}
		
		if((s[i] >= 88 && s[i] <= 90) || (s[i] >= 120 && s[i] <= 122)){
			s[i] = s[i] - 23;
		}
		i++;
    }
	
	printf("%s",s);

	return 0;
}