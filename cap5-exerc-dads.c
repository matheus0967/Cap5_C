// criar um codigo 
// calcule a média de duas notas do aluno
// o código deve perguntar o nome do aluno, as duas notas 
// e exibir no terminal a média simples 
#include<stdio.h>
#include<math.h>


int main()
{
 
  float nota1, nota2, media; 
 
  printf("digite a sua primeira nota:");
  scanf("%f",nota1);
 
  printf("digite a sua segunda nota:");
  scanf("%f",nota2);
 
  media = (nota1 + nota2) / 2;
  printf("media do aluno = %.1f\n", media);
 
  return 0;
}
 