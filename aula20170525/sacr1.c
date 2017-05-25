#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
    return rand()%6 + 1;
}
int jogada(int n) {
    int i, d,  soma = 0;
    for(i=0; i < n; i++) {
    d= dado();
        printf("%d", d);
        soma +=d;
    }
    printf(" : %d\n",soma);
    return soma;
}
int main () {
    srand(time(NULL));
    int i,s;
    printf("Jogo dos 5 dados\n");
    for(i=0; i<3; i++){
    printf("\nTecle ENTER para comecar...");
    getchar() ;
    s = jogada(5);
    if(s>=18 && s <=23) {
        printf("Ganhou!!\n");
        break;
    }
   }
   if(i == 3)
    printf("Perdeu!!\n");

    return EXIT_SUCCESS;
}
