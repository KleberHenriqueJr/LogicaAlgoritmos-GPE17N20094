#include <stdio.h>

int main(){
	
	float base, altura, area;
	
	printf("Base do triangulo: ");
	scanf("%f", &base);
	
	printf("Altura do triangulo: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("Area do triangulo: %.2f\n", area);
	
	return 0;
}
