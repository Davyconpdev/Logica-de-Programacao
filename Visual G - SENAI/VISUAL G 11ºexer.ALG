// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Autor(a)    : Davy
// Data atual  : 06/09/2023

Var
   // Seção de Declarações das variáveis
   numx, numy:inteiro
   operacao: caracter
   resultado: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("digite um numero: ")
   leia(numx)
   escreva("operação:  ")
   leia(operacao)
   escreva("digite outro numero: ")
   leia(numy)
   limpatela

   escolha operacao
   caso "*"
      resultado <- numx * numy
   caso "/"
      resultado <- numx / numy
   caso "+"
      resultado <- numx + numy
   caso "-"
      resultado <- numx - numy

   outrocaso
      escreva("A operação é inválida!")
   fimescolha
   escreval("Resultado é: " ,resultado)


Fimalgoritmo