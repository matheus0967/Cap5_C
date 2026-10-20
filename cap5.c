#include <stdio.h>

int main ()

{
   
  int idade = 18;
  double altura = 1.81;
  char nome[20] = "Ana";
  char genero = 'F';
  double salario = 1234,56;
  
  printf ("Olá %s \n", nome);
  printf ("seu genero é: M(masc)/ F(fem) %c \n ", genero);
  printf ("Sua idade é: %i \n", idade);
  printf ("sua altura é: %.2f \n", altura);
  printf ("seu salario é: %.3f \n", salario);
  
 

}