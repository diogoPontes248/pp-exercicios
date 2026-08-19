/*
Objetivo: Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Crie um vetor que armazene a nota
final de cada aluno, calculada a partir da média aritmética das notas das 3 provas. Imprima o vetor
resultante.
*/

#include <stdio.h>

int main()
{
	int matriz[10][3];
	double vetor[10];

	printf("Digite os valores da matriz: ");

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 3; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	for(int i = 0; i < 10; i++){
		vetor[i] = (matriz[i][0] + matriz[i][1] + matriz[i][2])/3.0;
	}

    printf("Notas: \n");
	
	for(int i = 0; i < 10; i++){
	    printf("Aluno %d: %lf\n", i + 1, vetor[i]);
	}

	return 0;
}