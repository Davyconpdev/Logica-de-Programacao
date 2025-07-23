
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int idade;
    int maiorIdade = 0;
    int menorIdade = 999;
    int mulheres5k = 0;
    int contadorSalario = 0;
    int opcao;
    float salario;
    float somaSalario = 0;
    float mediaSalario;
    char sexo;

    do {
        printf("=== Pesquisa de habitantes === \n\n");
        printf("1 - Adicionar pessoa \n");
        printf("2 - Sair e exibir restuldados \n");
        printf("Escolha uma das opções: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("\nDigite sua idade: ");
            scanf("%d", &idade);

            printf("Digite o salário: ");
            scanf("%f", &salario);

            fflush(stdin);
            printf("Informe o sexo - M ou F: ");
            scanf("%c", &sexo);

            sexo = toupper(sexo);

            contadorSalario++;
            somaSalario += salario;

            maiorIdade = maiorIdade > idade ? maiorIdade : idade;
            menorIdade = menorIdade < idade ? menorIdade : idade;
           
            if (sexo == 'F' && salario > 5000)
                mulheres5k++;

            system("cls || clear");

            break;
        case 2:
            system("cls || clear");
           
            mediaSalario = somaSalario / contadorSalario;

        printf("=== Pesquisa de habitantes === \n\n");
            printf("Média salarial: %.2f \n", mediaSalario);
            printf("Quantidade de mulheres que ganham mais de 5 mil: %d \n", mulheres5k);
            printf("Maior idade: %d \n", maiorIdade);
            printf("Menor idade: %d \n", menorIdade);
            break;
        default:
            printf("Opção inválida!");
            sleep(3);
            system("cls || clear");
        }

    } while (opcao != 2);
    return 0;
}