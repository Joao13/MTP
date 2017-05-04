#include <stdio.h>

int main () {
    int i, n = 10;
    int soma=0;
    int produto=1;
	int vet [10];
	printf("Digite os Numeros: ");
	for ( i = 0; i < n; i++){
		scanf("%d", &vet [i] );
	}
	printf("Numeros Digitados: ");
	for ( i = 0; i < n; i++){
		printf(" %d ",vet [i] );
	}
	printf("A soma dos numeros- ");
	for ( i = 0; i < n; i++ )
	soma += vet[i];
	printf ( "\nSoma total: %d\n", soma );

	printf("O produto dos numeros-");
	for (i=0; i <n; i++)
        produto =produto * vet[i];
    printf("\nO produto eh %d\n",produto ) ;

    return 0;



}
