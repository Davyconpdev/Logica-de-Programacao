// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Autor(a)    : Davy
// Data atual  : 04/09/2023

Var
   // Seção de Declarações das variáveis
   nome:caracter
   Quant:inteiro
   Puni, t, tA, tB, tC: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Descrição do produto: ")
   leia(nome)
   escreva("Quantidade: ")
   leia(Quant)
   escreva("Preço unitário: ")
   leia(Puni)
   limpatela

   t <- (Quant * Puni)
   tA <- t * 0.98
   tB <- t * 0.97
   tC <- t * 0.95

   se(Quant <= 5)entao
      escreval("R$:" ,tA)
   fimse
   se(Quant > 5) e (Quant <= 10)entao
      escreval("R$:" ,tB)
   senao
      se(Quant > 10)entao
         escreval("R$:" ,tC)
      fimse


fimse
Fimalgoritmo