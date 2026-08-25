/*
Objetivo: Escreva uma função que receba, como parâmetro, três valores, X, Y e Z, e verifique se seguimentos
de reta com essas medidas podem formar um triângulo (o comprimento de cada lado de um triângulo é
menor do que a soma dos outros dois lados) e, em caso afirmativo, qual o tipo de triângulo. A função
deve retornar:
0: se não for triângulo.
1: se for triângulo escaleno (3 lados diferentes).
2: se for triângulo isósceles (2 lados iguais).
3: se for triângulo equilátero (3 lados iguais).
*/

#include <stdio.h>

int isTriangulo(double x, double y, double z){
    if((x > y + z) || (y > x + z) || (z > x + y)){
        return 0;
    } 
    if(x == y && y == z){
        return 3;
    }
    if(x == y || x == z || y == z){
        return 2;
    }
    
    return 1;
}

int main()
{
    double a, b, c;
    int triangulo;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    triangulo = isTriangulo(a, b, c);
    
    if(triangulo == 0){
        printf("nao eh triangulo.");
    }
    else if(triangulo == 1){
        printf("escaleno.");
    }
    else if(triangulo == 2){
        printf("isoceles.");
    }
    else{
        printf("equilatero.");
    }

    return 0;
}
