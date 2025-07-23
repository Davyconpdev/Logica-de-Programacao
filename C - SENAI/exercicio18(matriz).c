#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i = 0, j = 0, n, c;
    char nome[100];
    
    printf("\nNome do Aluno: ");
    scanf("%s",&nome);
    fflush(stdin);
    
    printf("\nNúmero de disciplinas: ");
    scanf("%d",&n);
    fflush(stdin);
    
    printf("\nNúmero de notas para cada disciplina: ");
    scanf("%d",&c);
    fflush(stdin);
    
    float notas[n][c];
    float soma = 0, media[n];
    char disciplina[n][100];

    for (i = 0; i < n; i++) {
        printf("\nInforme a disciplina: ");
        gets(disciplina[i]);

        for (j = 0; j < c; j++) {
            printf("Informe a %dª nota: ",j+1);
            scanf("%f",&notas[i][j]);

            soma += notas[i][j];
        }
        media[i] = soma / c;
        soma = 0;
        fflush(stdin); 
    }
    system("cls");

    for (i = 0; i < n; i++) {
        printf("\n%s em %s\n", nome, disciplina[i]);

        for (j = 0; j < c; j++) {
            printf("%dª nota: %.1f\n",j+1, notas[i][j]);
        }
        printf("Media: %.1f\n", media[i]);
    
        if(media[i] >= 7) {
            printf("\nAPROVADO!"); 
            printf("\n");
        } 
        else if(media[i] >= 5 && media[i] < 7) {
            printf("\nRECUPERAÇÃO.");
            printf("\n");
        } 
	    else {
            printf("\nREPROVADO.");
            printf("\n");
        } 
    }
return 0;
}
