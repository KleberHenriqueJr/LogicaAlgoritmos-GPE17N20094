#include <stdio.h>

int main(){
	
	int A[6];
	int soma;
	int i;
	
	/* (a) Atribuicao dos valores ao vetor */
	A[0] = 1;
	A[1] = 0;
	A[2] = 5;
	A[3] = -2;
	A[4] = -5;
	A[5] = 7;
	
	/* (b) Soma de A[0], A[1] e A[5] */
	soma = A[0] + A[1] + A[5];
	printf("Soma de A[0] + A[1] + A[5]: %d\n", soma);
	
	/* (c) Modifica a posicao 4 */
	A[4] = 100;
	
	/* (d) Mostra cada valor do vetor, um por linha */
	printf("Valores do vetor A:\n");
	for(i = 0; i < 6; i++){
		printf("A[%d] = %d\n", i, A[i]);
	}
	
	return 0;
}
