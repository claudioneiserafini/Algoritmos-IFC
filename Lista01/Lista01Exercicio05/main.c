#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14


int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float r, h, volume;

  printf("Insira o valor de r: ");
  scanf("%f", &r);

   printf("Insira o valor de h: ");
  scanf("%f", &h);

  //Calculando:
  volume = (PI*pow(r,2)*h);

  //Saida:
  printf("\nO volume do cilindro é: %.2f", volume);

  return 0; 
}