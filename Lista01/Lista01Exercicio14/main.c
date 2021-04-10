#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 100

int main (void){
  //Definindo idioma:
  setlocale(LC_ALL, "portuguese");

  //Definindo variaveis:
  char nome_vendedor[TAM+1]; //valor maximo de caracter
  float salario_fixo, vendas_efetuadas, percentual_venda, salario_final;

  //Entrada:
  printf("Informe o nome do vendedor: ");
  fgets(nome_vendedor, TAM+1, stdin); //grava espaçamento no nome (sensitive enter).
  nome_vendedor[strcspn(nome_vendedor, "\n")] = '\0'; /* Remover quebra do enter*/
  
  //scanf("%s", nome_vendedor); //leitura da string, mas não grava dps do espaço.
  
  printf("Informe o salario fixo em reais: ");
  scanf("%f", &salario_fixo);

  printf("Informe o valor de vendas efetuadas: ");
  scanf("%f", &vendas_efetuadas);

  printf("Informe o porcentual por vendas: ");
  scanf("%f", &percentual_venda);

  //Calculando:
  salario_final = (salario_fixo+(vendas_efetuadas*(percentual_venda/100)));

  //Saida:
  printf("\nO vendedor %s recebeu R$%.2f(reais).",nome_vendedor, salario_final);

  return 0; 
}