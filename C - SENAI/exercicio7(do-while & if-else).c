#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char login[100];
    char senha[50];
    char loginf[100];
    char senhaf[50];

    do {
        printf("\nCrie seu login:");
        gets(login);
        printf("\nCrie sua senha:");
        gets(senha);
        system("cls");

        printf("\nConfirme seu login:");
        gets(loginf);
        printf(" \n Confirme sua senha:");
        gets(senhaf);
        system("cls");

        if (strcmp(login, loginf) == 0 && strcmp(senha, senhaf) == 0) {
            printf("Concluindo...");
        }
        else {
            printf("Erro de autenticação.\nTente novamente.\n");
        }
        
    }while (strcmp(login, loginf) != 0 || strcmp(senha, senhaf) != 0);

    do {
        printf("\nLogin:");
        gets(loginf);
        printf("\nSenha:");
        gets(senhaf);
        system("cls");

        if (strcmp(login, loginf) == 0 && strcmp(senha, senhaf) == 0) {
            printf("Acesso concedido. \nBem-vindo(a)!");
        }
        else {
            printf("Acesso negado. \ntente novamente.\n");
        }
        
    }while (strcmp(loginf, login) != 0 || strcmp(senhaf, senha) != 0);

    return 0;
}
