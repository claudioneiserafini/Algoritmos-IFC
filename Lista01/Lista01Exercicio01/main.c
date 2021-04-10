#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
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
  area = (2 * PI * r * h);

  //Saida:
  printf("\nA areá superficial do cilindro é: %.2f m²", area);

  return 0; 
}