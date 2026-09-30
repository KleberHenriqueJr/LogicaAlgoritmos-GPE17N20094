#include <stdio.h>

int main(){
	
	int vetor[6];
	int i;
	
	for(i = 0; i < 6; i++){
		printf("Digite o valor %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nValores lidos:\n");
	for(i = 0; i < 6; i++){
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}
	
	return 0;
}
