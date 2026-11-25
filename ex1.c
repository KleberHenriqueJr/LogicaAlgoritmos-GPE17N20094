#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1, nota2, media;
};

float calculaMedia(float n1, float n2) {
    return (n1 + n2) / 2;
}

int main() {
    struct Aluno a[10];
    int i, maior = 0, menor = 0, acima = 0;
    float soma = 0, mediaGeral;

    for (i = 0; i < 10; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &a[i].matricula);
        printf("Nome: ");
        scanf("%s", a[i].nome);
        printf("Nota 1: ");
        scanf("%f", &a[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &a[i].nota2);

        a[i].media = calculaMedia(a[i].nota1, a[i].nota2);
        soma = soma + a[i].media;

        if (a[i].media > a[maior].media) {
            maior = i;
        }
        if (a[i].media < a[menor].media) {
            menor = i;
        }
    }

    mediaGeral = soma / 10;
    system("cls");

    for (i = 0; i < 10; i++) {
        if (a[i].media >= 6) {
            printf("%s - %.2f - Aprovado\n", a[i].nome, a[i].media);
        } else {
            printf("%s - %.2f - Reprovado\n", a[i].nome, a[i].media);
        }
        if (a[i].media > mediaGeral) {
            acima = acima + 1;
        }
    }

    printf("\nMaior media: %s (%.2f)\n", a[maior].nome, a[maior].media);
    printf("Menor media: %s (%.2f)\n", a[menor].nome, a[menor].media);
    printf("Media geral: %.2f\n", mediaGeral);
    printf("Acima da media geral: %d\n", acima);

    system("pause");
    return 0;
}
