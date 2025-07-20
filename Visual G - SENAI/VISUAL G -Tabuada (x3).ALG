// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Autor(a)    : Davy
// Data atual  : 03/09/2023

Var
   // Seção de Declarações das variáveis
   numero, numeroB, numeroC, n, ntotal: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("digite um numero: ")
   leia(numero)
   para n de 1 ate 10 faca
      ntotal <- numero * n
      escreval(numero, " * " ,n, " = " , ntotal)
   fimpara
   escreva("digite outro numero: ")
   leia(numeroB)
   para n de 1 ate 10 faca
      ntotal <- numeroB * n
      escreval(numeroB, " * " ,n, " = " , ntotal)
   fimpara
   escreva("digite mais um numero: ")
   leia(numeroC)
   para n de 1 ate 10 faca
      ntotal <- numeroC * n
      escreval(numeroC, " * " ,n, " = " , ntotal)
   fimpara


Fimalgoritmo