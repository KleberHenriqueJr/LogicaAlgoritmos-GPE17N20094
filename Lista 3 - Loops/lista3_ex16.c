#include <stdio.h>

int main(){
	
	float n1, n2, media;
	
	printf("Nota 1: ");
	scanf("%f", &n1);
	
	printf("Nota 2: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	printf("Media: %.2f\n", media);
	
	if(media >= 7.0){
		printf("Situacao: Aprovado\n");
	} else if(media >= 5.0){
		printf("Situacao: Recuperacao\n");
	} else {
		printf("Situacao: Reprovado\n");
	}
	
	return 0;
}
