#include <stdio.h>

int main(){
	
	float horasTrabalhadas, salarioMinimo, valorHora, salarioBruto, imposto, salarioReceber;
	
	printf("Numero de horas trabalhadas: ");
	scanf("%f", &horasTrabalhadas);
	
	printf("Valor do salario minimo: ");
	scanf("%f", &salarioMinimo);
	
	valorHora = salarioMinimo / 2;
	salarioBruto = horasTrabalhadas * valorHora;
	imposto = salarioBruto * 0.03;
	salarioReceber = salarioBruto - imposto;
	
	printf("Valor da hora trabalhada: %.2f\n", valorHora);
	printf("Salario bruto: %.2f\n", salarioBruto);
	printf("Imposto (3%%): %.2f\n", imposto);
	printf("Salario a receber: %.2f\n", salarioReceber);
	
	return 0;
}
