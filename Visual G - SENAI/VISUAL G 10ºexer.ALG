// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Carlos Anderson
// Autor(a)    : Davy
// Data atual  : 03/09/2023

Var
   // Seção de Declarações das variáveis
   alcool: real
   gasolina: real
   litros: real
   tipoDeCombustivel: caracter
   valorTotalGasolina: real
   valorTotalAlcool: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe quantos litros:")
   leia(litros)
   limpatela

   escreva("Informe o tipo de combustível:")
   leia(tipoDeCombustivel)
   limpatela

   valorTotalGasolina <- litros * 6.59
   valorTotalAlcool <- litros * 3.79

   se(litros <= 25)entao
      escreva("O valor total de gasolina foi: R$", valorTotalGasolina * 0.97)
   senao
      se(litros > 25)entao
         escreva("O valor total de gasolina foi: R$", valorTotalGasolina * 0.95)
      fimse
   fimse
   escreval("")
   se(litros <= 25)entao
      escreva("O valor total de álcool foi: R$", valorTotalAlcool * 0.98)
   senao
      se(litros > 25)entao
         escreva("O valor total de álcool foi: R$", valorTotalAlcool * 0.98)
      fimse

Fimalgoritmo
fimse