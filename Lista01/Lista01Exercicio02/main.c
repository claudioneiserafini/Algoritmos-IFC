#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float h, l, b, area;

  printf("Insira o valor de h: ");
  scanf("%f", &h);

  printf("Insira o valor de l: ");
  scanf("%f", &l);

   printf("Insira o valor de b: ");
  scanf("%f", &b);

  //Calculando:
  area = ((h*l)+(h*b)+(l*b)*2);

  //Saida:
  printf("\nA área do cubo retangular é: %.2f m²", area);

  return 0; 
}