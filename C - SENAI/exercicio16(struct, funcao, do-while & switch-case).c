#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 200

struct dados_funcionario {
   char nome[tam];
   char cargo[tam];
   float salario;
};

float mediasalarial(struct dados_funcionario funcionarios[]) {
   int i;
   int contar = 0;
   float soma = 0.0, media = 0.0;

   for (i = 0; i < tam; i++) {
      if (strcmp(funcionarios[i].cargo, "programador") == 0) {
        contar++;
        soma += funcionarios[i].salario;
        media = soma/contar;
      }
    }

   return media;
}

int main() {
   setlocale(LC_ALL, "portuguese");

   struct dados_funcionario funcionario[tam];
   int opcao = 0, n = 0;

   do {
      printf("\nCódigo.   Descrição  \n");
      printf("   1 -  Cadastro.  \n");
      printf("   2 -  Exibir.\n");
      printf("   0 -  Sair.\n");
      
      printf("\nEscolha a opção desejada: ");
      scanf("%d", &opcao);
      fflush(stdin);
      
      switch (opcao) {
        case 1:
            printf("\nSolicitando dados do funcionário.\n");
            
            printf("\nNome: ");
            gets(funcionario[n].nome);
            fflush(stdin);
         
            printf("Cargo: ");
            gets(funcionario[n].cargo);
            fflush(stdin);
         
            printf("Salario: ");
            scanf("%f", &funcionario[n].salario);
            fflush(stdin);
            
            n++;
            system("cls");
            break;
       	    
        case 2:
        	// media = mediasalarial(funcionario);
       	    printf("Média salarial dos Programadores: R$ %.3f\n", mediasalarial(funcionario));
       		break;
       		
        case 0:
		    printf("Saindo...");
		    break;
    	
        default:
       		printf("Opção Inválida.\nEscolha novamente uma opção valida.\n");
       		continue;    	    
        }

   }while (opcao != 0);

   return 0;
}
