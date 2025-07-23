#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int senha;

    printf("\nDigite sua senha de acesso:\n");
    scanf("%d", &senha);

    while (senha != 20237) {
        printf("\nSenha inválida.");
        printf("\nDigite novamente a senha de acesso:\n");
        scanf("%d", &senha);
        system("cls");
    }
    printf("Acesso permitido.");

    return 0;
}
