#include <stdio.h>

int main(){
	
	float preco, valorFinal;
	int codigo;
	
	printf("Preco do produto: ");
	scanf("%f", &preco);
	
	printf("Codigo da condicao de pagamento:\n");
	printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
	printf("2 - A vista no cartao de credito (15%% de desconto)\n");
	printf("3 - Em duas parcelas, sem juros\n");
	printf("4 - Em duas parcelas, com 10%% de acrescimo\n");
	printf("Codigo: ");
	scanf("%d", &codigo);
	
	if(codigo == 1){
		valorFinal = preco - (preco * 0.10);
	} else if(codigo == 2){
		valorFinal = preco - (preco * 0.15);
	} else if(codigo == 3){
		valorFinal = preco;
	} else if(codigo == 4){
		valorFinal = preco + (preco * 0.10);
	} else {
		printf("Codigo de pagamento invalido\n");
		return 0;
	}
	
	printf("Valor final a pagar: %.2f\n", valorFinal);
	
	return 0;
}
