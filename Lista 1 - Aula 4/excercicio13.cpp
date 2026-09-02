#include <stdio.h>

int main(){
	
	float pes, polegadas, jardas, milhas;
	
	printf("Medida em pes: ");
	scanf("%f", &pes);
	
	polegadas = pes * 12;
	jardas = pes / 3;
	milhas = jardas / 1760;
	
	printf("Polegadas: %.2f\n", polegadas);
	printf("Jardas: %.2f\n", jardas);
	printf("Milhas: %.4f\n", milhas);
	
	return 0;
}
