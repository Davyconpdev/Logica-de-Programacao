#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 300
#define n 3

struct dados_aluno {
    char nome[tam];
    char numerodaturma[tam];
    int idade;
    float nota[n];
    float soma, media;
    char situacao[tam];
};

struct dados_professor {
    char nome[tam];
    char disciplina[tam];
    char turma[n][tam];
};

int main() {
    setlocale(LC_ALL, "portuguese");

    int i = 0, j = 0, na;
    int y = 0, z = 0, np;
    float soma = 0;
    
    printf("\nQuantos alunos pretende cadastrar?: ");
    scanf("%d",&na);
    fflush(stdin);
    
    printf("\nQuantos professores pretende cadastrar?: ");
    scanf("%d",&np);
    fflush(stdin);
    
    struct dados_aluno aluno[na];
    struct dados_professor professor[np];

    for (i = 0; i < na; i++) {
        printf("\nSolicitando dados do %dº aluno(a).", i + 1);
        printf("\nNome: ");
        gets(aluno[i].nome);
        fflush(stdin);
        
        printf("Número da turma: ");
        gets(aluno[i].numerodaturma);
        fflush(stdin);
        
        printf("Idade: ");
        scanf("%d", &aluno[i].idade);
        fflush(stdin);

        for (y = 0; y < n; y++) {
            printf("%dª nota: ", y + 1);
            scanf("%f", &aluno[i].nota[y]);

            aluno[i].soma += aluno[i].nota[y];
            aluno[i].media = aluno[i].soma / n;
        }
        fflush(stdin);
        aluno[i].soma = 0;
        system("cls || clear");
    }

    for (j = 0; j < np; j++) {
        printf("\nSolicitando dados do(a) %dº professor(a).", j + 1);
        printf("\nNome: ");
        gets(professor[j].nome);
        fflush(stdin);

        for (z = 0; z < n; z++) {
            printf("%dª Turma: ", z + 1);
            gets(professor[j].turma[z]);
            fflush(stdin);
        }
        printf("Disciplina: ");
        gets(professor[j].disciplina);
        fflush(stdin);
    }
    system("cls || clear");

    for (i = 0; i < na; i++) {
        printf("\n===========================================");
        printf("\nDados do %dº aluno(a).\n", i + 1);
        printf("\nNome: %s\n", aluno[i].nome);
        printf("Número da turma: %s\n", aluno[i].numerodaturma);
        printf("Idade: %d anos\n", aluno[i].idade);

        for (y = 0; y < n; y++) {
            printf("%dª nota: %.1f\n", y + 1, aluno[i].nota[y]);
            fflush(stdin);
        }
        printf("\nMédia: %.1f\n", aluno[i].media);
        fflush(stdin);

        if (aluno[i].media >= 7) {
            printf("APROVADO(A)!");
        }
        else {
            printf("REPROVADO(A).");
        }
        printf("\n================================================");
    }

    for (j = 0; j < np; j++) {
        printf("\n================================================\n");
        printf("\nDados do(a) %dº professor(a).\n", j + 1);
        printf("\nNome: %s\n", professor[j].nome);
        printf("Disciplina: %s\n", professor[j].disciplina);
        for (z = 0; z < n; z++) {
            printf("%dª Turma: %s\n", z + 1, professor[j].turma[z]);
        }
    }

    return 0;
}
