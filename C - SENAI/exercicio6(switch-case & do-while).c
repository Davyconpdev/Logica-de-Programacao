#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
 setlocale(LC_ALL,"portuguese");

    float precoproduto;
    float desconto;
    float precofinal;
    float precoparcelado;
    int opcao;
    int parcelas;

    printf("preço do produto:");
    scanf("%f",&precoproduto);

    printf("\nForma de pagamento.\n");
    printf("1- À vista \n");
    printf("2- A prazo \n");
    printf("0- Sair \n");
    printf("\nDigite a opção desejada: ");
    scanf("%d",&opcao);
    system("cls || clear");

    switch (opcao) {
     case 1:
        desconto = precoproduto * 0.1;
        precofinal = precoproduto - desconto;
        
        printf("Preço do produto: R$ %.2f \n", precoproduto);
        printf("Forma de pagamento: À vista \n" );
        printf("Desconto: R$ %.2f \n", desconto);
        printf("Preço final: R$ %.2f \n", precofinal);
		break;

    case 2:
        do {
            printf("Quantidade de parcelas:");
            scanf("%d",&parcelas);

            if (parcelas > 6) {
                printf("Parcelamento em até 6x. \n");
                printf("Digite a quantidade de parcelas novamente. \n");
            } 
        }while (parcelas > 6);

        precoparcelado = precoproduto / parcelas;  
        precofinal = precoproduto;
        system("cls");
        
        printf("Quantidade de parcela: %d \n", parcelas);
        printf("Preço das parcelas: R$ %.2f \n", precoparcelado);
        printf("Preço final: R$ %.2f \n", precofinal);
        break;

    case 0:
    	printf("Saindo...");
    	break;

    default:
        printf("Opção inválida.");
        continue;
    }
    return 0;
}
