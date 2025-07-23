#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");
    
    int i, j, n;
    
    printf("Defina o tamanho do vetor: ");
    scanf("%d",&n);
    fflush(stdin);
    
    int aux, numero[n];

    for (i = 0; i < n; i++) {
        printf("digite o %dº número: ",i+1);
        scanf("%d",&numero[i]);
    }

    for (i = 0; i < n; i++) {
    	for (j = 0; j < n-1; j++){
    		if(numero[j] > numero[j+1]){
    			aux = numero[j];
    			numero[j] = numero[j+1];
    			numero[j+1] = aux;
			}
		}		
	}

    printf("\nOrdenação crescente dos numeros:\n");
    for(i = 0; i < n; i++){
    	printf("%d ",numero[i]);
	}
   
    return 0;
}
