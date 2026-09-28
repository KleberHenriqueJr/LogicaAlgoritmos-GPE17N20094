#include <stdio.h>

int main(){
	
	float a, b;
	
	printf("Primeiro numero: ");
	scanf("%f", &a);
	
	printf("Segundo numero: ");
	scanf("%f", &b);
	
	if(a > b){
		printf("O maior numero e: %.2f\n", a);
	} else if(b > a){
		printf("O maior numero e: %.2f\n", b);
	} else {
		printf("Os numeros sao iguais\n");
	}
	
	return 0;
}
