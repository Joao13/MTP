#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int delta(int a, int b,int c, int d)
{
    d = (b*b)- 4*(a*c);
    return d;
}

int main() {
    int a,b,c,d;
    printf("Digite o valor de a: ");
    scanf("%f",&a);
    printf("\nDigite o valor de b: ");
    scanf("%f",&b);
    printf("\nDigite o valor de c: ");
    scanf("%f",&c);
    delta(a,b,c,d);
    printf("delta = %f",d);

    return 0;




}
