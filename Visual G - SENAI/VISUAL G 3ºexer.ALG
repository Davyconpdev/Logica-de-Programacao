// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Autor(a)    : Davy
// Data atual  : 30/08/2023

Var
   // Seção de Declarações das variáveis
   a , b , soma , multiplicacao: inteiro
   c: caracter
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva(" digite um numero: ")
   leia(a)
   escreva(" digite outro numero: ")
   leia(b)
   limpatela

   soma <- a + b
    multiplicacao <- a * b

   se(a = b)entao
      escreval("c:"  , soma)
   senao
      escreval("c:"  ,multiplicacao)

   fimse

Fimalgoritmo