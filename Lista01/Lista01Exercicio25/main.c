#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
//Definindo idioma:
setlocale(LC_ALL, "portuguese");

//Defenindo variaveis:
int time_a, time_b;

//Entrada: 
printf("Insira a quantia de gols do TIME A: ");
scanf("%d", &time_a);

printf("Insira a quantia de gols do TIME B: ");
scanf("%d", &time_b);

//Verficando/Saida::
if( time_a > time_b){
  printf("\nTime A fez %d gol(s) e o time B fez %d.\nO time vencedor é o TIME A! ", time_a, time_b);
}else if(time_a < time_b){
  printf("\nTime A fez %d gol(s) e o time B fez %d.\nO time vencedor é o TIME B! ", time_a, time_b);
}else{
  printf("\nTime A fez %d gol(s) e o time B fez %d.\nNão houve time vencedor: EMPATE! ", time_a, time_b);
}

return 0; 
}