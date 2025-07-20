// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Autor(a)    : Davy
// Data atual  : 13/09/2023

Var
   // Seção de Declarações das variáveis
   numero, par, impar, i:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   para i de 1 ate 5 passo 1 faca
      escreva (" digite: ", i ," ° um número: ")
      leia (numero)

      se (numero % 2 = 0)entao
         par <- par + 1
      senao
         impar <- impar + 1
      fimse
   fimpara

   escreval("quantidade de nùmeros pares:" ,par)
   escreval("quantidade de nùmeros ímpares:" ,impar)

Fimalgoritmo