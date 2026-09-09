#include <stdio.h>

int main(){
	
	float limiteVia, velocidadeRegistrada, percentualExcedido;
	
	printf("Velocidade maxima permitida na via (km/h): ");
	scanf("%f", &limiteVia);
	
	printf("Velocidade registrada do veiculo (km/h): ");
	scanf("%f", &velocidadeRegistrada);
	
	printf("\n--- Resultado ---\n");
	printf("Limite da via: %.2f km/h\n", limiteVia);
	printf("Velocidade registrada: %.2f km/h\n", velocidadeRegistrada);
	
	if(velocidadeRegistrada <= limiteVia){
		printf("Nao houve infracao\n");
	} else {
		percentualExcedido = ((velocidadeRegistrada - limiteVia) / limiteVia) * 100;
		printf("Percentual excedido: %.2f%%\n", percentualExcedido);
		
		if(percentualExcedido <= 20){
			printf("Classificacao: Infracao MEDIA\n");
		} else if(percentualExcedido <= 50){
			printf("Classificacao: Infracao GRAVE\n");
		} else {
			printf("Classificacao: Infracao GRAVISSIMA\n");
		}
		
		if(velocidadeRegistrada > 120){
			printf("ALERTA: velocidade extremamente elevada!\n");
		}
	}
	
	return 0;
}
