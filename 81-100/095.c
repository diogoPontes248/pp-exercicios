/*
Objetivo: O que o programa abaixo imprime?
void main() {
    int vet[] = {4, 9, 12};
    int i,*ptr;
    ptr = vet;
    for (i = 0; i < 3; i++) {
        printf("%d ",*ptr++);
    }
}

R: Ele imprime o próprio vetor.
*/

#include <stdio.h>

void main() {
    int vet[] = {4, 9, 12};     //declara um vetor contendo 3 elementos;
    int i,*ptr;                 //instancia um inteiro i e um ponteiro para inteiro;
    ptr = vet;                  //o ponteiro agora recebe o endereço inicial do vetor,
                                //ou seja, o endereço de vet[0];
    for (i = 0; i < 3; i++) {   //a variável i serve para executar a instrução exatamente 3 vezes;
        printf("%d ",*ptr++);   //*ptr++ significa que ele irá ir para a próxima posição de memória,
                                //caso quisessemos que ele somasse 1 na posicao 0, a sintaxe seria (*ptr)++;
    }                           //Ou seja, *ptr++ é equivalente a *(ptr + i) ou 
                                //    ...
                                //    printf("%d ", *ptr);
                                //    ptr = ptr + 1;
                                //    ...
                                
}