// MAIN
#include <stdio.h>
#include "soma.h"
#include "subtracao.h"
#include "divisao.h"
#include "multiplicacao.h"

int main(void) {
  int num1, num2;
  float resultado;
  char continua;

  continua = 'S';

  while (continua == 'S'  || continua == 's'){
    printf("\nEntrar com dois valores: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
     
    resultado = soma (num1, num2);
    printf("\nSoma = %.1f \n", resultado);
  
    resultado = subtracao (num1, num2);
    printf("\nSubtracao = %.1f \n", resultado);
   
    resultado = multiplicacao (num1, num2);
    printf("\nMultiplicacao = %.1f \n", resultado);
   
    resultado = divisao (num1, num2);
    printf("\nDivisao = %.1f \n", resultado);
    printf("\nDeseja continuar (S/N) ? \n");
    scanf("%s", &continua);
    printf("____________________________________");
  }
  printf("\nAté a próxima!!! \n");
  return 0;
}







