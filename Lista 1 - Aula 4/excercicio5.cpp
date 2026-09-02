#include <stdio.h>

int main(){
	
	float salario, percentual, valorAumento, novoSalario;
	
	printf("Salario atual: ");
	scanf("%f", &salario);
	
	printf("Percentual de aumento: ");
	scanf("%f", &percentual);
	
	valorAumento = salario * (percentual / 100);
	novoSalario = salario + valorAumento;
	
	printf("Valor do aumento: %.2f\n", valorAumento);
	printf("Novo salario: %.2f\n", novoSalario);
	
	return 0;
}
