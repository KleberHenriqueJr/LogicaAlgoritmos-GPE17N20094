#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n1, n2, n3, media, soma;
	float p1, p2, p3, pd1, pd2, pd3;
	
	printf("Resultado da N1: ");
	scanf("%f", &n1);
	printf("\nPeso da Nota: ");
	scanf("%f", &p1);
	system("cls");
	
	
	printf("Resultado da N2: ");
	scanf("%f", &n2);
	printf("\nPeso da Nota: ");
	scanf("%f", &p2);
	system("cls");
	
	printf("Resultado da N3: ");
	scanf("%f", &n3);
	printf("\nPeso da Nota: ");
	scanf("%f", &p3);
	system("cls");
	
	
	pd1 = p1 * n1;
	pd2 = p2 * n2;
	pd3 = p3 * n3;
	soma = pd1 + pd2 + pd3;
	
	media = soma /3;
	
	//IMPRESSAO//
	
	printf("Resultado final: %.2f \n", soma);
	printf("Média final: %.2f", media);
	return 0;
	
	
	
}
