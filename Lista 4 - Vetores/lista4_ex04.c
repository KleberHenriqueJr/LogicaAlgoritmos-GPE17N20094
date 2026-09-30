#include <stdio.h>

int main(){
	
	int vetor[8];
	int x, y, soma;
	int i;
	
	for(i = 0; i < 8; i++){
		printf("Digite o valor da posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("Digite a posicao X (0 a 7): ");
	scanf("%d", &x);
	
	printf("Digite a posicao Y (0 a 7): ");
	scanf("%d", &y);
	
	if(x < 0 || x > 7 || y < 0 || y > 7){
		printf("Posicao invalida\n");
		return 0;
	}
	
	soma = vetor[x] + vetor[y];
	
	printf("Soma dos valores nas posicoes %d e %d: %d\n", x, y, soma);
	
	return 0;
}
