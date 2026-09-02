#include <stdio.h>

int main(){
	
	float precoFabrica, percentualLucro, percentualImposto;
	float valorLucro, valorImposto, precoFinal;
	
	printf("Preco de fabrica: ");
	scanf("%f", &precoFabrica);
	
	printf("Percentual de lucro do distribuidor: ");
	scanf("%f", &percentualLucro);
	
	printf("Percentual de impostos: ");
	scanf("%f", &percentualImposto);
	
	valorLucro = precoFabrica * (percentualLucro / 100);
	valorImposto = precoFabrica * (percentualImposto / 100);
	precoFinal = precoFabrica + valorLucro + valorImposto;
	
	printf("Lucro do distribuidor: %.2f\n", valorLucro);
	printf("Valor dos impostos: %.2f\n", valorImposto);
	printf("Preco final do veiculo: %.2f\n", precoFinal);
	
	return 0;
}
