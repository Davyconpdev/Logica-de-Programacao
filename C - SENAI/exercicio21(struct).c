#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 200

struct informe_livro {
    char nome[tam];
    char autor[tam];
    char categoria[tam];
    float preco;
};
 
int main() {
    setlocale(LC_ALL,"portuguese");
    int i = 0, n;
    
	printf("\nQuantos livros pretende cadastrar?: ");
    scanf("%d",&n);
    fflush(stdin);
    
    struct informe_livro livro[n];

    for (i = 0; i < n; i++) {
        printf("\nSolicitando informações do livro.\n");
        printf("Nome do livro: ");
        gets(livro[i].nome);
        fflush(stdin);
        
        printf("Autor: ");
        gets(livro[i].autor);
        fflush(stdin);

        printf("Categoria: ");
        gets(livro[i].categoria);
        fflush(stdin);

        printf("Preço (R$): ");
        scanf("%f",&livro[i].preco);
        fflush(stdin);
    }
    system("cls || clear");

for (i = 0; i < n; i++) {
    printf("\nLivro: %s\n",livro[i].nome);
    printf("Autor: %s\n",livro[i].autor);
    printf("Categoria: %s\n",livro[i].categoria);
    printf("R$ %.2f\n",livro[i].preco);
    printf("\n=================================\n");
}

    return 0;
 }
