#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variáveis:
  int multiplicando, tamanho, produto;

  //Entrada:
  printf("Informe qual multiplicando deseja calcular: ");
  scanf("%d", &multiplicando);
  printf("Informe o número maximo do multiplicador: ");
  scanf("%d", &tamanho);

  //Calculando:
  printf("\nTabuada do %d:\n", multiplicando);
  for(int i = 0; i <= tamanho; i++){
    produto = (multiplicando * i);
    printf("%d X %d = %d\n", multiplicando, i, produto);
  }
  return 0;
}