#include <stdio.h>

int main(){
	
	float distancia, combustivel, consumo;
	
	printf("Distancia percorrida (km): ");
	scanf("%f", &distancia);
	
	printf("Combustivel utilizado (litros): ");
	scanf("%f", &combustivel);
	
	if(combustivel > 0){
		consumo = distancia / combustivel;
		printf("Consumo medio: %.2f km/L\n", consumo);
	} else {
		printf("Quantidade de combustivel invalida\n");
	}
	
	return 0;
}
