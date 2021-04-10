#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Defenindo variaveis:
  float salario;

  //Entrada: 
  printf("Informe seu salario: ");
  scanf("%f", &salario);

  //Verficando aliquota:
  if(salario > 0 && salario <= 300){
    salario = salario+(salario*0.10);
  }else if(salario > 300 && salario <= 600){
    salario = salario+(salario*0.11);
  }else if(salario > 600 && salario <= 900){
    salario = salario+(salario*0.12);
  }else if(salario > 900 && salario <= 1500){
    salario = salario+(salario*0.06);
  }else if(salario > 1500 && salario <= 2000){
    salario = salario+(salario*0.03);
  }

  //Saida
  if(salario > 2000){
    printf("\nNão houve reajuste em seu salario!\nSalario atual: R$%.2f", salario);
  }else{
  printf("\nSeu salario após reajuste é R$%.2f", salario);
  }

  return 0; 
}