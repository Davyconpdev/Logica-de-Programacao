#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float primeironum, segundonum, resultado;
    char opcao;

    printf("\nDigite um n�mero:\n");
    scanf("%f", &primeironum);
    fflush(stdin);
    
    printf(" * , / , + , - , : ");
    printf("Escolha uma opera��o: ");
    scanf("%c",&opcao);
    fflush(stdin);
    
    printf("\nDigite outro n�mero:\n");
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
     	printf("Opera��o inv�lida.\nEscolha uma das 5 Opera��es validas.\n");
        continue;
    }
    printf("\nResultado: %.1f\n", resultado);

    return 0;
}
