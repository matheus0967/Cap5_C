#include<stdio.h>
#include<math.h> // parte que add mateatica em seu codigo 

int main(){
   // se usar o int, iremos ter problemas com o codigo 
  float numero1 = 9.0f; // letra f depois do numero para indicar ''float'' 
  // tipo double  com float 
  double raiz = sqrt(numero1);
  //printf("a raiz qudrada ...") = mostrar o resultado na tela 
  printf("A raiz quadrada de %.1f é: %.2f  \n", numero1, raiz);
  
  // Potência ~ Power(pow) ~ valor 10 
  // primeiro valor 
  float x = 10.0f;
  // segundo valor 
  float y = 2.0f;
  // resultado do calculo 
  float  resultado = pow (x,y);
  printf("o valor de x: %f elevado a y: %f é igual a  = %f ", x, y, resultado);


  return = 0;
 


}