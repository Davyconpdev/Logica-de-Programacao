#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i = 0, j = 0, l, c;
    
    printf("\nQuantas bandas pretende cadastrar?: ");
    scanf("%d",&l);
    fflush(stdin);
    
    printf("\nQuantos integrantes a banda possui?: ");
    scanf("%d",&c);
    fflush(stdin);
    
    char banda[l][100];
    char integrante[l][c][100], funcao[l][c][100];

    for (i = 0; i < l; i++) {
        printf("\nNome da banda: ");
        gets(banda[i]);

        for (j = 0; j < c; j++) {
            printf("Nome do %dº integrante: ", j + 1);
            gets(integrante[i][j]);
            fflush(stdin);
            
            printf("Sua função: ", j + 1);
            gets(funcao[i][j]);
        }
        fflush(stdin);
    }
    system("cls");

    for (i = 0; i < l; i++) {
        printf("\n%dª Banda: %s\n", i + 1, banda[i]);

        for (j = 0; j < c; j++) {
            printf("%dº Integrante: %s\n", j + 1, integrante[i][j]);
        }
    }

    return 0;
}
