#include <stdio.h>

int main(){
	
	float vetor[5];
	int i, posicaoMaior, posicaoMenor;
	float maior, menor;
	
	for(i = 0; i < 5; i++){
		printf("Digite o valor %d: ", i + 1);
		scanf("%f", &vetor[i]);
	}
	
	maior = vetor[0];
	menor = vetor[0];
	posicaoMaior = 0;
	posicaoMenor = 0;
	
	for(i = 1; i < 5; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
			posicaoMaior = i;
		}
		if(vetor[i] < menor){
			menor = vetor[i];
			posicaoMenor = i;
		}
	}
	
	printf("Maior valor: %.2f, na posicao %d\n", maior, posicaoMaior);
	printf("Menor valor: %.2f, na posicao %d\n", menor, posicaoMenor);
	
	return 0;
}
