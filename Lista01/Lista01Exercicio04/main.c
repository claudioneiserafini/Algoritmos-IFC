#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14


int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float r, h, area;

  printf("Insira o valor de r: ");
  scanf("%f", &r);

   printf("Insira o valor de h: ");
  scanf("%f", &h);

  //Calculando:
  area = (PI*r*h);

  //Saida:
  printf("\nA área do cone é: %.2f", area);

  return 0; 
}