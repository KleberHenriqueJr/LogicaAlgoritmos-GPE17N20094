#include <stdio.h>

int main(){
	
	float salarioBase, gratificacao, imposto, salarioReceber;
	
	printf("Salario-base: ");
	scanf("%f", &salarioBase);
	
	gratificacao = 50.0;
	imposto = salarioBase * 0.10;
	salarioReceber = salarioBase + gratificacao - imposto;
	
	printf("Gratificacao (fixa): %.2f\n", gratificacao);
	printf("Imposto (10%%): %.2f\n", imposto);
	printf("Salario a receber: %.2f\n", salarioReceber);
	
	return 0;
}
