#include <stdio.h>

int main(){
	
	float pesoSacoKg, racaoPorGatoGramas;
	float racaoDiariaGramas, racaoConsumidaGramas, pesoSacoGramas, racaoRestante;
	
	printf("Peso do saco de racao (em kg): ");
	scanf("%f", &pesoSacoKg);
	
	printf("Quantidade de racao por gato (em gramas, por dia): ");
	scanf("%f", &racaoPorGatoGramas);
	
	pesoSacoGramas = pesoSacoKg * 1000;
	racaoDiariaGramas = racaoPorGatoGramas * 2;
	racaoConsumidaGramas = racaoDiariaGramas * 5;
	racaoRestante = pesoSacoGramas - racaoConsumidaGramas;
	
	printf("Racao restante apos 5 dias (em gramas): %.2f\n", racaoRestante);
	printf("Racao restante apos 5 dias (em kg): %.3f\n", racaoRestante / 1000);
	
	return 0;
}
