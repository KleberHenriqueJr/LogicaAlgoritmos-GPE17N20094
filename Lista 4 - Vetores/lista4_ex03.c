#include <stdio.h>

int main(){
	
	float vetor[10], quadrados[10];
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Digite o valor %d: ", i + 1);
		scanf("%f", &vetor[i]);
		quadrados[i] = vetor[i] * vetor[i];
	}
	
	printf("\nVetor original:\n");
	for(i = 0; i < 10; i++){
		printf("vetor[%d] = %.2f\n", i, vetor[i]);
	}
	
	printf("\nVetor com os quadrados:\n");
	for(i = 0; i < 10; i++){
		printf("quadrados[%d] = %.2f\n", i, quadrados[i]);
	}
	
	return 0;
}
