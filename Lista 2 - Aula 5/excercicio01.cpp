#include <stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Valor A: ");
	scanf("%d", &a);
	
	printf("Valor B: ");
	scanf("%d", &b);
	
	printf("Valor C: ");
	scanf("%d", &c);
	
	if((a + b) < c){
		printf("A soma de A + B e menor que C\n");
	} else {
		printf("A soma de A + B NAO e menor que C\n");
	}
	
	return 0;
}
