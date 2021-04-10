#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14


int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float r, volume;

  //Entrada:
  printf("Insira o valor de r: ");
  scanf("%f", &r);

  //Calculando:
  volume = (double)4/(double)3 * PI * pow(r,3);
  //utilizaçaõ de double pq a divisao estava retornando somente inteiro.

  //Saida:
  printf("\nO volume do cilindro é: %.2f", volume);

  return 0; 
}