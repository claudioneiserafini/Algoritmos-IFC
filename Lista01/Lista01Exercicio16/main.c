#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variavel:
  float valor;

  //Entrada:
  printf("Informe o valor à ser verificado: ");
  scanf("%f", &valor);

  //Verificar:
  if(valor > 0){
    printf("O número %.2f é postivo.",valor);
  } else if(valor == 0){
    printf("O valor informado é zero ou nulo.");
  } else if(valor < 0){
    printf("O número %.2f é negativo.",valor);
  }

  return 0; 
}