#include <stdio.h>
#include <stdlib.h>

struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int estoque;
};

struct Produto p[15];

void repor(int pos, int q) {
    p[pos].estoque = p[pos].estoque + q;
}

void vender(int pos, int q) {
    p[pos].estoque = p[pos].estoque - q;
}

int main() {
    int qtd = 0, op, i, cod, pos, q, maior;
    float total;

    do {
        system("cls");
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - Repor estoque\n");
        printf("4 - Registrar venda\n");
        printf("5 - Consultar por codigo\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        pos = -1;
        if (op == 1 || op == 3 || op == 4 || op == 5) {
            printf("Codigo: ");
            scanf("%d", &cod);
            for (i = 0; i < qtd; i++) {
                if (p[i].codigo == cod) {
                    pos = i;
                }
            }
        }

        switch (op) {
            case 1:
                if (qtd == 15) {
                    printf("Limite atingido!\n");
                } else if (pos != -1) {
                    printf("Codigo ja existe!\n");
                } else {
                    p[qtd].codigo = cod;
                    printf("Nome: ");
                    scanf("%s", p[qtd].nome);
                    printf("Preco: ");
                    scanf("%f", &p[qtd].preco);
                    printf("Estoque: ");
                    scanf("%d", &p[qtd].estoque);
                    qtd = qtd + 1;
                }
                break;

            case 2:
                total = 0;
                maior = 0;
                for (i = 0; i < qtd; i++) {
                    printf("%d - %s - R$ %.2f - Estoque: %d\n", p[i].codigo, p[i].nome, p[i].preco, p[i].estoque);
                    total = total + p[i].preco * p[i].estoque;
                    if (p[i].preco * p[i].estoque > p[maior].preco * p[maior].estoque) {
                        maior = i;
                    }
                }
                if (qtd > 0) {
                    printf("\nValor total em estoque: R$ %.2f\n", total);
                    printf("Maior valor em estoque: %s\n", p[maior].nome);
                }
                break;

            case 3:
                if (pos == -1) {
                    printf("Produto nao encontrado!\n");
                } else {
                    printf("Quantidade: ");
                    scanf("%d", &q);
                    repor(pos, q);
                }
                break;

            case 4:
                if (pos == -1) {
                    printf("Produto nao encontrado!\n");
                } else {
                    printf("Quantidade: ");
                    scanf("%d", &q);
                    if (q > p[pos].estoque) {
                        printf("Estoque insuficiente!\n");
                    } else {
                        vender(pos, q);
                    }
                }
                break;

            case 5:
                if (pos == -1) {
                    printf("Produto nao encontrado!\n");
                } else {
                    printf("%d - %s - R$ %.2f - Estoque: %d\n", p[pos].codigo, p[pos].nome, p[pos].preco, p[pos].estoque);
                }
                break;
        }

        if (op != 0) {
            system("pause");
        }
    } while (op != 0);

    return 0;
}
