//DIVISAO
#include <stdio.h>

// fucao para realizar a divisao de dois inteiros
// parametros: numero inteiro, numero inteiro
// retorna: a divisao dos dois numeros em tipo float
// caso o segundo numero seja zero, ele indicara uma mensagem de erro
float divisao(int numero1, int numero2){
  if (numero2 == 0){
    printf("\n Não dividirás por Zero\n");
    return 0;
  }
  return (float)numero1/(float)numero2;
}
