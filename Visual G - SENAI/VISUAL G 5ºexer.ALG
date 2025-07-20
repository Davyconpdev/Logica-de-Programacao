// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Autor(a)    : Davy
// Data atual  : 04/09/2023

Var
   // Seção de Declarações das variáveis
   a, b:inteiro
   //multi, divi, some, subt:real
   resultado : real
   opcao:caracter

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite um número: ")
   leia(a)

   escreva("Digite outro número: ")
   leia(b)
   limpatela

   escreva("Operacao: + - * /  ")
   leia(opcao)


   se(opcao = "+")entao
      resultado <- a + b
   fimse

   se(opcao = "-")entao
      resultado <- a - b
   fimse

   se(opcao = "*")entao
      resultado <- a * b
   fimse

   se(opcao = "/")entao
      resultado <- a / b
   fimse

      escreval("O resultado é:" ,resultado)
   

Fimalgoritmo