#include <stdio.h>

int main(){
	
	char produto[100];
	int quantidade;
	float precoUnitario, total;
	
	printf("Nome do produto: ");
	scanf(" %99[^\n]", produto);
	
	printf("Quantidade comprada: ");
	scanf("%d", &quantidade);
	
	printf("Preco unitario: ");
	scanf("%f", &precoUnitario);
	
	total = quantidade * precoUnitario;
	
	printf("Produto: %s\n", produto);
	printf("Valor total da compra: %.2f\n", total);
	
	return 0;
}
