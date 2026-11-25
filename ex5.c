#include <stdio.h>
#include <stdlib.h>

struct Data {
    int dia, mes, ano;
};

struct Paciente {
    int codigo;
    char nome[50];
};

struct Consulta {
    struct Paciente paciente;
    struct Data data;
    char descricao[100];
};

int main() {
    struct Paciente p[15];
    struct Consulta c[30];
    struct Data d;
    int cont[15] = {0};
    int qp = 0, qc = 0, op, i, cod, pos, maior, achou;

    do {
        system("cls");
        printf("1 - Cadastrar paciente\n");
        printf("2 - Registrar consulta\n");
        printf("3 - Consultas de um paciente\n");
        printf("4 - Consultas por data\n");
        printf("5 - Total de consultas por paciente\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        pos = -1;
        if (op == 2) {
            printf("Codigo do paciente: ");
            scanf("%d", &cod);
            for (i = 0; i < qp; i++) {
                if (p[i].codigo == cod) {
                    pos = i;
                }
            }
        }

        switch (op) {
            case 1:
                if (qp == 15) {
                    printf("Limite atingido!\n");
                } else {
                    printf("Codigo: ");
                    scanf("%d", &p[qp].codigo);
                    printf("Nome: ");
                    scanf("%s", p[qp].nome);
                    qp = qp + 1;
                }
                break;

            case 2:
                if (qc == 30) {
                    printf("Limite de consultas atingido!\n");
                } else if (pos == -1) {
                    printf("Paciente nao encontrado!\n");
                } else {
                    c[qc].paciente = p[pos];
                    printf("Data (dia mes ano): ");
                    scanf("%d %d %d", &c[qc].data.dia, &c[qc].data.mes, &c[qc].data.ano);
                    printf("Descricao (uma palavra): ");
                    scanf("%s", c[qc].descricao);
                    cont[pos] = cont[pos] + 1;
                    qc = qc + 1;
                }
                break;

            case 3:
                printf("Codigo do paciente: ");
                scanf("%d", &cod);
                achou = 0;
                for (i = 0; i < qc; i++) {
                    if (c[i].paciente.codigo == cod) {
                        printf("%d/%d/%d - %s\n", c[i].data.dia, c[i].data.mes, c[i].data.ano, c[i].descricao);
                        achou = 1;
                    }
                }
                if (achou == 0) {
                    printf("Nenhuma consulta encontrada.\n");
                }
                break;

            case 4:
                printf("Data (dia mes ano): ");
                scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
                achou = 0;
                for (i = 0; i < qc; i++) {
                    if (c[i].data.dia == d.dia && c[i].data.mes == d.mes && c[i].data.ano == d.ano) {
                        printf("%s - %s\n", c[i].paciente.nome, c[i].descricao);
                        achou = 1;
                    }
                }
                if (achou == 0) {
                    printf("Nenhuma consulta nessa data.\n");
                }
                break;

            case 5:
                maior = 0;
                for (i = 0; i < qp; i++) {
                    printf("%s: %d consulta(s)\n", p[i].nome, cont[i]);
                    if (cont[i] > cont[maior]) {
                        maior = i;
                    }
                }
                if (qp > 0) {
                    printf("\nMais atendimentos: %s (%d)\n", p[maior].nome, cont[maior]);
                }
                break;
        }

        if (op != 0) {
            system("pause");
        }
    } while (op != 0);

    return 0;
}
