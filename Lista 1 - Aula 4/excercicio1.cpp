#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n1, n2, n3, media, soma;
	
	
	printf("Resultado da N1: ");
	scanf("%f", &n1);
	system("cls");
	
	
	printf("Resultado da N2: ");
	scanf("%f", &n2);
	system("cls");
	
	printf("Resultado da N3: ");
	scanf("%f", &n3);
	system("cls");
	
	
	
	soma = n1 + n2 + n3;
	
	media = soma /3;
	
	//IMPRESSAO//
	
	printf("Resultado final: %.2f \n", soma);
	printf("Média final: %.2f", media);
	return 0;
	
	
	
}
