#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14


int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float f, temperatura;

  //Entrada:
  printf("Informe a temperatura em fahrenheit: ");
  scanf("%f", &f);

  //Calculando:
  temperatura = (f-32) * (double)5/9;

  //Saida:
  printf("\n%.2f°F em celsius é: %.2f°C",f, temperatura);

  return 0; 
}