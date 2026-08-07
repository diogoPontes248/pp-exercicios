/*
Objetivo: Três amigos jogaram na loteria. O valor da aposta foi de R$40,00, sendo que o primeiro amigo
contribuiu com R$20,00 reais, o segundo com R$15,00 e o terceiro com R$5,00. Caso eles ganhem o
prêmio de R$27.000.000,00, concordaram em repartí-lo proporcionalmente ao valor da aposta pago
por cada um. Faça uma programa que calcule e imprima a parte do prêmio a que cada amigo tem
direito.
*/
#include <stdio.h>

int main()
{
    double amigo1, amigo2, amigo3;
    
    amigo1 = 20.0;
    amigo2 = 15.0;
    amigo3 = 5.0;
    
    double premio = 27000000.0;
    double totalApostado = amigo1 + amigo2 + amigo3;
    
    amigo1 = amigo1 * premio / totalApostado;
    amigo2 = amigo2 * premio / totalApostado;
    amigo3 = amigo3 * premio / totalApostado;
    
    printf("Parte do prémio do amigo1: %lf\n", amigo1);
    printf("Parte do prémio do amigo2: %lf\n", amigo2);
    printf("Parte do prémio do amigo3: %lf\n", amigo3);
    
    return 0;
}
