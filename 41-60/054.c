/*
Objetivo: Os incas ficaram conhecidos pela grande civilização que reinou na região dos Andes durante vários
séculos. O que pouca gente sabe é que os incas construíram pirâmides de base quadrada em que a
única forma de se atingir o topo era seguir em espiral pela borda, que acabava formando uma escada
em espiral. Estas pirâmides ainda se encontram escondidas na floresta amazônica e sua descoberta
trará uma aplicação para este exercício. Neste problema você deverá fazer um programa para verificar
se uma matriz quadrada de dimensão 4 com números inteiros é ou não inca. A matriz é inca quando,
partindo do canto superior esquerdo da matriz, no sentido horário, em espiral, for possível verificar que
a posição seguinte na ordem é o inteiro consecutivo da posição anterior. Exemplo de uma matriz inca:
  1  2  3  4
 12 13 14  5
 11 16 15  6
 10  9  8  7
*/

#include <stdio.h>

int main()
{
	int matriz[4][4];
	int verificador = 0;
	
	printf("Digite os valores da matriz: ");
	for(int i = 0; i < 4; i++){
	    for(int j = 0; j < 4; j++){
	        scanf("%d", &matriz[i][j]);
	    }
	}
	
	for(int i = 0; i < 4; i++){
	    for(int j = 0; j < 4; j++){
	        if(i == 0 && j < 3 && matriz[i][j] + 1 != matriz[i][j + 1]){
	            verificador++;
	        }
	        else if(j == 3 && i < 3 && matriz[i][j] + 1 != matriz[i+1][j]){
	            verificador++;
	        }
	        else if(i == 3 && j > 0 && matriz[i][j] + 1 != matriz[i][j - 1]){
	            verificador++;
	        }
	        else if(j == 0 && i > 1 && matriz[i][j] + 1 != matriz[i-1][j]){
	            verificador++;
	        }
	        else if(i == 1 && j < 2 && matriz[i][j] + 1 != matriz[i][j+1]){
	            verificador++;
	        }
	        else if(i == 1 && j == 2 && matriz[i][j] + 1 != matriz[i+1][j]){
	            verificador++;
	        }
	        else if(i == 2 && j == 2 && matriz[i][j] + 1 != matriz[i][j-1]){
	            verificador++;
	        }
	    }
	}
	
	if(verificador == 0){
	    printf("Eh uma matriz inca.");
	}
	else{
	    printf("Nao eh uma matriz inca.");
	}

	return 0;
}