#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5
//O algoritimo do exercicio 20, já é adaptável apenas mudando o TAM do define, então esse eu alterei para ordem decrescente.

int main (void){
//Definindo idioma:
setlocale(LC_ALL, "portuguese");

//Defenindo variaveis:
int vet[TAM], i,j, aux;

//Entrada: 
for(i=0; i < TAM; i++){
  printf("Escreva %i° valor: ", i+1);
  scanf("%i", &vet[i]);
}

//Ordenar vetor em decresecente:
for(i=0; i < TAM; i++){
  for(j=i; j < TAM; j++){
    if(vet[i] < vet[j]){
      aux = vet[i];
      vet[i] = vet[j];
      vet[j] = aux;
    }
  }
}

//Saida:
printf("\nValores em ordem decrescente:");
for(i=0; i < TAM; i++){
  printf("[%d]",vet[i]);
}

return 0; 
}