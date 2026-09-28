#include <stdio.h>

int main(){
	
	float valorCompra, percentual, desconto, valorFinal;
	
	printf("Valor da compra: ");
	scanf("%f", &valorCompra);
	
	if(valorCompra <= 100){
		percentual = 0;
	} else if(valorCompra <= 500){
		percentual = 5;
	} else {
		percentual = 10;
	}
	
	desconto = valorCompra * (percentual / 100);
	valorFinal = valorCompra - desconto;
	
	printf("Valor original: %.2f\n", valorCompra);
	printf("Percentual de desconto: %.0f%%\n", percentual);
	printf("Valor do desconto: %.2f\n", desconto);
	printf("Valor final: %.2f\n", valorFinal);
	
	return 0;
}
