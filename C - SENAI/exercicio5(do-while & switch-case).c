#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;
    float valor, milha, Km, C, F;

    do {
	    printf("CONVERSÃO DE UNIDADES.\n");
        printf("\n1- Km <--> Milhas.");
        printf("\n2- C° <--> F°.");
        printf("\n0- Sair da conversão.");  
        
        printf("\n\nEscolha a opção: ");
        scanf("%d", &opcao);
         
        system("cls");

        switch (opcao) {
         case 1:
            printf("Informe um valor de medida: ");
            scanf("%f", &valor);
            
            milha = valor / 1.609;
            Km = valor * 1.609;
            
            printf("Milhas -> Km: %.2f Km(s)\n", Km);
            printf("Km -> Milhas: %.2f Milhas\n", milha);
            break;
            
         case 2:
            printf("Informe um valor de medida: ");
            scanf("%f", &valor);
            
            F = (valor * 1.8) + 32;
            C = (valor - 32) / 1.8;
            
            printf("C° -> F°: %.1f F°\n", F);
            printf("F° -> C°: %.1f C°\n", C);
            break;
            
         case 0:
         	printf("Saindo...");
         	break;
            
         default: 
            printf("Opção indisponível.\nEscolha: 1ª ou 2ª.\n");
            continue;
        }
        
    } while (opcao != 0);

    return 0;
}
