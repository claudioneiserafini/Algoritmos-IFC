#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 2

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float nota_01, nota_02, media_aritmetica;

  //Entrada:
  printf("Informe as duas notas notas:\n");
  scanf("%f %f", &nota_01, &nota_02); //testando multiple values getting

  //Calculando:
  media_aritmetica= (nota_01+nota_02)/TAM;

  //Saida:
  printf("\nA média aritmética é %.2f.", media_aritmetica);
  if(media_aritmetica >= 7){
    printf("\nAluno aprovado!");
  }else{
    printf("\nAluno reprovado!");
  }

  return 0; 
}