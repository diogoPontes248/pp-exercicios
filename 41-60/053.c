/*
Objetivo: Com relação ao exercício anterior, calcule agora a média da turma em cada prova e na nota final.
*/

#include <stdio.h>

int main()
{
	int matriz[10][3];
	double vetor[10];
	double mediaPProva[3];
	double mediaFinal = 0;

	printf("Digite os valores da matriz: ");

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 3; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	for(int i = 0; i < 10; i++){
		vetor[i] = (matriz[i][0] + matriz[i][1] + matriz[i][2])/3.0;
	}
	
	for(int j = 0; j < 3; j++){
	    mediaPProva[j] = (matriz[0][j] + matriz[1][j] + matriz[2][j] +
	                   matriz[3][j] + matriz[4][j] + matriz[5][j] +
	                   matriz[6][j] + matriz[7][j] + matriz[8][j] +
	                   matriz[9][j])/10.0;
	}
	
	for(int i = 0; i < 10; i ++){
	    mediaFinal += vetor[i];
	}
	
	mediaFinal = mediaFinal/10.0;
	
    for(int i = 0; i < 3; i++){
        printf("Média prova %d: %lf\n", i, mediaPProva[i]);
    }
    printf("Média final da turma: %lf", mediaFinal);

	return 0;
}