#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14


int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float r, area;

  printf("Insira o valor de r: ");
  scanf("%f", &r);

  //Calculando:
  area = (4*PI*pow(r, 2));

  //Saida:
  printf("\nA área superficial da esfera é: %.2f", area);

  return 0; 
}