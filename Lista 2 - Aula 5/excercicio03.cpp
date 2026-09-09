#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		printf("O numero e PAR\n");
	} else {
		printf("O numero e IMPAR\n");
	}
	
	return 0;
}
