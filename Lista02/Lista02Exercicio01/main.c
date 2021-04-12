#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAM 1000

int main(void) {
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variáveis:
  int i, numero, multiplos;

  //Calculando:
  for(i = 0; i <= TAM; i++){
    if(i%10==0){
      multiplos = i;
      printf("[%d] é múltiplo de 10!\n", multiplos);

    }
  }
  return 0;
}