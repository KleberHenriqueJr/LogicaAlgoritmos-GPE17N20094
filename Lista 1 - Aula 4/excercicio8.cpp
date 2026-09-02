#include <stdio.h>

int main(){
	
	float deposito, taxaJuros, rendimento, total;
	
	printf("Valor do deposito: ");
	scanf("%f", &deposito);
	
	printf("Taxa de juros: ");
	scanf("%f", &taxaJuros);
	
	rendimento = deposito * (taxaJuros / 100);
	total = deposito + rendimento;
	
	printf("Rendimento: %.2f\n", rendimento);
	printf("Valor total apos rendimento: %.2f\n", total);
	
	return 0;
}
