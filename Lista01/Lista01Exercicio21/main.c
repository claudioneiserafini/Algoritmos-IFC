#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//O algoritimo do exercicio 19, já é adaptável apenas mudando o TAM do define, então esse eu fiz com if para ficar diferente.

int main (void){
//Definindo idioma:
setlocale(LC_ALL, "portuguese");

//Defenindo variaveis:
int valor_01, valor_02, valor_03, i, maior;

//Entrada: 
  printf("Escreva 3 valores: \n");
  scanf("%i %i %i", &valor_01, &valor_02, &valor_03);

//Encontra o maior número:
if(valor_01 > valor_02 && valor_01 > valor_03){
  maior = valor_01;
}else if(valor_02 > valor_01 && valor_02 > valor_03){
  maior = valor_02;
}else{
  maior=valor_03;
}

//Mostrar números:
printf("\nValores informados: \n%d, %d, %d", valor_01, valor_02, valor_03);

//Saida:
printf("\n\nO número %d é maior número informado!", maior);

return 0; 
}