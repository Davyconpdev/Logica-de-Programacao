// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Autor(a)    : Davy
// Data atual  : 04/09/2023

Var
   // Seção de Declarações das variáveis
   nome:caracter
   x, y:inteiro
    soma, media: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("nome: ")
   leia(nome)
   escreva("1º nota: ")
   leia(x)
   escreva("2º nota: ")
   leia(y)
   limpatela

   media <- (x + y)/ 2

   se(media >= 6)entao
      escreval(media)
      escreval(nome ," Parabéns!")
   fimse
se(media >= 4) e (media <= 5.9)entao
      escreval(media)
      escreval("Recuperação")
   senao
      se(media < 4)entao
      escreval(media)
      escreval("Reprovado")
   fimse

Fimalgoritmo
fimse