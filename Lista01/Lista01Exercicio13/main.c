#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define conversao 25.4

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float qntd_chuva_in, qntd_chuva_mm;

  //Entrada:
  printf("Informe a quantidade de chuva em polegadas: ");
  scanf("%f", &qntd_chuva_in);

  //Calculando:
  qntd_chuva_mm = (qntd_chuva_in*conversao);

  //Saida:
  printf("\n%.2f polegadas em milímetros é: %.2fmm",qntd_chuva_in, qntd_chuva_mm);

  return 0; 
}