#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define S_MINIMO 1100
#define ALIQUOTA 0.05
#define DESCONTO_DEPENDENTES 0.05

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Defenindo variaveis:
  char cpf[15]; 
  int n_dependentes; 
  float renda_mensal, imposto_renda;

  //Entrada: 
  printf("Informe seu CPF: ");
  scanf("%s", cpf);

  printf("Informe o número de dependentes: ");
  scanf("%d", &n_dependentes);

  printf("Informe a renda mensal da familia considerando a renda dos dependentes: ");
  scanf("%f", &renda_mensal);

  //Verficando aliquota:
  if(renda_mensal/S_MINIMO <= 2){
    imposto_renda = 0;
  }else if(renda_mensal/S_MINIMO > 2 && renda_mensal/S_MINIMO <= 3 ){
    imposto_renda = renda_mensal*(ALIQUOTA);
  }else if(renda_mensal/S_MINIMO > 3 && renda_mensal/S_MINIMO <= 5 ){
    imposto_renda = renda_mensal*(ALIQUOTA*2);
  }else if(renda_mensal/S_MINIMO > 5 && renda_mensal/S_MINIMO <= 7 ){
    imposto_renda = renda_mensal*(ALIQUOTA*3);
  }else{
    imposto_renda = renda_mensal*(ALIQUOTA*4);
  }

  //Verficando desconto por dependentes:
  if(n_dependentes == 0){
    imposto_renda = imposto_renda;
  }else if(n_dependentes == 1){
    imposto_renda -= (S_MINIMO*DESCONTO_DEPENDENTES);
  }else if(n_dependentes == 2){
    imposto_renda -= (S_MINIMO*(DESCONTO_DEPENDENTES*2));
  }else{
    imposto_renda -= (S_MINIMO*(DESCONTO_DEPENDENTES*3));
  }

  //Saida
  if(imposto_renda <= 0){
    printf("\n\nO contribuinte com CPF: %s.\nEstá INSENTO de imposto!", cpf);
  }else{
    printf("\n\nO contribuinte com CPF: %s.\nDevera pagar o imposto de renda no valor de R$%.2f.", cpf, imposto_renda);
    }
  return 0; 
}