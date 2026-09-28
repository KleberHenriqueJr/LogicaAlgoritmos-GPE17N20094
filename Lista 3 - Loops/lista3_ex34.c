#include <stdio.h>

int main(){
	
	char produto[100];
	int quantidade, continuar, qtdVendas = 0, totalProdutos = 0;
	float precoUnitario, totalVenda, faturamento = 0, maiorVenda = 0;
	
	do {
		printf("\nNome do produto: ");
		scanf(" %99[^\n]", produto);
		
		printf("Quantidade: ");
		scanf("%d", &quantidade);
		
		printf("Preco unitario: ");
		scanf("%f", &precoUnitario);
		
		totalVenda = quantidade * precoUnitario;
		printf("Total da venda: %.2f\n", totalVenda);
		
		qtdVendas++;
		totalProdutos = totalProdutos + quantidade;
		faturamento = faturamento + totalVenda;
		
		if(totalVenda > maiorVenda){
			maiorVenda = totalVenda;
		}
		
		printf("Registrar outra venda? (1 = Sim, 0 = Nao): ");
		scanf("%d", &continuar);
	} while(continuar == 1);
	
	printf("\n--- Resumo do dia ---\n");
	printf("Vendas realizadas: %d\n", qtdVendas);
	printf("Total de produtos vendidos: %d\n", totalProdutos);
	printf("Faturamento total: %.2f\n", faturamento);
	printf("Maior venda: %.2f\n", maiorVenda);
	
	return 0;
}
