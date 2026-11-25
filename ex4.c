#include <stdio.h>
#include <stdlib.h>

struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int estoque;
};

struct Venda {
    struct Produto produto;
    int quantidade;
    float total;
};

int main() {
    struct Produto p[10];
    struct Venda v[20];
    float fat[10] = {0};
    float faturamento;
    int qp = 0, qv = 0, op, i, cod, pos, q, maior;

    do {
        system("cls");
        printf("1 - Cadastrar produto\n");
        printf("2 - Registrar venda\n");
        printf("3 - Relatorio\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        pos = -1;
        if (op == 2) {
            printf("Codigo do produto: ");
            scanf("%d", &cod);
            for (i = 0; i < qp; i++) {
                if (p[i].codigo == cod) {
                    pos = i;
                }
            }
        }

        switch (op) {
            case 1:
                if (qp == 10) {
                    printf("Limite atingido!\n");
                } else {
                    printf("Codigo: ");
                    scanf("%d", &p[qp].codigo);
                    printf("Nome: ");
                    scanf("%s", p[qp].nome);
                    printf("Preco: ");
                    scanf("%f", &p[qp].preco);
                    printf("Estoque: ");
                    scanf("%d", &p[qp].estoque);
                    qp = qp + 1;
                }
                break;

            case 2:
                if (qv == 20) {
                    printf("Limite de vendas atingido!\n");
                } else if (pos == -1) {
                    printf("Produto nao encontrado!\n");
                } else {
                    printf("Quantidade: ");
                    scanf("%d", &q);
                    if (q > p[pos].estoque) {
                        printf("Estoque insuficiente!\n");
                    } else {
                        p[pos].estoque = p[pos].estoque - q;
                        v[qv].produto = p[pos];
                        v[qv].quantidade = q;
                        v[qv].total = q * p[pos].preco;
                        fat[pos] = fat[pos] + v[qv].total;
                        qv = qv + 1;
                        printf("Venda registrada!\n");
                    }
                }
                break;

            case 3:
                faturamento = 0;
                maior = 0;
                for (i = 0; i < qp; i++) {
                    printf("%s - Estoque: %d - Faturou: R$ %.2f\n", p[i].nome, p[i].estoque, fat[i]);
                    faturamento = faturamento + fat[i];
                    if (fat[i] > fat[maior]) {
                        maior = i;
                    }
                }
                if (qp > 0) {
                    printf("\nFaturamento total: R$ %.2f\n", faturamento);
                    printf("Maior faturamento: %s\n", p[maior].nome);
                }
                break;
        }

        if (op != 0) {
            system("pause");
        }
    } while (op != 0);

    return 0;
}
