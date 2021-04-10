#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 4

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float n_01, n_02, n_03, n_04, media;

  //Entrada:
  printf("Informe o valor do primeiro número: ");
  scanf("%f", &n_01);

  printf("Informe o valor do segundo número: ");
  scanf("%f", &n_02);

  printf("Informe o valor do terceiro número: ");
  scanf("%f", &n_03);

  printf("Informe o valor do quarto número: ");
  scanf("%f", &n_04);

  //Calculando:
  media = ((n_01 + n_02 + n_03 + n_04)/TAM);

  //Saida:
  printf("\nA media dos valores é: %.2f", media);

  return 0; 
}