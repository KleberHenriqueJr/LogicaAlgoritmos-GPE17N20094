#include <stdio.h>

int main(){
	
	int vetor[6];
	int i, valor;
	
	for(i = 0; i < 6; i++){
		do {
			printf("Digite um valor PAR %d: ", i + 1);
			scanf("%d", &valor);
			
			if(valor % 2 != 0){
				printf("O valor precisa ser par. Tente novamente.\n");
			}
		} while(valor % 2 != 0);
		
		vetor[i] = valor;
	}
	
	printf("\nValores na ordem inversa:\n");
	for(i = 5; i >= 0; i--){
		printf("%d\n", vetor[i]);
	}
	
	return 0;
}
