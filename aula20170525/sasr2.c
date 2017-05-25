#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pares(int numero) {
    int i;
    printf("\nOs numeros pares dessa sequencia sao:");
    for(i=2; i<=numero; i=i+2)
        printf("%d ",i);
    return i;


}
void impares (int numero) {
    int y;
    printf("\nOs numeros impares dessa sequencia sao:");
    for(y=1; y<=numero; y=y+2)
        printf("%d ",y);
    return y;

}



int main() {
    int numero;
    printf("\nDigite um numero para saber os pares e impares: \n");
    scanf("%d",&numero) ;
    pares(numero);
    impares(numero);
    return 0;
}
