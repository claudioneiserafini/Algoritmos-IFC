#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float prestacao_atrasada, prestacao , taxa, num_dias_atraso;

  //Entrada:
  printf("Informe o valor de prestacao atrassada: ");
  scanf("%f", &prestacao);

  printf("Informe o valor da taxa porcentual: ");
  scanf("%f", &taxa);

  printf("Informe o número de dias atrassados: ");
  scanf("%f", &num_dias_atraso);

  //Calculando:
  prestacao_atrasada = prestacao + (prestacao * (taxa/100) * num_dias_atraso);

  //Saida:
  printf("\nO valor da prestação é R$ %.2f", prestacao_atrasada);

  return 0; 
}