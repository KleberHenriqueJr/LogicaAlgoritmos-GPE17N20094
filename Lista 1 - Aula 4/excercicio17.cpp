#include <stdio.h>

int main(){
	
	float salario, cheque1, cheque2;
	float cpmf1, cpmf2, saldo;
	
	printf("Valor do salario depositado: ");
	scanf("%f", &salario);
	
	printf("Valor do cheque 1: ");
	scanf("%f", &cheque1);
	
	printf("Valor do cheque 2: ");
	scanf("%f", &cheque2);
	
	cpmf1 = cheque1 * 0.0038;
	cpmf2 = cheque2 * 0.0038;
	
	saldo = salario - (cheque1 + cpmf1) - (cheque2 + cpmf2);
	
	printf("Saldo atual da conta: %.2f\n", saldo);
	
	return 0;
}
