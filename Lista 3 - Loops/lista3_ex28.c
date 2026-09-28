#include <stdio.h>

int main(){
	
	int i;
	float numero, maior;
	
	printf("Numero 1: ");
	scanf("%f", &maior);
	
	for(i = 2; i <= 10; i++){
		printf("Numero %d: ", i);
		scanf("%f", &numero);
		
		if(numero > maior){
			maior = numero;
		}
	}
	
	printf("Maior numero informado: %.2f\n", maior);
	
	return 0;
}
