#include <stdio.h>

int main(){
	
	int horaEntrada, horaSaida, horas;
	float valorTotal;
	
	printf("Hora de entrada (0 a 23): ");
	scanf("%d", &horaEntrada);
	
	printf("Hora de saida (0 a 23): ");
	scanf("%d", &horaSaida);
	
	horas = horaSaida - horaEntrada;
	
	if(horas < 0){
		horas = horas + 24;
	}
	
	if(horas <= 1){
		valorTotal = 10.00;
	} else {
		valorTotal = 10.00 + (horas - 1) * 5.00;
	}
	
	printf("Tempo de permanencia: %d hora(s)\n", horas);
	printf("Valor total: R$ %.2f\n", valorTotal);
	
	return 0;
}
