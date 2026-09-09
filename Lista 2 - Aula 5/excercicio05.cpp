#include <stdio.h>

int main(){
	
	float numero, resultado;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	if(numero > 0){
		resultado = numero * 2;
		printf("Numero positivo. Dobro: %.2f\n", resultado);
	} else if(numero < 0){
		resultado = numero * 3;
		printf("Numero negativo. Triplo: %.2f\n", resultado);
	} else {
		printf("O numero digitado e zero.\n");
	}
	
	return 0;
}
