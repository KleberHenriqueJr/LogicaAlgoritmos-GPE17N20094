#include <stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Valor A: ");
	scanf("%d", &a);
	
	printf("Valor B: ");
	scanf("%d", &b);
	
	if(a == b){
		c = a + b;
	} else {
		c = a * b;
	}
	
	printf("Resultado (C): %d\n", c);
	
	return 0;
}
