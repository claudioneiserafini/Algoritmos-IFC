#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  float n_horas, valor_hora, porcentual_INSS;
  float salario_liquido, salario_bruto;

  //Entrada:
  printf("Informe o número de horas trabalhadas: ");
  scanf("%f", &n_horas);

  printf("Informe o valor de por hora: ");
  scanf("%f", &valor_hora);

  printf("Informe o porcentual do INSS: ");
  scanf("%f", &porcentual_INSS);

  //Calculando:
  salario_bruto = n_horas * valor_hora;

  salario_liquido = (salario_bruto - (salario_bruto * (porcentual_INSS/100)));

  //Saida:
  printf("\nO salario liquido final é R$ %.2f", salario_liquido);

  return 0; 
}