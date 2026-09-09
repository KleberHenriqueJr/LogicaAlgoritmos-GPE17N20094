#include <stdio.h>

int main(){
	
	float altura, pesoIdeal;
	char sexo;
	
	printf("Altura (em metros): ");
	scanf("%f", &altura);
	
	printf("Sexo (M/F): ");
	scanf(" %c", &sexo);
	
	if(sexo == 'M' || sexo == 'm'){
		pesoIdeal = (72.7 * altura) - 58;
	} else {
		pesoIdeal = (62.1 * altura) - 44.7;
	}
	
	printf("Peso ideal: %.2f kg\n", pesoIdeal);
	
	return 0;
}
