#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 100

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  char nome_piloto[TAM+1]; //valor maximo de caracter
  float distancia , tempo, velocidade;

  //Entrada:
  printf("Informe o nome do piloto: ");
  fgets(nome_piloto, TAM+1, stdin); //grava espaçamento no nome (sensitive enter).
  nome_piloto[strcspn(nome_piloto, "\n")] = '\0'; /* Remover quebra do enter*/

  printf("Informe a distância percorrida em km: ");
  scanf("%f", &distancia);

  printf("Informe o tempo levado para percorrer %.2fkm: ",distancia);
  scanf("%f", &tempo);

  //Calculando:
  velocidade = (distancia/tempo);

  //Saida:
  printf("\nA velocidade média de %s foi %.2fkm/h.",nome_piloto, velocidade);

  return 0; 
}