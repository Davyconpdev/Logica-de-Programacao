// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Carlos Anderson
// Autor(a)    : Davy
// Data atual  : 02/09/2023

Var
   // Seção de Declarações das variáveis
   corDoCd: caracter
   verde: caracter
   azul: caracter
   amarelo: caracter
   vermelho: caracter

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe a cor do cd que você comprou: ")
   leia(corDoCd)
   limpatela

   se(corDoCd = "verde")entao
      escreva("O valor foi de: R$ 10.00")
   fimse
   se(corDoCd = "azul")entao
      escreva("O valor foi de: R$ 20.00")
   fimse
   se(corDoCd = "amarelo")entao
      escreva("O valor foi de: R$ 30.00")
   fimse
   se(corDoCd = "vermelho")entao
      escreva("O valor foi de: R$ 40.00")
   fimse
Fimalgoritmo