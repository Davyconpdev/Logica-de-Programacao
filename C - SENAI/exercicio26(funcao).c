#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho() {
printf("\n=================================\n");
printf("\tSENAI");
printf("\n=================================\n");
}; 

float conversao(float metro) {
    return metro * 100;
};

int main() {
    setlocale(LC_ALL,"portuguese");

    float centimetro, metro;

    cabecalho();
    
    printf("Insira um valor (em metros):");
    scanf("%f",&metro);

    centimetro = conversao(metro);

    printf("metros -> centimetro: %.2f\n",centimetro);

    return 0;
}
