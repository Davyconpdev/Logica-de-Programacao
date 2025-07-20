// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Autor(a)    : Davy
// Data atual  : 04/09/2023

Var
   // Seção de Declarações das variáveis
   Nprest:inteiro
   rendaM, valorP, valorT:real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Renda mensal: ")
   leia(rendaM)
   escreva("Empréstimo de(R$): ")
   leia(valorT)
   escreva("Quantas prestações ?: ")
   leia(Nprest)
   limpatela

   valorP <- valorT / Nprest

   se(valorT <= (10 * rendaM)) e (valorP <= (0.3 * rendaM))entao
      escreval("Empréstimo concedido")
   senao
      escreval("Empréstimo negado")
   fimse

Fimalgoritmo