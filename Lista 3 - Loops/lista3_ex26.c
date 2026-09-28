#include <stdio.h>

int main(){
	
	int quantidade, i;
	float nota, soma = 0, media;
	
	printf("Quantidade de alunos: ");
	scanf("%d", &quantidade);
	
	if(quantidade < 1){
		printf("Quantidade invalida\n");
		return 0;
	}
	
	for(i = 1; i <= quantidade; i++){
		printf("Nota do aluno %d: ", i);
		scanf("%f", &nota);
		soma = soma + nota;
	}
	
	media = soma / quantidade;
	
	printf("Media geral da turma: %.2f\n", media);
	
	return 0;
}
