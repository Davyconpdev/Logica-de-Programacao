#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int n;
    
    printf("Defina o tamanho do vetor: ");
    scanf("%d",&n);
    fflush(stdin);

    int i = 0, positivo = 0, negativo = 0, maiornum = INT_MIN, menornum = INT_MAX, numero[n];
    int par = 0, impar = 0;
    float soma = 0, somapar = 0, somaimpar = 0, mediapar = 0, mediaimpar = 0, media = 0;

    //inserindo dados no vetor.
    for (i = 0; i < n; i++) {
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &numero[i]);
        fflush(stdin);

        soma += numero[i];
        // numero[i] > 0 ? positivo++ : negativo++;
        maiornum = numero[i] > maiornum ? numero[i] : maiornum;
        menornum = numero[i] < menornum ? numero[i] : menornum;
        
        //somando números pares e ímpares.
        if (numero[i] % 2 == 0) {
            somapar += numero[i];
            par++;
        }
        else {
            somaimpar += numero[i];
            impar++;
        }
        if (numero[i] > 0) {
            positivo++; 
		}
        else {
            negativo++; 
		}   
		
		//calculando as médias.
        mediapar = somapar / par;
        mediaimpar = somaimpar / impar;
        media = soma / n;
		fflush(stdin);
    }
    system("cls");
    
// imprimindo os dados.
    printf("Quantidade de números pares: %d\n", par);
    printf("Quantidade de números ímpares: %d\n", impar);
    printf("\nQuantidade de números positivos: %d\n", positivo);
    printf("Quantidade de números negativos: %d\n", negativo);
    printf("\nQuantidade de números inseridos: %d\n", n);
    printf("\nMaior número: %d\n", maiornum);
    printf("Menor número: %d\n", menornum);
    printf("\nMédia dos números pares: %.1f\n", mediapar);
    printf("Média dos números ímpares: %.1f\n", mediaimpar);
    printf("Média dos números inseridos: %.1f\n", media);
    fflush(stdin);
    printf("\nOrdem inversa dos números lidos.\n");
    for (i = n-1; i >= 0; i--) {
        printf("%d ", numero[i]);
    }

    return 0;
}
