/*
Objetivo: Crie uma estrutura para representar um vetor no R3, implemente um programa que calcule a soma de
dois vetores.
*/

#include <stdio.h>

struct vetor{
    double x;
    double y;
    double z;
};
typedef struct vetor Vetor;

int main()
{
    Vetor v1;
    Vetor v2;
    Vetor vSoma;
    
    printf("Digite as coordenadas do primeiro vetor: ");
    scanf("%lf %lf %lf", &v1.x, &v1.y, &v1.z);
    
    printf("Digite as coordenadas do segundo vetor: ");
    scanf("%lf %lf %lf", &v2.x, &v2.y, &v2.z);
    
    vSoma.x = v1.x + v2.x;
    vSoma.y = v1.y + v2.y;
    vSoma.z = v1.z + v2.z;
    
    printf("Vetor resultante da soma dos dois vetores: (%lf, %lf, %lf)", vSoma.x, vSoma.y, vSoma.z);

    return 0;
}
