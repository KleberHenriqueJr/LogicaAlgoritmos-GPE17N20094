#include <stdio.h>

int main(){
	
	float litros, precoLitro, valorBruto, percentual, desconto, valorFinal;
	
	printf("Quantidade de litros abastecidos: ");
	scanf("%f", &litros);
	
	printf("Preco do litro: ");
	scanf("%f", &precoLitro);
	
	valorBruto = litros * precoLitro;
	
	if(litros < 20){
		percentual = 0;
	} else if(litros <= 40){
		percentual = 3;
	} else {
		percentual = 5;
	}
	
	desconto = valorBruto * (percentual / 100);
	valorFinal = valorBruto - desconto;
	
	printf("Valor bruto: %.2f\n", valorBruto);
	printf("Desconto (%.0f%%): %.2f\n", percentual, desconto);
	printf("Valor final: %.2f\n", valorFinal);
	
	return 0;
}
