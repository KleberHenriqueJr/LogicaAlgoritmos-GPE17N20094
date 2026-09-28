#include <stdio.h>

int main(){
	
	float n1, n2, resultado;
	char operacao;
	
	printf("Primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Segundo numero: ");
	scanf("%f", &n2);
	
	printf("Operacao (+, -, * ou /): ");
	scanf(" %c", &operacao);
	
	if(operacao == '+'){
		resultado = n1 + n2;
		printf("Resultado: %.2f\n", resultado);
	} else if(operacao == '-'){
		resultado = n1 - n2;
		printf("Resultado: %.2f\n", resultado);
	} else if(operacao == '*'){
		resultado = n1 * n2;
		printf("Resultado: %.2f\n", resultado);
	} else if(operacao == '/'){
		if(n2 == 0){
			printf("Erro: divisao por zero\n");
		} else {
			resultado = n1 / n2;
			printf("Resultado: %.2f\n", resultado);
		}
	} else {
		printf("Operacao invalida\n");
	}
	
	return 0;
}
