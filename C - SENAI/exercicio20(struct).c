#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 200

struct endereco {
    char rua[tam];
    char numero[tam];
    char bairro[tam];
    char cidade[tam];
    char estado[tam];
};

struct dados_funcionario {
    char nome[tam];
    char datadeadmissao[tam];
    char matricula[tam];
};

struct dados_cliente {
    char nome[tam];
    char nascimento[tam];
    struct endereco endereco;
};

int main() {
    setlocale(LC_ALL, "portuguese");

    int i = 0, j = 0, nf, nc;

    printf("\nQuantos funcionários pretende cadastrar?: ");
    scanf("%d",&nf);
    fflush(stdin);
    printf("\nQuantos clientes pretende cadastrar?: ");
    scanf("%d",&nc);
    fflush(stdin);
    
    struct dados_funcionario funcionario[nf];
    struct dados_cliente cliente[nc];

    for (i = 0; i < nf; i++) {
        printf("\nSolicitando dados do funcionário.");
        printf("\nNome: ");
        gets(funcionario[i].nome);
        fflush(stdin);

        printf("Data de admissão: ");
        gets(funcionario[i].datadeadmissao);
        fflush(stdin);

        printf("Matricula: ");
        gets(funcionario[i].matricula);
        fflush(stdin);

        for (j = 0; j < nc; j++) {
            printf("\nSolicitando dados do cliente.");
            printf("\nNome: ");
            gets(cliente[j].nome);
            fflush(stdin);

            printf("Data de nascimento: ");
            gets(cliente[j].nascimento);
            fflush(stdin);

            printf("Rua: ");
            gets(cliente[j].endereco.rua);
            fflush(stdin);

            printf("Número: ");
            gets(cliente[j].endereco.numero);
            fflush(stdin);

            printf("Bairro: ");
            gets(cliente[j].endereco.bairro);
            fflush(stdin);

            printf("Cidade: ");
            gets(cliente[j].endereco.cidade);
            fflush(stdin);

            printf("Estado: ");
            gets(cliente[j].endereco.estado);
            fflush(stdin);
        }
        system("cls || clear");
    }
    

    for (i = 0; i < nf; i++) {
        printf("\n==============================================\n");
        printf("\nDados do %dº funcionário.", i + 1);
        printf("\nNome: %s\n", funcionario[i].nome);
        printf("Data de admissão: %s\n", funcionario[i].datadeadmissao);
        printf("Matricula: %s\n", funcionario[i].matricula);
        printf("\n==============================================\n");
        
        for (j = 0; j < nc; j++) {
            printf("\nDados do %dº cliente.", j + 1);
            printf("\nNome: %s\n", cliente[j].nome);
            printf("Data de nascimento: %s\n", cliente[j].nascimento);
            printf("Rua: %s\n", cliente[j].endereco.rua);
            printf("Número: %s\n", cliente[j].endereco.numero);
            printf("Bairro: %s\n", cliente[j].endereco.bairro);
            printf("Cidade: %s\n", cliente[j].endereco.cidade);
            printf("Estado: %s\n", cliente[j].endereco.estado);
            printf("\n==============================================\n");
        }
    }

    return 0;
}
