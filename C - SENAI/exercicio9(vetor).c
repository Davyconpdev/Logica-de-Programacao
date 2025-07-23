#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");
    
   int i = 0, n;
    
   printf("Defina o tamanho do vetor: ");
   scanf("%d",&n);
   fflush(stdin);
   
  int maiorIdade = 0, menorIdade = 9999, idade [n];
  float peso [n], altura[n], somaPeso = 0, somaAltura = 0, pesoMedio, alturaMedia;
  float maiorPeso = 0, maiorAltura = 0, menorPeso = 9999, menorAltura = 9999;
  char nome[n] [100];

  for (i = 0; i < n; i++) {
        printf("\nInforme seu nome: ");
        gets(nome[i]);
        fflush(stdin);
    
        printf("Informe sua idade: ");
        scanf("%d",&idade[i]);
    
        printf("Informe seu peso: ");
        scanf("%f",&peso[i]);
        
        somaPeso += peso[i];
        fflush(stdin);
        
        printf("Informe sua altura: ");
        scanf("%f",&altura[i]);
        
        somaAltura += altura[i];
        fflush(stdin);

        maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
        alturaMedia = somaAltura / n;
        menorAltura = altura[i] < menorAltura ? altura[i] : menorAltura;

        maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
        menorIdade = idade[i] < menorIdade ? idade[i] : menorIdade;

        maiorPeso = peso[i] > maiorPeso ? peso[i] : maiorPeso;
        pesoMedio = somaPeso / n;
        menorPeso = peso[i] < menorPeso ? peso[i] : menorPeso;
    }

  system("cls || clear");

  for (i = 0; i < n; i++) {
        printf("\nNome: %s\n",nome[i]);
        printf("Idade: %d Anos\n",idade[i]);
        printf("Peso: %.2f Kg\n",peso[i]);
        printf("Altura: %.2f Metro(s)\n",altura[i]);
    }
    fflush(stdin);

  printf("\n\n");
  printf("MAIOR idade: %d Anos\n", maiorIdade);
  printf("MENOR idade: %d Anos\n",menorIdade);

  printf("\nMAIOR altura: %.2f Metro(s)\n",maiorAltura);
  printf("MENOR altura: %.2f Metro(s)\n",menorAltura);
  printf("Altura MEDIA: %.2f Metro(s)\n", alturaMedia);
  
  printf("\nMAIOR peso: %.2f Kg(s)\n",maiorPeso);
  printf("MENOR peso: %.2f Kg(s)\n",menorPeso);
  printf("Peso MEDIO: %.2f Kg(s)\n", pesoMedio);
 
 return 0;
}
