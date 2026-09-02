#include <stdio.h>

int main(){
	
	float salarioBase, gratificacao, imposto, salarioReceber;
	
	printf("Salario-base: ");
	scanf("%f", &salarioBase);
	
	gratificacao = salarioBase * 0.05;
	imposto = salarioBase * 0.07;
	salarioReceber = salarioBase + gratificacao - imposto;
	
	printf("Gratificacao (5%%): %.2f\n", gratificacao);
	printf("Imposto (7%%): %.2f\n", imposto);
	printf("Salario a receber: %.2f\n", salarioReceber);
	
	return 0;
}
