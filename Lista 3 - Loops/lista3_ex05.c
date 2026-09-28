#include <stdio.h>

int main(){
	
	float base, altura, area;
	
	printf("Base do retangulo: ");
	scanf("%f", &base);
	
	printf("Altura do retangulo: ");
	scanf("%f", &altura);
	
	area = base * altura;
	
	printf("Area do retangulo: %.2f\n", area);
	
	return 0;
}
