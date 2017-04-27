#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    float a, b, r,x;
    float distancia;
    printf("Digite um lado do triangulo:");
    scanf("%f", &a);
    printf("Digite outro lado do triangulo:");
    scanf("%f", &b);
    printf("Digite o angulo formado em radianos:");
    scanf("%f", &r);
    x= cos( r);
    distancia= sqrt (pow (a,2)+ pow (b,2) - 2*a*b*x);
    printf("O lado  e: %g\n", distancia);
    return EXIT_SUCCESS;






 }
