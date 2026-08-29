#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float salario, aumento;
	
	printf("Salario do funcionario: R$");
	scanf("%f", &salario);
	system("cls");
	
	aumento = salario * 1.25;
	
	//IMPRESSAO//
	
	printf("Salario anterior: R$%.2f \n", salario);
	printf("Salario atual: R$%.2f", aumento);
	
	
	return 0;
	
	
	
}
