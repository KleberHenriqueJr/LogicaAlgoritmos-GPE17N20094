#include <stdio.h>

int main(){
	
	char nome[100];
	int quantidade, i, aprovados = 0, recuperacao = 0, reprovados = 0;
	float nota1, nota2, media, somaMedias = 0, maiorMedia, menorMedia;
	
	printf("Quantidade de alunos: ");
	scanf("%d", &quantidade);
	
	if(quantidade < 1){
		printf("Quantidade invalida\n");
		return 0;
	}
	
	for(i = 1; i <= quantidade; i++){
		printf("\nAluno %d\n", i);
		
		printf("Nome: ");
		scanf(" %99[^\n]", nome);
		
		printf("Nota da primeira avaliacao: ");
		scanf("%f", &nota1);
		
		printf("Nota da segunda avaliacao: ");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2) / 2;
		somaMedias = somaMedias + media;
		
		if(i == 1){
			maiorMedia = media;
			menorMedia = media;
		} else {
			if(media > maiorMedia){
				maiorMedia = media;
			}
			if(media < menorMedia){
				menorMedia = media;
			}
		}
		
		printf("%s - Media: %.2f - ", nome, media);
		
		if(media >= 7){
			printf("Aprovado\n");
			aprovados++;
		} else if(media >= 5){
			printf("Recuperacao\n");
			recuperacao++;
		} else {
			printf("Reprovado\n");
			reprovados++;
		}
	}
	
	printf("\n--- Resultado da turma ---\n");
	printf("Quantidade de alunos: %d\n", quantidade);
	printf("Aprovados: %d\n", aprovados);
	printf("Em recuperacao: %d\n", recuperacao);
	printf("Reprovados: %d\n", reprovados);
	printf("Media geral da turma: %.2f\n", somaMedias / quantidade);
	printf("Maior media: %.2f\n", maiorMedia);
	printf("Menor media: %.2f\n", menorMedia);
	
	return 0;
}
