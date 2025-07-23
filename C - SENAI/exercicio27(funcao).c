#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho() {
printf("\n=================================\n");
printf("\tSENAI");
printf("\n=================================\n");
}; 

float inflacao(float preco) {
    float resultado;

    if (preco < 100) {
        resultado = preco * 1.1;
    } 
    else {
        resultado = preco * 1.2; 
    }
        
return resultado;
}

int main() {
    setlocale(LC_ALL,"portuguese");

    float preco, precofinal;
    
    cabecalho();
    
    printf("Informe o preço do produto:");
    scanf("%f",&preco);

    precofinal = inflacao(preco);

    printf("Valor inflacionado: %.2f\n",precofinal);

return 0;
}
