#include <stdio.h>

int main(){
	
	float horas, valorHora, salarioBruto;
	
	printf("Horas trabalhadas: ");
	scanf("%f", &horas);
	
	printf("Valor recebido por hora: ");
	scanf("%f", &valorHora);
	
	salarioBruto = horas * valorHora;
	
	printf("Salario bruto: %.2f\n", salarioBruto);
	
	return 0;
}
