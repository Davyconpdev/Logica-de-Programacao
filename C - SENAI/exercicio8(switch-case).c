#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float primeironum, segundonum, resultado;
    char opcao;

    printf("\nDigite um número:\n");
    scanf("%f", &primeironum);
    fflush(stdin);
    
    printf(" * , / , + , - , : ");
    printf("Escolha uma operação: ");
    scanf("%c",&opcao);
    fflush(stdin);
    
    printf("\nDigite outro número:\n");
    scanf("%f", &segundonum);
    fflush(stdin);

    switch (opcao) {
     case '*':
        resultado = primeironum * segundonum;
        break;
     case '/':
        resultado = primeironum / segundonum;
        break;
     case '+':
        resultado = primeironum + segundonum;
        break;
     case '-':
        resultado = primeironum - segundonum;
        break;
        
     default:
     	printf("Operação inválida.\nEscolha uma das 5 Operações validas.\n");
        continue;
    }
    printf("\nResultado: %.1f\n", resultado);

    return 0;
}
