#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 20

int main(void) {
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variáveis: 
  int valor, i=0, negativos=0;

  //Entrada:
  do{
    printf("Informe valores positivos ou negativos (0 para sair): ");
    scanf("%d", &valor);
    i++; //
    if(valor < 0){ //Verifica se é negativo.
      negativos++;
    }
  }while(valor!=0 && i < TAM);

  //Saida:
  printf("\nForam digitados %d, números negativos!", negativos);
  
  return 0;
}