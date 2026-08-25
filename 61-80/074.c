/*
Objetivo: Escreva um programa que converta coordenadas polares para cartesianas:
- Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a) em radianos.
- Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo que x = r * cos(a)
e y = r * sin(a).
Implemente os pontos em cada tipo de coordenada como duas estruturas. No programa principal, leia
um ponto em coordenada polar e mostre as coordenadas do ponto gerado no plano cartesiano.
*/

#include <stdio.h>
#include <math.h>

struct polar{
    double r;
    double a;
};
typedef struct polar Polar;

struct cartesiano{
    double x;
    double y;
};
typedef struct cartesiano Cartesiano;

int main()
{
    Polar p;
    Cartesiano c;
    
    printf("Digite o ponto em coordenada polar: ");
    scanf("%lf %lf", &p.r, &p.a);
    
    c.x = p.r * cos(p.a);
    c.y = p.r * sin(p.a);
    
    printf("Ponto convertido para coordenada cartesiana: (%lf, %lf)", c.x, c.y);

    return 0;
}
