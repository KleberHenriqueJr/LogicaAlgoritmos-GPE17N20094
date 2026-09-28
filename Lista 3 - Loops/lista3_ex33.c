#include <stdio.h>

int main(){
	
	int voto, votos1 = 0, votos2 = 0, votos3 = 0, total;
	
	printf("Votacao: 1, 2 ou 3 para votar | 0 para encerrar\n");
	
	do {
		printf("Voto: ");
		scanf("%d", &voto);
		
		if(voto == 1){
			votos1++;
		} else if(voto == 2){
			votos2++;
		} else if(voto == 3){
			votos3++;
		} else if(voto != 0){
			printf("Voto invalido\n");
		}
	} while(voto != 0);
	
	total = votos1 + votos2 + votos3;
	
	printf("\n--- Resultado ---\n");
	printf("Candidato 1: %d votos\n", votos1);
	printf("Candidato 2: %d votos\n", votos2);
	printf("Candidato 3: %d votos\n", votos3);
	printf("Total de votos: %d\n", total);
	
	if(total == 0){
		printf("Nenhum voto registrado\n");
	} else if(votos1 > votos2 && votos1 > votos3){
		printf("Vencedor: Candidato 1\n");
	} else if(votos2 > votos1 && votos2 > votos3){
		printf("Vencedor: Candidato 2\n");
	} else if(votos3 > votos1 && votos3 > votos2){
		printf("Vencedor: Candidato 3\n");
	} else {
		printf("Houve empate\n");
	}
	
	return 0;
}
