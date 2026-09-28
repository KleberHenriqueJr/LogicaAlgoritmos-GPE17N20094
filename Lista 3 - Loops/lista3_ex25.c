#include <stdio.h>

int main(){
	
	int n, i, soma = 0;
	
	printf("Digite um numero inteiro positivo N: ");
	scanf("%d", &n);
	
	if(n < 1){
		printf("N deve ser positivo\n");
		return 0;
	}
	
	for(i = 1; i <= n; i++){
		soma = soma + i;
	}
	
	printf("Soma de 1 ate %d: %d\n", n, soma);
	
	return 0;
}
