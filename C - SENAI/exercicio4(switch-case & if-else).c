#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
   setlocale(LC_ALL, "portuguese");
   
   float compra, valorf;
   int opcao;

   printf("\n1- Dias �teis");
   printf("\n2- Fim de semana");
   printf("\nEm que dia a compra foi realizada?: ");
   scanf("%d", &opcao);
   system("cls");
    
   printf("Valor da compra: ");
   scanf("%f", &compra);
 
   switch (opcao) {
    case 1:
	   if (compra > 100) {
            valorf = compra * 0.9;
            printf("Valor descontado: R$%.2f\n", valorf);
       }
	   else{
            printf("Valor da compra: R$%.2f\n", compra);
       }
       break;
        
    case 2:
       if (compra > 100) {
            valorf = compra * 0.85;
            printf("Valor descontado: R$%.2f\n", valorf);
       }
	   else{
            printf("Valor da compra: R$%.2f\n", compra);
       }
       break;

    default:
        printf("Opcao inv�lida.\nEscolha apenas 1� ou 2� op��o.\n");
        continue;
}

 return 0;	
 }
