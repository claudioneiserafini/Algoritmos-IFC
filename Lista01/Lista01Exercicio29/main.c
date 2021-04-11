#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 5

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Defenindo variaveis:
  float media;

  //Definindo struct: 
  struct temperatura_media{ //tipo de dado.
  char nome[60];
  float temperatura;
  }municipio[TAM]; //nome

  //Entrada:
  for(int i = 0; i < TAM; i++){
  printf("\nInforme o nome do %d° município: ", i+1);
  fgets(municipio[i].nome, 60, stdin);
  municipio[i].nome[strcspn(municipio[i].nome, "\n")] = '\0'; //Remove [spacebar] do fgets.
  
  printf("Informe a temperatura média de %s: ", municipio[i].nome);
  scanf("%f", &municipio[i].temperatura);
  getchar();
  }

  //Calculando temperatura media região:
  for(int i = 0; i < TAM; i++){
  media = media + municipio[i].temperatura;
  }
  
  media = media / TAM;

  //Saida:
  printf("\n"
  "|============================================|\n"
  "|  A temperatura media da região é: %.2f°C  |\n"
  "|============================================|", media);
return 0; 

}
