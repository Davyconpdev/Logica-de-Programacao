#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 200

struct conta_bancaria {
    char nome[tam];
    char numero[tam];
    char tipo[tam];
    float saldo;
    float deposito, saque;
};

float deposito(float valor, float valordepositado) {
    return valor + valordepositado;
}

float saque(float valor, float valorsacado) {
    return valor - valorsacado;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    struct conta_bancaria conta;
    int opcao;
    float entrada, saida;

    do {
        printf("\nCódigo.     Descrição.    \n");
        printf("   1 -   Cadastrar cliente. \n");
        printf("   2 -  Depositar valor.\n");
        printf("   3 -    Sacar valor.  \n");
        printf("   4 -    Mostrar saldo.   \n");
        printf("   0 -   Sair do programa. \n");
        
        printf("\nEscolha a opção desejada: ");
        scanf("%d", &opcao);
        
        system("cls");
        
        switch (opcao) {
         case 1:
            printf("\nSolicitando dados.\n");
            fflush(stdin);
            
            printf("\nNome: ");
            gets(conta.nome);
            fflush(stdin);

            printf("Número da conta: ");
            gets(conta.numero);
            fflush(stdin);

            printf("Tipo de conta: ");
            gets(conta.tipo);
            fflush(stdin);

            printf("saldo da conta: ");
            scanf("%f", &conta.saldo);
            fflush(stdin);
            break;

        case 2:
            printf("\nNome: %s\n", conta.nome);
            printf("\nNúmero da conta: %s\n", conta.numero);
            printf("\nTipo de conta: %s\n", conta.tipo);
            printf("\nValor do deposito: ");
            scanf("%f", &conta.deposito);
            
            entrada = conta.saldo += conta.deposito;
            break;

        case 3:
            printf("\nNome: %s\n", conta.nome);
            printf("\nNúmero da conta: %s\n", conta.numero);
            printf("\nTipo de conta: %s\n", conta.tipo);
            printf("\nValor do saque: ");
            scanf("%f", &conta.saque);

            saida = conta.saldo -= conta.saque;
            break;

        case 4:
            printf("\nSaldo atualizado: %.2f\n", entrada);
            printf("\nSaldo atualizado: %.2f\n", saida);
            printf("\nSaldo: %.2f\n", conta.saldo);
            break;
     
		case 0:
			printf("Saindo...");
		    break;
		  	   
        default:
        	printf("\nOpção Inválida.\nEscolha novamente uma opção valida.\n");
        	continue;
        }
        
    } while (opcao != 0);

    return 0;
}
