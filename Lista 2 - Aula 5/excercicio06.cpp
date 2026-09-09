#include <stdio.h>

int main(){
	
	int valor1, valor2;
	
	printf("Primeiro valor booleano (1 = VERDADEIRO, 0 = FALSO): ");
	scanf("%d", &valor1);
	
	printf("Segundo valor booleano (1 = VERDADEIRO, 0 = FALSO): ");
	scanf("%d", &valor2);
	
	if(valor1 == 1 && valor2 == 1){
		printf("Ambos os valores sao VERDADEIROS\n");
	} else if(valor1 == 0 && valor2 == 0){
		printf("Ambos os valores sao FALSOS\n");
	} else {
		printf("Os valores sao diferentes entre si\n");
	}
	
	return 0;
}
