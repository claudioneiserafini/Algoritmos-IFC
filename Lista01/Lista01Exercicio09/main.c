#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float salario, reajuste, novo_salario;
  //Entrada:

  printf("Informe o valor do salario: ");
  scanf("%f", &salario);
  printf("Informe a porcentagem de reajuste: ");
  scanf("%f", &reajuste);

  //Calculando valor com reajuste fornecido:
  novo_salario = (salario * (reajuste/100)) + salario;

  //Calculando valor com reajuste fixo:
  //novo_salario = (salario * 0.2375) + salario;

  //Saida:
  printf("\nO salario após reajuste é: %.2f", novo_salario);

  return 0; 
}