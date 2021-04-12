#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variáveis: 
  float e;
  int n, i;

  //Entrada:
  printf("Informe um valor inteiro e positivo para N: ");
  scanf("%d", &n);

  //Validando/Calculando:
  if(n > 0){
  for(i = 1; i <= n; i++){
    e += 1 / (float)i; 
  }
  e= e+1;
    //Saida:
    printf("\nResultado: E = %.2f.", e);
  }else{
    printf("\nValor de N inválido!");
  }

  return 0;
}