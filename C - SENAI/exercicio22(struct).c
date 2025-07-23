#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 200

struct dados_pessoais {
    char nome[tam];
    char nascimento[tam];
    char rg[tam];
    char cpf[tam];
};

int main() {
    setlocale(LC_ALL,"portuguese");

    int i = 0, n;
    
    printf("\nQuantas pessoas pretende registrar: ");
    scanf("%d",&n);
    fflush(stdin);
    
    struct dados_pessoais pessoal[n];

    for (i = 0; i < n; i++) {
        printf("\nSolicitando dados do usuário.\n");
        printf("Nome: ");
        gets(pessoal[i].nome);
        fflush(stdin);
        
        printf("Data de nascimento: ");
        gets(pessoal[i].nascimento);
        fflush(stdin);
        
        printf("RG: ");
        gets(pessoal[i].rg);
        fflush(stdin);

        printf("CPF: ");
        gets(pessoal[i].cpf);
        fflush(stdin);
        system("cls || clear");
    }
    system("cls || clear");

    for (i = 0; i < n; i++) {
        printf("\nNome: %s\n",pessoal[i].nome); 
        printf("Data de nascimento: %s\n",pessoal[i].nascimento); 
        printf("RG: %s\n",pessoal[i].rg); 
        printf("CPF: %s\n",pessoal[i].cpf); 
        printf("\n====================================\n");
	}

return 0;
}
