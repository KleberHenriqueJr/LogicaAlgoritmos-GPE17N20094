#include <stdio.h>

int main(){
	
	float saldo = 1000.00, valor;
	int opcao;
	
	do {
		printf("\n--- Caixa Eletronico ---\n");
		printf("1. Consultar saldo\n");
		printf("2. Depositar\n");
		printf("3. Sacar\n");
		printf("4. Sair\n");
		printf("Opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Saldo atual: %.2f\n", saldo);
				break;
			case 2:
				printf("Valor do deposito: ");
				scanf("%f", &valor);
				if(valor > 0){
					saldo = saldo + valor;
					printf("Deposito realizado. Saldo atual: %.2f\n", saldo);
				} else {
					printf("Valor invalido\n");
				}
				break;
			case 3:
				printf("Valor do saque: ");
				scanf("%f", &valor);
				if(valor <= 0){
					printf("Valor invalido\n");
				} else if(valor > saldo){
					printf("Saldo insuficiente\n");
				} else {
					saldo = saldo - valor;
					printf("Saque realizado. Saldo atual: %.2f\n", saldo);
				}
				break;
			case 4:
				printf("Encerrando. Ate logo!\n");
				break;
			default:
				printf("Opcao invalida\n");
		}
	} while(opcao != 4);
	
	return 0;
}
