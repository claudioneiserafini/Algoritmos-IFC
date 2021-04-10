#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Defenindo variaveis:
  char nome[50];
  float salario_atual, aumento, novo_salario;

  //Entrada: 
  printf("Informe o primeiro nome: ");
  scanf("%s", nome);

  printf("Informe seu salario atual: ");
  scanf("%f", &salario_atual);

  printf("Informe o valor de reajuste: ");
  scanf("%f", &aumento);

  //Calculando:
  novo_salario= salario_atual+(salario_atual * (aumento/100));

  //Saida:
  printf("\n\nFuncionario: %s\nReajuste de %.1f\nNovo salario: R$%.2f", nome, aumento, novo_salario);

  return 0; 
}