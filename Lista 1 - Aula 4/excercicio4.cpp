#include <stdio.h>

int main(){
	
	float salario, novoSalario;
	
	printf("Salario atual: ");
	scanf("%f", &salario);
	
	novoSalario = salario + (salario * 0.25);
	
	printf("Novo salario (aumento de 25%%): %.2f\n", novoSalario);
	
	return 0;
}
