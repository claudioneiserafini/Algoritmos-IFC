#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
//Definindo idioma:
setlocale(LC_ALL, "portuguese");

//Defenindo variaveis:
int valor;

//Entrada: 
printf("Insira um valor número: ");
scanf("%d", &valor);

//Verficando/Saida::

if( valor%2==0){
  printf("\nO número %d é um algorismo par!", valor);
}else{
  printf("\nO número %d é um algorismo impar!", valor);
}

return 0; 
}