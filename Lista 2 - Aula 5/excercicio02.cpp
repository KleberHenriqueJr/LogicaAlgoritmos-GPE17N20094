#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[50];
	char sexo;
	char estadoCivil[20];
	float tempoCasamento;
	
	printf("Nome: ");
	scanf("%s", nome);
	
	printf("Sexo (F/M): ");
	scanf(" %c", &sexo);
	
	printf("Estado civil (ex: CASADA, SOLTEIRA): ");
	scanf("%s", estadoCivil);
	
	if(sexo == 'F' && strcmp(estadoCivil, "CASADA") == 0){
		printf("Tempo de casamento (em anos): ");
		scanf("%f", &tempoCasamento);
		printf("Nome: %s | Sexo: %c | Estado civil: %s | Tempo de casamento: %.1f anos\n", nome, sexo, estadoCivil, tempoCasamento);
	} else {
		printf("Nome: %s | Sexo: %c | Estado civil: %s\n", nome, sexo, estadoCivil);
	}
	
	return 0;
}
