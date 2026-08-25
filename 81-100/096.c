/*
Objetivo: Qual o resultado do programa abaixo?
void main() {
    int i, *p_1, *p_2, v[10];
    p_1 = v;
    p_2 = p_1;
    for (i = 0; i < 10; i++) {
        v[i] = (2*i)+1;
        p_2++;
    }
    for (i = 0; i < 10; i++) {
        p_2--;
        printf(“ [%d] ”, *p_2);
    }
}

R: no primeiro for ele atribui elementos ao vetor v tal que v[i] = (2*i) + 1;
   no segundo for ele imprimi o vetor ao contrário;
*/

#include <stdio.h>

void main() {
    int i, *p_1, *p_2, v[10];
    p_1 = v;
    p_2 = p_1;                       //p_2 recebe o mesmo endereço de memoria que o p_1, ou seja, v[0];
    for (i = 0; i < 10; i++) {
        v[i] = (2*i)+1;
        p_2++;                       //a cada iteração o p_2 vai para a proxima posição de memoria
    }                                //no final p_2 estará olhando para a posição v[10];
    for (i = 0; i < 10; i++) {
        p_2--;                       //na primeira iteração p_2 vai para a última posicao do vetor v
        printf(" [%d] ", *p_2);      //e a cada iteração vai voltando para a primeira posição.
    }
}



