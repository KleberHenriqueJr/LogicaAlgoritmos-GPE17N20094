#include <stdio.h>
#include <math.h>

int main(){
	
	float numero, quadrado, cubo, raizQuadrada, raizCubica;
	
	printf("Digite um numero maior que zero: ");
	scanf("%f", &numero);
	
	quadrado = pow(numero, 2);
	cubo = pow(numero, 3);
	raizQuadrada = sqrt(numero);
	raizCubica = cbrt(numero);
	
	printf("Numero ao quadrado: %.2f\n", quadrado);
	printf("Numero ao cubo: %.2f\n", cubo);
	printf("Raiz quadrada: %.2f\n", raizQuadrada);
	printf("Raiz cubica: %.2f\n", raizCubica);
	
	return 0;
}
