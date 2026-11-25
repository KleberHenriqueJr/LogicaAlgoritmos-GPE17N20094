#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Funcionario {
    int codigo;
    char nome[50];
    char cargo[30];
    float salario;
    int horasExtras;
};

int main() {
    struct Funcionario f[8];
    float valorHora, valorExtra, bruto, liquido, maiorLiquido = 0, totalFolha = 0;
    char nomeMaior[50];
    int i;

    for (i = 0; i < 8; i++) {
        printf("Funcionario %d\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &f[i].codigo);
        printf("Nome: ");
        scanf("%s", f[i].nome);
        printf("Cargo: ");
        scanf("%s", f[i].cargo);
        printf("Salario-base: ");
        scanf("%f", &f[i].salario);
        printf("Horas extras: ");
        scanf("%d", &f[i].horasExtras);

        valorHora = f[i].salario / 160;
        valorExtra = valorHora * 1.5;
        bruto = f[i].salario + f[i].horasExtras * valorExtra;
        liquido = bruto - bruto * 0.10;
        totalFolha = totalFolha + liquido;

        printf(">> Salario liquido de %s: R$ %.2f\n\n", f[i].nome, liquido);

        if (liquido > maiorLiquido) {
            maiorLiquido = liquido;
            strcpy(nomeMaior, f[i].nome);
        }
    }

    printf("Maior salario liquido: %s (R$ %.2f)\n", nomeMaior, maiorLiquido);
    printf("Custo total da folha: R$ %.2f\n", totalFolha);

    system("pause");
    return 0;
}
