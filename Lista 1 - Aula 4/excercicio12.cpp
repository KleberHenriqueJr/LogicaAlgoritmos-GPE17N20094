#include <stdio.h>
#include <math.h>

int main(){
	
	float base, expoente, resultado;
	
	printf("Digite a base: ");
	scanf("%f", &base);
	
	printf("Digite o expoente: ");
	scanf("%f", &expoente);
	
	resultado = pow(base, expoente);
	
	printf("Resultado: %.2f\n", resultado);
	
	return 0;
}
