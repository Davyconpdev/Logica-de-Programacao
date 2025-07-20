// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Autor(a)    : Davy
// Data atual  : 30/08/2023

Var
   // Seção de Declarações das variáveis
   nome: caracter
   sexo: caracter
   estcivil: caracter
   anocasada: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva(" nome: ")
   leia(nome)
   escreva(" sexo: ")
   leia(sexo)
   escreva(" estado civil: ")
   leia(estcivil)
   limpatela

   se(sexo = "F") e (estcivil = "casada") entao
      escreva(" Quantos anos de casada?: ")
      leia(anocasada)
      escreval("seu nome: " , nome)
      escreval("seu sexo: " , sexo)
      escreval("seu estado civil: " , estcivil)
      escreval("anos de casada: " , anocasada)

   fimse
  fimse
Fimalgoritmo
