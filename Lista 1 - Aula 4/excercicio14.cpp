#include <stdio.h>

int main(){
	
	int anoNascimento, anoAtual, idade, idadeEm2050;
	
	printf("Ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	printf("Ano atual: ");
	scanf("%d", &anoAtual);
	
	idade = anoAtual - anoNascimento;
	idadeEm2050 = 2050 - anoNascimento;
	
	printf("Idade atual: %d anos\n", idade);
	printf("Idade em 2050: %d anos\n", idadeEm2050);
	
	return 0;
}
