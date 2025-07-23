#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 5

void cabecalho() {
printf("\n=================================\n");
printf("\tSENAI");
printf("\n=================================\n");
}; 

void verificar(int numero[]) {
    int i, j, pares = 0, impares = 0, aux;

    for (i = 0; i < n; i++) {
        if (numero[i] %2 == 0) {
            pares++;
        } 
        else if(numero[i] %2 == 1) {
            impares++;
        } 
    }
    
    for(i = 0; i < n; i++){
    	for(j = 0; j < n-1; j++){
    		if(numero[j] > numero[j+1]){
    			aux = numero[j];
    			numero[j] = numero[j+1];
    			numero[j+1] = aux;
			}
		}
	}
    printf("Quantidade de números pares: %d\n",pares);
    printf("Quantidade de números ímpares: %d\n",impares);
    printf("Ordem crescente: ");
    for(i = 0; i < n; i++){
    	printf("%d ",numero[i]);
	}
}

int main() {    
    setlocale(LC_ALL, "portuguese");

    int numero[n], i = 0;

    cabecalho();
    
    for (i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);
    }
    verificar(numero);

    return 0;
}
